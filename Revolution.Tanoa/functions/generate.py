from pathlib import Path
import glob

def format_function_class(sqf_file: Path):  
    function_name = ""
    function_path = ""
    subcategory = ""
    subcategory_folder = ""
    return_value = ""

    if sqf_file.is_file():
      function_path = sqf_file.relative_to(folder_functions.parent)
      depth = len(function_path.parents)

      if (sqf_file.name.startswith('fn_')):
        function_path = sqf_file.relative_to(folder_functions.parent)

        if depth > 3:
          subcategory_folder = function_path.parents[depth - (depth - (depth - 4))]
          subcategory = format_subcategory(subcategory_folder)
          function_name = sqf_file.stem.replace('fn_', '')
          return_value = nested_folder_function_name(subcategory, function_name, function_path)
        
        elif depth <= 3:

          if depth == 3:
            subcategory_folder = function_path.parent
            subcategory = format_subcategory(subcategory_folder)
            function_name = sqf_file.stem.replace('fn_', '')
            return_value = nested_folder_function_name(subcategory, function_name, function_path)
          
          elif depth == 2:
            function_name = sqf_file.stem.replace('fn_', '')
            return_value = core_function_name(subcategory, function_name, function_path)
      
      else:
        print(f"### ERROR! Function name didn't start with \"fn_\". It was not added to CfgFunctions. Function path: {function_path}")
    
    return return_value

def format_subcategory(subcategory: Path):
  prefix = subcategory.parent
  subcategory = str(subcategory).replace((str(prefix)), '')
  subcategory = subcategory[1:]
  return subcategory

def nested_folder_function_name(subcategory: Path, function_name: str, function_path: Path):
  return f"class {subcategory}_{function_name}" + f" {{ file = \"{function_path}\"; }};"

def core_function_name(subcategory: Path, function_name: str, function_path: Path):
  return f"class {function_name}" + f" {{ file = \"{function_path}\"; }};"

# MAIN SCRIPT START

# DEFINE YOUR OWN TAG INSIDE THE VARIABLE BELOW
tag = 'REVOLUTION'

folder_functions = Path(__file__).parent.resolve()
file_cfg = folder_functions / 'CfgFunctions.hpp'

content = [
        "#ifdef DEBUG_ENABLED_FULL",
        "allowFunctionsRecompile = 1;",
        "allowFunctionsLog = 1;",
        "#endif",
        "",
        "class CfgFunctions",
        "{",
        "",
        f"\tclass {tag}",
        "\t{"
]

# Get all categories by looking at the folders
categories = [x for x in folder_functions.iterdir() if x.is_dir()]
categories.sort(key=lambda x: x.name.upper())

content.append("")

for cat in categories:
  print(f"### CATEGORY ADDED: {cat.name}")
  content.extend([f'\t\tclass {cat.name}', "\t\t{"])

  subfolders_files = glob.glob(str(cat) + '/**/*.sqf', recursive=True)
   

  if len(subfolders_files) > 0:
    for f in subfolders_files:
      sqf_file = Path(f)
      formatted_class = format_function_class(sqf_file)
      # print(f"Adding the following to CfgFunctions: {formatted_class}")
       
      if formatted_class != "" or formatted_class:
        content.append(f'\t\t\t{formatted_class}')

  content.append('\t\t};\n')

content.extend(["\t};","","};"])
output = '\n'.join(content)
file_cfg.write_text(output)
print("")
print("### CfgFunctions is now ready!")
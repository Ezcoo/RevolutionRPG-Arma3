from pathlib import Path
import glob

def recursiveFileSearch(file_or_folder):
    
    function_name = ""
    function_path = ""
    return_value = ""

    if file_or_folder.is_dir():
      recursiveFileSearch(file_or_folder)
    elif file_or_folder.is_file():
      if (file_or_folder.name.startswith('fn_')):
        function_path = file_or_folder.relative_to(folder_functions.parent)
        function_name = file_or_folder.stem.replace('fn_', '')
        return_value = f"class {function_name}" + f" {{ file = \"{function_path}\"; }};"
      else:  
        return_value = ""
    
    return return_value


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
   print(f"Category name: {cat.name}")
   content.extend([f'\t\tclass {cat.name}', "\t\t{"])

   subfolders_files = glob.glob(str(cat) + '/**/*.sqf', recursive=True)

   if len(subfolders_files) > 0:
     for f in subfolders_files:
       path_to_folder_or_file = Path(f)
       sqfFile = recursiveFileSearch(path_to_folder_or_file)
       print(f"Adding the following to CfgFunctions: {sqfFile}")
       
       if sqfFile:
         content.append(f'\t\t\t{sqfFile}')

   content.append('\t\t};\n')

content.extend(["\t};","","};"])
output = '\n'.join(content)
file_cfg.write_text(output)
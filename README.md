# Revolution RPG

![](/logos/logo_black_vignette_JPG.jpg)

**Revolution RPG** is an atypical roleplaying gamemode in Arma 3.


## Why does this project exist?

The ultimate goal of this project is to bring back the Arma 2 style, mindset and feel of RPG/Life gameplay with improved feature set.


## Key focus areas

- _light_, arcade roleplay that's still fun for everyone, including new players
- allowing as much _creativity_ by players as possible
- minimal ruleset by default
- _fast_ progression
- _endgame_
- lots of PvP action.

Another important aspect of Revolution RPG is that it returns the control of the game back to players: e.g. leaders ingame are voted by the players.


## Discord

[Join our Discord](https://discord.gg/2Gg6uMg5jD) if you're interested in the project.



## GNU GPLv3 license

Please note that due to e.g. some external code used in this project, the license of the source code is **GNU GPLv3**. See `LICENSE` file in main directory of the repository. See https://fossa.com/blog/open-source-software-licenses-101-gpl-v3/ for well written explanation.


In short, you **_are_** allowed to...

- use the code for commercial purposes
- change the code
- distribute copies or modifications of the code (including binaries)
- place warranty


...as long as you...

- release the _modified source_ code publicly
- explain/state the changes made to the original source code
- include the same license (GNU GPLv3) with _full_ license text in the modified source code
- include copies of the original copyright notices already included in the source code that you've edited
- include installation instructions of the modified source code.


## Requirements

### Playing

- _Arma 3_
- _Arma 3 DLCs_ (optional, depending on the server)

### Hosting

- _Arma 3_ **or** _Arma 3 Server_ dedicated Steam package (see **[Development setup](https://github.com/Ezcoo/RevolutionRPG-Arma3/blob/main/README.md#2-development-setup-for-your-convenience)** below). Note that you need to host the gamemode on a _dedicated_ server, i.e. with `arma3server_x64.exe`. Player hosted (ingame) servers do not work properly.


## Installation / Project Setup

- **There are two important core folders (containing code and data) in the main directory of repository: `core` and `coreUi`**.

### 1. Deploying Revolution RPG on server:

**1.1. Deploying Revolution RPG on server — Downloading/syncing the gamemode files** 
- Clone this repository either with a Git client or download the ZIP file from the button in upper part of this page.

**1.2. Deploying Revolution RPG on server — Unzipping** (optional)
- Unzip the ZIP file (if it's what you downloaded manually).

**1.3. Deploying Revolution RPG on server — Copying common core functions folder to mission folder**
- Copy the `core` folder (located at the main directory of this repository, wherever you have it on your disk) into `Revolution.WORLDNAME/functions/` (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!).

**1.4. Deploying Revolution RPG on server — Copying common core user interfaces and related base defines to mission folder**
- Copy the `coreUi` folder (located at the main directory of this repository, wherever you have it on your disk) into `Revolution.WORLDNAME/ui/` folder (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!).

**(1.5.) Deploying Revolution RPG on server — Packing the mission into PBO file** (optional, strongly recommended in production / if actually hosting the gamemode)
- Optionally, you probably want to compile the mission files into a packed PBO file for multiple reasons (like optimization and bunch of other reasons). Use the tool you prefer for that.


### 2. Development setup (for your convenience):

- I **strongly** suggest creating some **hard** (**directory**) links (_not_ symbolic links or file links!) as follows (see example guide here: https://www.howtogeek.com/16226/complete-guide-to-symbolic-links-symlinks-on-windows-or-linux/). 
- **This allows you to have the luxury of editing single file ("source of truth") that gets reflected automatically to other relevant folders by your operating system.** There's no need to copy and paste edited files manually anymore every time you make a change to source code! (It's a very common source of bugs and errors too.)
- As you will notice, everything in the development process that can be automated has been automated (or it's intended to become automated eventually at least). This reduces the number of possible sources of bugs (as manual processes tend to be error prone). It also frees a surprisingly large amount of your mental capacity to be used in actual development and not focusing on basically useless and repetitive tasks that indeed also tend to create those nasty bugs when you forgot to copy-paste a file or folder in the correct directory and it resulted in weird error that you spent hours debugging until realizing that the files are not in sync, and so forth.


**2.1. Development setup — Prerequisites**

**2.1.1.**
- Fork this repository with Git (or just download it with a Git client or directly as ZIP file from the upper part of this page) – it's up to you to choose the method.

**2.1.2.**
- Start creating the **hard directory links** (with a tool you've chosen or command line – again, it's up to you to choose the method):

**2.1.3.**
- **Destination/Link #1**: `Revolution.WORLDNAME/functions/core` folder (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!). Depending on the tool or script/command line you're using, you might need to create an empty `Revolution.WORLDNAME/functions/core` folder at first.
- **Source/Target #1**: `core` folder (located at the main directory of this repository, wherever you have it on your disk).

**2.1.4.**
- **Destination/Link #2**: `Revolution.WORLDNAME/ui/coreUi` folder (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!). Depending on the tool or script/command line you're using, you might need to create an empty `Revolution.WORLDNAME/ui/coreUi` folder at first.
- **Source/Target #2**: `coreUi` folder (located at the main directory of this repository, wherever you have it on your disk).


**2.2. Development setup — 3DEN Editor setup** (optional, recommended)

**2.2.1.**
- Additionally, **after** completing the previous steps in Development setup, you might want to make (preferably again hard) _directory_ links to your profile MPMissions folder (`yourArma3ProfileFolder/mpmissions` (for quick development in 3DEN editor) **and** game installation MPMissions directory (`Steam/steamapps/common/Arma 3/MPMissions`) for actual testing (including locality) with other players. 
- Note! `yourArma3ProfileFolder` might be located at `yourUsername\Documents\Arma 3` **or** `yourUsername\Documents\Arma 3 - Other Profiles` on Windows.

**2.2.2.** 
- **Destination/Link #3**: `Revolution.WORLDNAME` folder in `yourArma3ProfileFolder` (!). (Depending on the tool or script/command line you're using, you might need to create an empty `yourArma3ProfileFolder/mpmissions/Revolution.WORLDNAME` folder at first).
- **Source/Target #3**: `Revolution.WORLDNAME` folder (located at the main directory of this repository, wherever you have it on your disk).


**2.3. Development setup — local dedicated server setup** (optional, recommended)

**2.3.1.**
- For locality testing or testing the code with multiple players on an actual _dedicated_ Arma 3 server:
- `yourArma3ServerInstallDirectory` can be either Arma 3 install directory or dedicated Arma 3 Server Steam package.
- Note! If you're using dedicated Arma 3 Server Steam package, you need to edit a file called `steam_appid.txt` in its install directory and replace the value with in the file with `107410` with e.g. _Notepad_ (do **not** use a text editor like _Word_ or _Wordpad_!). Then set the `steam_appid.txt` file to read-only mode. (Right-click the file in File Explorer and select "Properties", then tick the "Read only" box and save the changes.)

**2.3.2.**
- **Destination/Link #4**: `Revolution.WORLDNAME` folder in your Arma 3 (Server) installation folder -> `MPMissions` folder. (Depending on the tool or script/command line you're using, you might need to create an empty `Arma3OrArma3ServerInstallDirectory/MPMissions/Revolution.WORLDNAME` folder at first).
  - **Source/Target #4**: `Revolution.WORLDNAME` folder (located at the main directory of this repository, wherever you have it on your disk).

**(2.3.3.)** **Repeat** the development setup steps above for **each** Arma 3 map that you wish to play on (that's supported, unless you create the configs and map specific functions for the map yourself).

### 3. Starting editing (after completing development setup above)

**3.1. Starting editing — Getting your hands dirty** 
- **Open** the **main directory** of the **copied repository** (wherever you have it on your disk) with your favourite code editor and start editing! (My choice is _Visual Studio Code_ with some awesome Arma 3 related extensions that make scripting Arma a ton easier.)

### **IMPORTANT!**

_In case of you completed the previous steps in development setup (again, strongly recommended):_

- **If you want to modify core files, edit _only_ files inside the `core` and `coreUI` folders in the main repository folder**, wherever it's located on your disk. The changes you'll make to the core folders get reflected to other folders automatically thanks to the (hard directory) links that you created in previous steps. (Just remember to save your changes in the code editor unless your editor does it automatically.)

### 4. Automatic generation of `CfgFunctions`

**4.1. Automatic generation of `CfgFunctions` — Prerequisites**

- `CfgFunctions` is a modern way to declare your functions in Arma 3. It offers various important benefits, like better security, more advanced debugging opportunities, and even improved performance. See [Bohemia Wiki - Arma 3: Functions Library](https://community.bistudio.com/wiki/Arma_3:_Functions_Library) for further information.
- This repository contains a Python script named `generate.py` that automatically generates `CfgFunctions.hpp` file that you can run after adding, removing or renaming functions (instead of updating `CfgFunctions.hpp` manually). If you decide to not to use the Python script, you need to update `CfgFunctions.hpp` by yourself. The Python script has been originally developed by **7erra** and further modified by me, **Ezcoo**. You need to have modern version of Python installed for it to work.
- `CfgFunctions.hpp` and the Python script (`generate.py`) are located at `Revolution.WORLDNAME/functions` folder.
- **Note:** As you might have noticed already, the **Python script needs to be run separately for each map** (for now at least) so that the map specific functions in `Revolution.WORLDNAME/functions/mapSpecific` get included as well. (A fully automated solution might appear here in future. _Soon™_.)
- Install Python from Microsoft Store (recommended method) on Windows or download and install it from here: [https://www.python.org/downloads/](https://www.python.org/downloads/)).

**4.1. Automatic generation of `CfgFunctions` — Configuring the Python script** 
- Configure the script: open `generate.py` in a code editor and replace the `TAG` variable (marked with comment) _value_ with your own _value_ if needed. Do not change the variable name itself! 

**4.2. Automatic generation of `CfgFunctions` — Running the Python script**
- After installing Python, you can run the script (located at `Revolution.WORLDNAME/functions/generate.py`) from command line with command: `python3 generate.py` (on Windows). Note that your current command line/terminal folder needs to be the folder where the script is located at; you can open the current directory on command line by right-clicking empty space in the folder in File Explorer and choosing the appropriate option from the menu. The same applies to most Linux distributions as well.
- **Repeat** this step (**4.2.**) for **each** map and **every time you rename, add or remove function files** (such as imaginary `core/functions/gps/fn_tutorialExample.sqf`) regardless of whether they are contained in core or map specific files before launching the mission in editor or launching your server.
- It's probably a good idea to keep a command line or terminal in a correct folder open in the background while developing, using a shortcut in it (press UP arrow key to get the last line you've written to the command line/terminal) and then pressing ENTER to recompile the script since you need to do it all the time while at it.

**4.3. Automatic generation of `CfgFunctions` — Function file naming standards & folder structure** (mandatory)
- **Note:** the function filenames **must** adhere to the official naming standard (`fn_yourFunction.sqf`) and adhere to a proper folder structure too! See more info about `CfgFunctions` and the required standards here: [Bohemia Wiki - Arma 3: Functions Library: Function Declaration](https://community.bistudio.com/wiki/Arma_3:_Functions_Library#Function_Declaration).
- Core files (core file = used on all maps) must be added to `core` (functions) or `coreUi` (user interfaces and base defines) folders (located at the main directory of this repository, wherever you have it on your disk).
- Map specific files have to be added to `Revolution.WORLDNAME/functions/mapSpecific/WORLDNAME` (functions) or `Revolution.WORLDNAME/ui/mapSpecific/WORLDNAME` (map specific defines and user interfaces).

- _Use CfgFunctions! It was added for a reason. Really, not joking here._


## Special thanks

I'd like to thank everyone involved in this project and it's predecessors. Special thanks go to the following people and projects:

[**A3GPS project (GitHub)**](https://github.com/AmauryD/A3GPS)
- **AmauryD**
- **code34**
- **Kifkick**

**Others:**

- **qbt** for allowing me to use the code of the predecessor of this project, _Daylight RP_ (and teaching me so many things about SQF in general etc.)
- **7erra** for his awesome CfgFunctions generation script that I modified further
- Everyone in the Arma community who has helped me to make this happen (just to name a few: **Leopard20**, **Dedmen**, **Lou Montana**, **Sa-Matra**, **koalas**, **R3vo**) – if I forgot to name you here, contact me!

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

- _Arma 3_ **or** _Arma 3 Server_ dedicated Steam package (see **Development setup** below). Note that you need to host the gamemode on a _dedicated_ server, i.e. with `arma3server_x64.exe`. Player hosted (ingame) servers do not work properly.


## Installation / Project Setup

- **There are two important core folders (containing code and data) in the main directory of repository: `core` and `coreUi`**.

### Option 1: Deploying Revolution RPG on server:

- Clone this repository either with a Git client or download the ZIP file from the button in upper part of this page.
- Unzip the ZIP file (if it's what you downloaded manually).
- Copy the `core` folder (located at the main directory of this repository, wherever you have it on your disk) into `Revolution.WORLDNAME/functions/` (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!).
- Copy the `coreUi` folder (located at the main directory of this repository, wherever you have it on your disk) into `Revolution.WORLDNAME/ui/` folder (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!).
- Optionally, you probably want to compile the mission files into a packed PBO file for multiple reasons (like optimization and bunch of other reasons). Use the tool you prefer for that.


### Option 2: Development setup (for your convenience):

- I **strongly** suggest creating some **hard** (**directory**) links (_not_ symbolic links or file links!) as follows (see example guide here: https://www.howtogeek.com/16226/complete-guide-to-symbolic-links-symlinks-on-windows-or-linux/). 

- **This allows you to have the luxury of editing single file ("source of truth") that gets reflected automatically to other relevant folders by your operating system.** There's no need to copy and paste edited files manually anymore every time you make a change to source code! (It's a very common source of bugs and errors too.)


**PHASE 1**

 - Fork this repository (or just download it with a Git client or as ZIP file from the upper part of this page) – it's up to you to choose the method.

 - Start creating the **hard directory links** (with a tool you've chosen or command line – again, it's up to you to choose the method):
 - **Destination/Link #1**: `Revolution.WORLDNAME/functions/core` folder (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!). Depending on the tool or script/command line you're using, you might need to create an empty `Revolution.WORLDNAME/functions/core` folder at first.
 - **Source/Target #1**: `core` folder (located at the main directory of this repository, wherever you have it on your disk).

 - **Destination/Link #2**: `Revolution.WORLDNAME/ui/coreUi` folder (where `WORLDNAME` is the _internal_ Arma 3 world name of the map you want to play on – note that e.g. Livonia is internally named as `Enoch`!). Depending on the tool or script/command line you're using, you might need to create an empty `Revolution.WORLDNAME/ui/uiCore` folder at first.
 - **Source/Target #2**: `coreUi` folder (located at the main directory of this repository, wherever you have it on your disk).


**PHASE 2 — 3DEN Editor setup** (optional)

- Additionally, **after** – and only after – completing the previous steps in Development setup, you might want to make (preferably again hard) _directory_ links to your profile MPMissions folder (`yourArma3ProfileFolder/mpmissions` (for quick development in 3DEN editor) **and** game installation MPMissions directory (`Steam/steamapps/common/Arma 3/MPMissions`) for actual testing (including locality) with other players.
 - For quick editing in 3DEN editor: 
  - Note! `yourArma3ProfileFolder` might be located at `yourUsername\Documents\Arma 3` **or** `yourUsername\Documents\Arma 3 - Other Profiles` on Windows.
  - **Destination/Link #3**: `Revolution.WORLDNAME` folder in `yourArma3ProfileFolder` (!). (Depending on the tool or script/command line you're using, you might need to create an empty `yourArma3ProfileFolder/mpmissions/Revolution.WORLDNAME` folder at first).
  - **Source/Target #3**: `Revolution.WORLDNAME` folder (located at the main directory of this repository, wherever you have it on your disk).


**PHASE 3 — local dedicated server setup** (optional)

 - For locality testing or testing the code with multiple players on an actual _dedicated_ Arma 3 server:
  - `yourArma3ServerInstallDirectory` can be either Arma 3 install directory or dedicated Arma 3 Server Steam package.
   - Note! If you're using dedicated Arma 3 Server Steam package, you need to edit a file called `steam_appid.txt` in its install directory and replace the value with in the file `107410` with e.g. Notepad (do **not** use a text editor like _Word_ or _Wordpad_!). Then set the `steam_appid.txt` file to read-only mode. (Right-click the file in File Explorer and select "Properties", then tick the "Read only" box and save the changes.)
  - **Destination/Link #4**: `Revolution.WORLDNAME` folder in your Arma 3 (Server) installation folder -> `MPMissions` folder. (Depending on the tool or script/command line you're using, you might need to create an empty `Arma3OrArma3ServerInstallDirectory/MPMissions/Revolution.WORLDNAME` folder at first).
  - **Source/Target #4**: `Revolution.WORLDNAME` folder (located at the main directory of this repository, wherever you have it on your disk).

**Repeat** the development setup steps above for **each** Arma 3 map that you wish to play on (that's also supported, unless you create the configs for the map yourself).

**STARTING EDITING AFTER COMPLETING DEVELOPMENT SETUP**

- **Open** the **main directory** of the **copied repository** (wherever you have it on your disk) with your favourite code editor. (My choice is _Visual Studio Code_ with some awesome extensions making scripting Arma a ton easier.)

**IMPORTANT!**

If you completed the previous steps in development setup:

- If you want to modify **core** files, edit **only** files inside the `core` and `coreUI` folders in the **main repository folder**, wherever it's located on your disk. The changes get reflected to other folders automatically thanks to the (hard directory) links that you created in previous steps. (Just remember to save your changes in the code editor unless your editor does it automatically.)

- This repository contains a Python script that generates `CfgFunctions.hpp` file that you can run after adding, removing or renaming functions. It's originally developed by **7erra** and further modified by me, **Ezcoo**. You need to have modern version of Python installed for it to work (install Python from Microsoft Store (recommended method) on Windows or download and install it from here: [https://www.python.org/downloads/](https://www.python.org/downloads/)).
- Configure the script: open it in a code editor and replace the `TAG` variable (marked with comment) _value_ with your own _value_ if needed. Do not change the variable name itself! 
- After installing Python, you can run the script (located at `core/functions/generate.py`) from command line with command: `python3 generate.py` (on Windows). Note that you need to be in a folder where the script is located at in the command line/terminal; you can open the current directory on command line by right-clicking empty space in the folder in File Explorer and choosing the appropriate option from the menu; the same applies to most Linux distributions as well).
- **Note** that the function filenames **must** adhere to the official naming standard (`fn_yourFunction.sqf`) and adhere to the folder structure too! See more info about `CfgFunctions` and the required standards here: [Bohemia WIKI - Arma 3: Functions Library](https://community.bistudio.com/wiki/Arma_3:_Functions_Library). 
- _Use CfgFunctions! Really, not joking here._


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

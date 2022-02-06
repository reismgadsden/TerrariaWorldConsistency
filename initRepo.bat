@ECHO OFF
CD %USERPROFILE%\Documents\My Games\Terraria\Worlds
git init .
git remote add origin https://github.com/reismgadsden/TerrariaWorlds.git
git checkout main
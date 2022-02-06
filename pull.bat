@ECHO Off
CD %USERPROFILE%\Documents\My Games\Terraria\Worlds
git fetch --all
git reset --hard origin/main
ECHO Worlds have been pulled from repo.
ECHO Press Enter to close CMD
PAUSE > nul
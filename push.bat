ECHO HELLO
PAUSE
CD %USERPROFILE%\Documents\My Games\Terraria\Worlds
git add .
git commit -m "Worlds pushed by %USERNAME%"
git push -u origin main
ECHO Worlds have been pushed to repo.
ECHO Press Enter to close CMD
PAUSE > nul
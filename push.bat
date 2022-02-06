@ECHO Off
CD %USERPROFILE%\Documents\My Games\Terraria\Worlds
git add The_Image_of_Comfort.*
git commit -m "Worlds pushed by %USERNAME%"
git push -u origin main
ECHO Worlds have been pushed to repo.
ECHO Press Enter to close CMD
PAUSE > nul
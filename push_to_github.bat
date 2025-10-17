@echo off
cd /d "C:\Users\sachd\Desktop\DSA"
git add .
git commit -m "Auto save from Dev-C++"
git pull origin main --rebase
git push
pause

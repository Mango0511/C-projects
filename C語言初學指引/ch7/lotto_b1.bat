@echo off
ch7_25 %1
if errorlevel=1 goto a1
goto end
:a1
echo 輸入錯誤參數,請輸入1~48的數值
goto end
:end
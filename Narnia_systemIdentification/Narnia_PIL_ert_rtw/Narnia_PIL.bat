
cd .

if "%1"=="" ("D:\Applications\MATLAB\bin\win64\gmake"  -f Narnia_PIL.mk all) else ("D:\Applications\MATLAB\bin\win64\gmake"  -f Narnia_PIL.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1
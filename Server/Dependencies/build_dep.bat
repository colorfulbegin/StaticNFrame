@echo off
echo Building dependencies...

call "D:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64

cd mysql
cmake -G "Visual Studio 14 2015 Win64"
devenv.com libmysql.sln /build Debug
cd ..


cd libevent
nmake /f Makefile.nmake
copy libevent.lib ..\\..\\Lib\\Debug\\ /Y
copy libevent.lib ..\\..\\Lib\\Release\\ /Y
copy libevent_core.lib ..\\..\\Lib\\Debug\\ /Y
copy libevent_core.lib ..\\..\\Lib\\Release\\ /Y
copy libevent_extras.lib ..\\..\\Lib\\Debug\\ /Y
copy libevent_extras.lib ..\\..\\Lib\\Release\\ /Y
cd ..

pause
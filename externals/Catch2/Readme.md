from commit https://github.com/catchorg/Catch2/commit/244680d5126396db5bf2708e185a43c2671edb28
on/for Windows 10
with gcc 10.2.0


Log of my doings:

```
Log on host with Windows10

START PowerShell with administrator privileges

PS C:\WINDOWS\system32> cd c:\users\basejumpa

PS C:\Users\basejumpa> iwr -useb get.scoop.sh | iex

PS C:\Users\basejumpa> scoop install cmake gcc ninja

PS C:\Users\basejumpa> git clone https://github.com/catchorg/Catch2.git

PS C:\Users\basejumpa> cd Catch2

PS C:\users\basejumpa\Catch2> cmake -B build -G Ninja -DBUILD_TESTING=OFF

PS C:\users\basejumpa\Catch2> cmake --build build

PS C:\users\basejumpa\Catch2> cmake --build build --target install

PS C:\users\basejumpa\Catch2> xcopy /E /I 'C:\Program Files (x86)\Catch2\' ..\unittest_with_cmake\externals\Catch2
```
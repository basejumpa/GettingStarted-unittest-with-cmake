
Code I created as I worked my way through the great tutorial provided by [LeslayLai](https://github.com/LesleyLai/LesleyLai) at https://lesleylai.info/en/unit-test-with-cmake/

My focus is to learn how cmake supports unit testing.



# My learnings

Do some "bootstrapping":
```
PS C:\users\basejumpa> git clone https://github.com/basejumpa/GettingStarted-unittest-with-cmake.git
PS C:\users\basejumpa> cd GettingStarted-unittest-with-cmake
PS C:\users\basejumpa\GettingStarted-unittest-with-cmake> cmake -B build -G Ninja
```

Perform
``` 
PS C:\users\basejumpa\GettingStarted-unittest-with-cmake> cmake --build build
```

The default target (so if you ommit to specify a special target, comprises the creation of the test executable(s). But it does not comprise their execution. It creates empty folder `Testing/Temporary/` inside the build folder as preparation for the test run(s).

```
PS C:\users\basejumpa\GettingStarted-unittest-with-cmake> cmake --build build --target test
```

Target `test` performs the execution of the test executable(s). It does not comprise the creation of the test executable. 

Target `test` always runs the test executable(s). Even if nothing has changed.
It creates files in folder `Testing/Temporary/`.


```
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> cmake --build build --target help
```

Target `help` lists all primary targets.

CMake distuingishes primary targets and other targets.


```
PS C:\users\basejumpa\GettingStarted-unittest-with-cmake> rm -r -fo build
```

A really clean build I can prepare by deleting the build folder.

# Some personal preferences 

When executing a target on command line I like to call `cmake` with appropriate arguments more than directly calling the underlying generator (such as Ninja, Nmake, make).

I like calling cmake with appropriate target better than calling directly `ctest.exe`. 

# Some remaining questions

Could cmake command `TARGET_GROUP` optimize unit testing? If so, how? It is used in tutorial  https://github.com/rpoisel/cmake-unity-tutorial .

Does CDash help us in conjunction with Jenkins? See https://docs.nersc.gov/services/cdash/ as entry point.

# General prerequisites
* git
* cmake
* Any build tool such as Make, NMake or Ninja
* Any c/c++ compiler suite
* Any fitting debugger


# My setup
* OS: Windows10
* Package manager: Scoop
* git for windows (installed via scoop)
* cmake (installed via scoop)
* build tool: Ninja (installed via scoop)
* C/C++ compiler suite: gcc (installed via scoop)
* C/C++ debugger: gdb

```
START powershell

PS C:\Users\basejumpa> iwr -useb get.scoop.sh | iex
PS C:\Users\basejumpa> scoop install git cmake ninja gcc gdb
```

# Preparations

Following preparations I needed to do to make it run:

* Build, install and upload Catch2. See [externals/Catch2/Readme.md](externals/Catch2/Readme.md) for details on this.

# Editor/IDE

I used Visual Studio Code. Added it to my windows10 box as follows:

```
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> scoop bucket add extras
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> scoop install vscode
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> C:\Users\basejumpa\scoop\apps\vscode\current\install-associations.reg
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> vscode
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> code .
```

What plugins did I install during these exercises? Here they are:

```
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> (gcm code).Path
PS C:\Users\basejumpa\GettingStarted-unittest-with-cmake> code --list-extensions | % { "code --install-extension $_" }
code --install-extension cschlosser.doxdocgen
code --install-extension fredericbonnet.cmake-test-adapter
code --install-extension hbenl.vscode-test-explorer
code --install-extension jeff-hykin.better-cpp-syntax
code --install-extension ms-vscode-remote.remote-containers
code --install-extension ms-vscode-remote.remote-ssh
code --install-extension ms-vscode-remote.remote-wsl
code --install-extension ms-vscode.cmake-tools
code --install-extension ms-vscode.cpptools
code --install-extension ms-vscode.cpptools-extension-pack
code --install-extension ms-vscode.cpptools-themes
code --install-extension ms-vscode.test-adapter-converter
code --install-extension twxs.cmake
```

Name: CMake
Id: twxs.cmake
Description: CMake langage support for Visual Studio Code
Version: 0.0.17
Publisher: twxs
VS Marketplace Link: https://marketplace.visualstudio.com/items?itemName=twxs.cmake

# Ressources

* https://lesleylai.info/en/unit-test-with-cmake/
* https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#writing-tests
* https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
* https://gitlab.kitware.com/cmake/community/-/wikis/doc/ctest/Testing-With-CTest
* https://towardsdatascience.com/7-tips-for-clean-cmake-scripts-c8d276587389
* https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1
* http://www.aosabook.org/en/cmake.html

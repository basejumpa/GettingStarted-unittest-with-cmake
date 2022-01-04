
Code I created as I worked my way through the great tutorial provided by [LeslayLai](https://github.com/LesleyLai/LesleyLai) at https://lesleylai.info/en/unit-test-with-cmake/

My focus is to learn how cmake supports unit testing.



# My learnings

Do some "bootstrapping":
```
PS C:\users\basejumpa> git clone https://github.com/basejumpa/unittest_with_cmake.git
PS C:\users\basejumpa> cd unittest_with_cmake
PS C:\users\basejumpa\unittest_with_cmake> cmake -B build -G Ninja
```

Perform
``` 
PS C:\users\basejumpa\unittest_with_cmake> cmake --build build
```

The default target (so if you ommit to specify a special target, comprises the creation of the test executable(s). But it does not comprise their execution. It creates empty folder `Testing/Temporary/` inside the build folder as preparation for the test run(s).


```
PS C:\users\basejumpa\unittest_with_cmake> cmake --build build --target test
```

Target `test` performs the execution of the test executable(s). It does not comprise the creation of the test executable. 

Target `test` always runs the test executable(s). Even if nothing has changed.
It creates files in folder `Testing/Temporary/`.


```
PS C:\Users\basejumpa\unittest_with_cmake> cmake --build build --target help
```

Target `help` lists all primary targets.

CMake distuingishes primary targets and other targets.

Directive `include(CTest)` must be inside the top-level `CMakeLists.txt`. When put inside "lower" `CMakeLists.txt` the target `test` is unknown. The test executable(s) are built, though.

Existing directive `add_test` when `include(CTest)` is omitted does not break the configure nor build. But it does not have any effect, through.

The parameter `NAME` of directive `add_test` is not a target. So CMake knows the term `test name`. It is not (necessarily) the filename of the executable which contains the test.

It is not necessary to use cmake command `enable_testing()`. 


```
PS C:\Users\basejumpa\unittest_with_cmake> rm -r -fo build
```
I can remove the build directory from powershell.


```
PS C:\users\basejumpa\unittest_with_cmake> cmake -B build -G Ninja
PS C:\Users\basejumpa\unittest_with_cmake> cmake-gui -B build -S .
```

I can investigate the settings with the GUI. To do so I need to specify both the build folder and also the source folder explicitely.

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


# My setup
* OS: Windows10
* Package manager: Scoop
* git for windows (installed via scoop)
* cmake (installed via scoop)
* build tool: Ninja (installed via )
* C/C++ compiler suite: gcc (installed via)

# Preparations

Following preparations I needed to do to make it run:

* Build, install and upload Catch2. See [externals/Catch2/Readme.md](externals/Catch2/Readme.md) for details on this.

# Ressources

* https://lesleylai.info/en/unit-test-with-cmake/
* https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
* https://gitlab.kitware.com/cmake/community/-/wikis/doc/ctest/Testing-With-CTest
* https://towardsdatascience.com/7-tips-for-clean-cmake-scripts-c8d276587389
* https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1
* http://www.aosabook.org/en/cmake.html

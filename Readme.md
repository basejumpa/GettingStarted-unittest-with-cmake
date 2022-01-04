Code of https://lesleylai.info/en/unit-test-with-cmake/

Prerquisites
* git
* cmake
* Any build tool such as Make, NMake or Ninja
* Any c/c++ compiler suite





Example setup used
* OS: Windows10
* Package manager: Scoop
* git for windows (installed via scoop)
* cmake (installed via scoop)
* build tool: Ninja (installed via )
* C/C++ compiler suite: gcc (installed via)


Steps (shown with example setup):
```
PS C:\d\unittest_with_cmake>
PS C:\d\unittest_with_cmake> cmake -B build -G Ninja
PS C:\d\unittest_with_cmake> ninja -C build
```
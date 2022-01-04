# Editor/IDE

todo: Resume writing!

The userstories I want to satisfy are:

* Is a RORORO I want to DODODO so that BVBVBV.

I used Visual Studio Code.

My doings and learnings of unittesting with cmake inside Visual Studio Code are documented at [(Readme-vscode.md)](Readme-vscode.md) 

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
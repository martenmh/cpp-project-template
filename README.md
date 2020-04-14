![](https://github.com/martenmh/cpp-project-template/workflows/CMakeCPP/badge.svg)
![](https://img.shields.io/badge/Made%20with-C%2B%2B-%23639AD2)

# C++ Project Template

C++ Project template using CMake, GTest & github actions.

## Change project name

    Change the project name to your git repo name with the script
`changeProjectName`

```
chmod +x changeProjectName
./changeProjectName new-project-name
```

This will change all occurrences of the project name

## Prerequisites
    * GTest
* CMake

    Ubuntu:
```
sudo apt-get install cmake libgtest-dev

    cd /usr/src/gtest
    sudo cmake .
sudo make
sudo cp *.a /usr/lib
```

Arch linux:
```
sudo pacman -S cmake gtest
```

## Building your project
```
cd new-project-name
    cmake .
make
```

## Running your project
    Run application:
```
./bin/new-project-name
```

Run tests:
```
./bin/runTests
```


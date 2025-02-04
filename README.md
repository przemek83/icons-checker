[![Build & test](https://github.com/przemek83/icons-checker/actions/workflows/buld-and-test.yml/badge.svg)](https://github.com/przemek83/icons-checker/actions/workflows/buld-and-test.yml)
[![CodeQL](https://github.com/przemek83/icons-checker/actions/workflows/codeql.yml/badge.svg)](https://github.com/przemek83/icons-checker/actions/workflows/codeql.yml)

## Example view
![](screenshot_ubuntu.png?raw=true "")

## Description
Small Qt application showing available icons for current OS. Icons are built into Qt, enumerated using `QStyle::StandardPixmap` and accessible through `QStyle::standardIcon` method.

## Getting Started
This section describes briefly how to setup the environment and build the project.

### Prerequisites
Qt in version 6.5 or greater, C++ compiler with C++17 support as a minimum and CMake 3.16+. 

### Building
Clone and use CMake directly or via any IDE supporting it. CMake should:
- configure everything automatically,
- compile and create binaries.

As a result of compilation, binary for simulations and binary for testing should be created.

## Built with
| |  Windows | Windows | Ubuntu |
| --- | --- | --- | --- | 
| OS version | 10 22H2 | 10 22H2 | 24.04 |
| compiler | GCC 13.1.0 | MSVC 19.29 | GCC 13.2.0 |
| CMake | 3.30.2 | 3.30.2 |3.28.3 |
| Git | 2.46.0 | 2.46.0 | 2.43.0 |
| Qt | 6.5.2 | 6.5.2 | 6.5.2 |

## Licensing
Icons checker is published under an MIT license.

The project uses the following software:
| Name | License | Home | Description |
| --- | --- | --- | --- |
| Qt | LGPLv3 | https://www.qt.io/| cross-platform application development framework |
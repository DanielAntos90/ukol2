# AK5PC - Shape 2D
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)


Demonstration project for AK5PC course.

## What you may find in this project
Simplified demonstration of selected C++ features:
* Classes, abstract classes and basic inheritance 
* Class members, member methods, functions and pure virtual functions
* Namespaces
* Simple constructors and constructor delegation
* Function overriding 
* Simple operator overriding
* References and their usage
* Basic output stream usage
* etc.

## What you DON'T find in this project
Because this project is most about C++ syntax and fundamental principles and is provided as supplemental material for the C++ classes, it's not focused on following things
* C++ best practices descriptions and demonstrations
* Application architecture recommendations
* Optimization guides

## Project structure

The project is composed by CMake tool usage and is separated into two separate project. 
The first project is focused on ShapeLib and is placed with corresponding folder. 
It is configured as a shared library. The second project contains only short demonstration of the library written in main.cpp. The file and configuration is placed in root folder.

```
..
.
+-- doc # project documentation 
|   +-- output
|   |   +-- html        # generated documentation in HTML format
|   |   +-- latex       # generated documentation in LaTex format (pdf)
|   +-- proj            # Doxygen project configuration
|
+-- ShapeLib            # the ShapeLib library project
|   +-- include         # header files
|   +-- src             # source files
|   +-- CMakeLists.txt  # library project configuration
|
+-- main.cpp        # the main demonstration file
+-- CMakeLists.txt  # the configuration for demonsration project
```
## Project documentation

[GitHub repository](https://github.com/pjanku/AK5PC_Shape2D)

[Project webpages](https://pjanku.github.io/AK5PC_Shape2D/)

[Doxygen ONLINE documentation](https://pjanku.github.io/AK5PC_Shape2D/doc/output/html)

[Doxygen PDF documentation](https://pjanku.github.io/AK5PC_Shape2D/doc/output/latex/refman.pdf)
"# ukol2" 

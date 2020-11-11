cmake_minimum_required(VERSION 3.17)
project(Programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(.vs)
include_directories(C)

add_executable(Programming
    .idea/modules.xml
    .idea/Programming.iml
    .idea/vcs.xml
    .idea/workspace.xml
    .vs/slnx.sqlite
    .vs/VSWorkspaceState.json
    "C/Basics/Chapter 1/01practise_a.c"
    "C/Basics/Chapter 1/01practise_b.c"
    "C/Basics/Chapter 1/02practise_a.c"
    "C/Basics/Chapter 1/02practise_b.c"
    "C/Basics/Chapter 1/03practise_a.c"
    "C/Basics/Chapter 1/03practise_b.c"
    "C/Basics/Chapter 1/1first.c"
    "C/Basics/Chapter 1/2variables.c"
    "C/Basics/Chapter 1/3basicarthematic.c"
    "C/Basics/Chapter 1/4input.c"
    "C/Basics/Chapter 1/CBoilerPlate.c"
    "C/Basics/Chapter 1/Userinputpractise.c"
    "C/Basics/Chapter 2/new.c"
    "C/The C Logo.png"
    .gitattributes
    Hi.docx
    index.html
    LICENSE
    README.md
    repository-open-graph-template.png)

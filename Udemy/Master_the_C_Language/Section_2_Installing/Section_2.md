# Section 2

## Overview 

- *Windows*: C compiler(Cygwim), IDE's(Integrated Development Enviroment),
  (CodeLite).

- *Mac*: C compiler(developer tools), IDE's(Integrated Development Enviroment),
  (xcode/CodeLite).

- *Linux*: Compiler comes installed, IDE's(Integrated Development Enviroment),
  (CodeLite/vi/gedit,CL)

## Windows
<details>
<summary>Windows</summary>

### Installing the C compiler

    - Need to install GNU gcc compiler, gdb debugger from cygwin.com.

    - Cygwin.com/install.html -> Install the set up -> Double click the .exe -> 
    Next to all.

    - In the .exe after the install, select gcc-core, gdb and make -> Next twice 
    -> Choose -> Finish.

    - File explorer -> Locate the C:cygwin\bin -> Copy path -> Search System -> 
    Enviroment variables -> System variables -> Path -> New -> Copy path -> 
    Ok twice -> Open command promt -> Cygcheck -c cygwin -> If no problems ->
    gcc --version.

### Installing CodeLite

> [!IMPORTANT]
> cygwin already installed

    - Codelite.org -> Download -> Next page -> Choose the preferred version -> 
    Right click -> Properties -> Unblock -> Ok -> Double click codelite -> 
    Next to all -> Install.

### Configuring CodeLite

> [!IMPORTANT]
> cygwin and CodeLite installed 
> Don't use spaces or special char

    - Click CodeLite -> Next -> C/C++ Development -> Next -> Scan -> 
    If not located -> Next -> Choose the color -> Next -> Choose -> Finish.

    - On CodeLite Settings -> Build settings -> Click the + -> Search for cygwin 
    -> Select it -> Name it -> Tools -> C compiler, Linker, SOL .exe
    must be setted as gcc.exe -> Assembler name must be as.exr -> Archive 
    must be setted as ar.exe -> Other are ok -> Apply -> Ok.

    - To create a project -> New -> C++ -> Choose path with no special char ->
    -> Give it a name -> Check Create a workspace -> OK -> Select workspace -> 
    Right click -> New project -> Name it -> Create on own folder -> Category:
    Console -> Type: Simple executable(gcc), Compiler: cygwin, debbuger: GNU gdb
    debbuger, Build System: CodeLite Makefile Generator - UNIX -> OK.

    - To build run a file -> Save file -> Select the wrench -> Compiler ->
    C compiler options -> ... -> Enable C99 features -> OK -> Linker -> Linker 
    options -> ... -> Static linking -> OK -> Apply -> OK -> Build -> Build 
    Project -> Build -> Run -> Execute.  
</details>

## Mac
<details> 
<summary>Mac</summary>

### Installing the C compiler

    - To check if the Xcode is installed -> Double click finder -> Applications ->
    search for it -> if not just install it in the App Store -> App store -> 
    Develop -> Xcode.

    - To install development tools -> gcc --version to see if they are instelled ->
    If not a box will pop up -> Install -> Done -> gcc --version.

### Installing CodeLite on Mac

    - CodeLite.org -> Download -> Donate or not -> App Bundle for OSX -> 
    Double click the archive -> Drag the CodeLite into applications -> 
    when trying to open if a problem show -> System preferences -> Security &
    Privacy -> General -> Open Anyway - Open again.

### Configuring CodeLite on Mac
> [!IMPORTANT]
> Compiler and CodeLite already installed
> Don't use spaces or special char

    - Open CodeLite -> Cancel -> Help -> Run the setup wizard -> Next -> C/C++ ->
    Scan -> Next -> Choose -> Next -> Choose -> Finish.

    - To se if everything worked Settings build settings -> GCC  -> OK.

    - To create a workspace -> New workspace -> C++ -> OK -> Choose path -> Choose
    name -> Check box is on -> OK.

    - To create a project -> Right click on the created workspace -> New -> 
    New Project -> Chose path and name -> Check box is on -> Category: Console ->
    Type: Simple exevtable (gcc), Compiler: GCC, Debugger: LLDB Debugger, 
    Build System: Default -> OK.

    -> To run a file -> Save the file first -> Right click -> settings ->
    Compiler -> C compiler options -> ... -> Enable all warningd and C99 features
    -> OK -> Build -> Build and Run project.
</details>

## Linux (Ubuntu)
<details>
<summary>Linux</summary>

### Installing CodeLite on Ubuntu Linux

    - CodeLite.org -> Docs -> Getting started -> Linux -> Copy install the 
    essentials -> Open terminal -> Paste -> Enter -> Enter password -> Type Y ->
    -> Open another terminal -> Type which gcc.

    -> CodeLite.org -> Docs -> Download -> Ubuntu / Debian -> Copy and paste
    on terminal one by one -> Exept sudo apt install codelite.

### Configuring CodeLite on Ubuntu Linux
> [!IMPORTANT]
> Compiler and CodeLite already installed
> Don't use spaces or special char

    - Open CodeLite -> Next -> C/C++ -> Scan -> GCC -> Choose -> Next -> Choose->
    Next.

    -> To create a workspace -> Workspace -> New -> C++ -> OK -> choose path and
    name -> Ok.

    -> To create a project - Right click workspace -> choose path and name -> 
    Category: Console -> Type: Simple exevtable (gcc), Compiler: GCC, 
    Debugger: LLDB Debugger, Build System: Default -> OK.

    -> To run a file -> Save the file first -> Right click -> settings ->
    Compiler -> C compiler options -> ... -> Enable C99 features -> OK -> Linker 
    -> Linker options -> ... -> Static linking -> OK -> Debbuger -> ... ->
    urs -> bin -> gdb -> Apply -> OK -> Right click on project -> Build -> 
    Right click on project -> Run.
</details>

## Creating a default CodeLite Project Template (All compilers)

- Create a new workspace -> Create a project -> Make it as a build -> 
  Select the project -> Right click -> Save as template -> Set name -> 
  Project category: User template -> Choose desription -> OK -> Create a new 
  project -> But in category choose your template.



## Using the Command Line Interface
>[!IMPORTANT]
>Most have the compailer installed

- A text editor (not a Word Processor).

- A command-promt or terminal.

- An installed C compailer.

- No need for an IDE.

- Simple and effeicient workflow. 

## Windows
<details>
<summary>Windows</summary>

    - In search bar -> Cygwin64 -> Cygwin64 terminal -> ls to see archive in 
    directory -> cd /home/(user in this path) -> mkdir -> Name it -> cd (name) ->
    Search for Notepad -> Save it in the home/user name -> name the archive -> 
    save -> on the cygwind64 terminal -> Search for the file -> Write code ->
    Save it -> Use more to see the code insite it -> gcc (file.c) -> Enter ->
    ls -> ./((exemade).exe) -> Enter -> Code runs.

    - gcc --help for extra commands. 

    - gcc (file name) -o (new name) to change executable name.
</details>

## Mac
<details>
<summary>Mac</summary>

    - Open a terminal -> create a folder on where to storage the project -> 
    On the text editor -> TextEdit -> Format -> Plain Text -> Write code ->
    Save it in folder -> It must say Plain Text Encoding -> On terminal -> 
    Search for the folder -> gcc (file name) -> If no errors -> ./(file created).

    - gcc --help for commands.

    - gcc (file name) -o (newfile name) for giving a name to the archive.
</details>

## Linux(Ubuntu)
<details>
<summary>Linux</summary>

    - Open terminal -> Create a folder to place the code files -> Open text editor
    -> Write code -> Save it in the folder .c -> On terminal -> 
    Search for the folder -> gcc (file name) -> gcc (file created).

    - gcc --help for extra commands.

    - gcc (file name) -o (new name) to change executable name.
</details>
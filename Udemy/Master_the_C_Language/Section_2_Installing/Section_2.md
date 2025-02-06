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
</details>
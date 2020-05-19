

* main
* io
* control statements
  * if
  * for
  * while
  * do while
  * switch
* functions


### c
  ``` 
      cc file.c -o out
      ./out
  ```
  
### java
     ```
      javac file.java
      java file
     ```
     
### Go
 * download from here https://golang.org/dl/
 * extract to /usr/local ```tar -C /usr/local -xzf go$VERSION.$OS-$ARCH.tar.gz```
 * export path : ```export PATH=$PATH:/usr/local/go/bin```
 * write hello.go
 * build with go tool ```go build hello.go``` creates executable file ```hello```
 * run ```./hello```
 * packages : collection of go source files (programs) in same directory that are compiled together
   * Functions, type, variables, and constants defined in one source file are visible to all other source files within same package
   * A module is a collection of related Go packages that are released together.
   * A repository contains one or more modules
   * A Go repository typically contains only one module, located at the root of the repository.
   * A file named go.mod there declares the module path: the import path prefix for all packages within the module.
   * The module contains the packages in the directory containing its go.mod file as well as subdirectories of that directory, up to the next subdirectory containing another go.mod file (if any).

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



* factored Import
   ```
     import (
	    "fmt"
	    "math"
    )
   ```
 * Exported names starts with Capital letter
   ```Pizza(), Pi```
 * Functions : type comes after the variable name.
   ```
     func add(x int, y int) int {
      	return x + y
      }
   ```
     * omit the type conecutive named function parameters of same type add(x, y int)
     * A function can return any number of results.
       ```
       func swap(x, y string) (string, string) {
      	return y, x
        }
       ```
     * Named return values
      ```
       func split(sum int) (x, y int) {
      	x = sum * 4 / 9
      	y = sum - x
      	return
        }
      ```
      * The var statement declares a list of variables; as in function argument lists, the type is last.
      * A var statement can be at package or function level.
        ```
         package main

          import "fmt"

          var c, python, java bool

           func main() {
            	var i int
            	fmt.Println(i, c, python, java)
            }
        ```
     * If an initializer is present, the type can be omitted; the variable will take the type of the initializer.
       
         ``` 
          var c, python, java = true, false, "no!"
         ```
     * Short variable declarations
     Inside a function, the := short assignment statement can be used in place of a var declaration with implicit type.
    
    
  * basic types
    * bool
    * string
    * int int8 int16 int32 int64
    * uint uint8 uint16 uint32 uint64
    * byte // alias for uint8
    * rune // alias for int 32
    * float32 float64
    * complex64 complex128
  * Constants
    * Constants are declared like variables, but with the const keyword.
  
       

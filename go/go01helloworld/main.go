// Go is built with packages that you can then import. Code starts executing in the package
// titled main. So this is a requirement for every single go application executable
package main;

// Here we import a built in package called fmt that allows us to print to the console.
import "fmt";

// This is the main function, whatever code is in here gets executed upon running the executable.
func main() {

    fmt.Print("Text");

    fmt.Print("Something something");

    fmt.Print("\n");

    fmt.Print("This text is on a new line, and the text after this will also be on a new line\n");
    fmt.Println("See ? And the next text will also be on a new line, but this time using fmt.Println");

    fmt.Println("\nActually theres an empty line here mate,\nand there will be 3 empty lines below this\n\n");
    fmt.Println("");
    fmt.Println("See ? The last empty line was it's own call as well");

    fmt.Print("We can also print a single line ");
    fmt.Println("in two separate print calls");

    fmt.Print("But remember the space at the end ");
    fmt.Print("of the first call, or");
    fmt.Println(" beginning of the second one");

    fmt.Print("I forgor to");
    fmt.Println("add a space :skull:");

}

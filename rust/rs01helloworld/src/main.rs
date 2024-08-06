// This is the main function. Whatever code is in here, will be run when we start the program
// program made in rust needs to have this, and it has to be named exactly like this.
fn main() {

    // This is how we print to the console. It is nice and simple, the exclamation mark means that
    // this is a macro. Which in rust, is something like a function, but instead of calling the
    // function, it expands (pastes) the code of a macro in place of the function call. It is a
    // useful way how to remove repetition. Whatever text is in in the qoutes, will be printed to
    // the console.
    print!("Text");

    // However, we have a problem. If we try and print again, the new text will be on the same
    // line, creating a confusing output. If we want to tell the program to print to a new line, we
    // have two ways of approaching it.
    print!("Something something");

    // We can either print a special character, called the new line character. Which instructs the
    // console to move to a new line, and whatever text there is after the new line character, will
    // be on a new line.
    print!("\n");

    // We can also put the new line character at the end of any text, to add a new line at the end
    // of it.
    print!("This text is on a new line, and the text after this will also be on a new line\n");

    // Or, another way is to use the prinln macro. Which is the exact same as print, but this one
    // will automatically insert a new line character at the end of the text. This way is usually
    // preferred, because most of the time, when you are printing into the console, you want to do
    // it in a single line, and auomatically move to the next one. So usually you will see this.
    println!("See ? And the next text will also be on a new line, but this time, using println!");

    // We can also put the new line character at the beginning, or middle of any text, and even
    // chain it. If we put 2 New line characters at the end of a println call, we will put 2 empty
    // lines before the new text. And if we want to get the 3 empty lines, we can just call println
    // with an empty string, which will print an empty line, and then add the new line character.
    println!("\nActually theres an empty line here mate,\nand there will be 3 empty lines below this\n\n");
    println!("");
    println!("See ? The last empty line was it's own call as well");

    // We can also print a single line using two separate calls to print, by printing using print!
    // but using println! in the last print call. This will make a single line, that then ends and
    // any new text will be put to a new line
    print!("We can also print a single line ");
    println!("in two separate print calls");

    // You might be asking why is this useful, and why not just put the entire line in a single
    // qouted text, but in the future, you will see it can be really useful sometimes.

    // But we need to remember to add a space either at the end of the first text, or beginning of
    // the second text, to separate the words. Because print! or even println! does not do that
    // automatically for us.
    print!("But remember the space at the end ");
    print!("of the first call, or");
    println!(" beginning of the second one");

    // And we don't want to end up like this guy, right ?
    print!("I forgor to");
    println!("add a space :skull:");

}

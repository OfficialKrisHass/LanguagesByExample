#include <iostream> // This is an include statement, it allows us to use the stuff that is inside the file iostream
                    // In this case, it's stuff that lets us output to the console, io (input output) stream

// This is the main function. Whatever code is in here, is code that will be run when we start the program.
// It is required to exist in every c++ application. It returns an int (a number) which is the return code
// of the program, which basically lets the operating system know if the program failed to work as intended
int main() {

    // This is how we print to the console. It looks complicated, but is really simple.
    // Word for word, std (accronym for standard) is a namespace, which is basically sort of like a box.
    // Everything inside the box is a part of the box (std namespace), and if we want to use anything from it
    // we have to know/specify where it is, aka the box (the std namespace). And the double colon does exactly
    // that, it says that we want something from the std namespace, and that something is cout (console out).
    // The two arrows pointing to the left are basically what tells the code we want to print to the console.
    // Anything after the arrows will be put inside cout, which will make it appear in the console.
    // The qouted text is what will be put/printed to the console. It has to be in qoutes so that c++ knows
    // it's a text and not some piece of code. And finally, the semi colon is how we end every single line
    // in c++. It has to be there, because without it, the langauge will not know where the line ends.
    std::cout << "Text";

    // However, we have a problem. If we try and print again. You will notice that instead of "Text" and
    // "Something something" being on two separate lines, we get a single line "TextSomething something".
    // That is because we have never specified that we want the line to end, any any future text to be printed
    // to a new line. And we have two options on how to do that.
    std::cout << "Something something";

    // We can put (<<) a special thing into cout, called endl (end line), which will tell the console to go
    // to a new line, and new text will be printed into that new line
    std::cout << std::endl;

    // We can even chain these things together like this
    std::cout << "This text is on a new line, and text after this will also be on a new line" << std::endl;

    // Or, we can achieve the same result by instead, adding a special character to the text, called the new line character.
    // Which we do by inserting a backslash (\ not /) and n, standing for new as in new line. The backslash ensures that
    // we won't just print n, and makes this what we call an escape sequence, which is a special character that does something
    // special (e.g. add a new line).
    std::cout << "See ? And the next text will also be on a new line, but this time by using the new line character\n";

    // The new line character can be anywhere in the text, at the beginning, in the middle, or at the end. And you can
    // also chain them together to add empty lines. In this case, without the \n at the beginning, we would just print
    // right below the previous text, but with this, we added a new line, and then started printing, effectively making
    // an empty line above. Then in the middle, we separate a single text into 2 lines, and then at the end we add 2 empty lines.
    // If we would now print, we would have only a 2 line gap, because the new line character doesn't insert an empty line
    // it only moves the text to the next line, therefore we added 2 lines, with 3 new line characters. We can achieve the
    // desired 3 line gap, by printing one more \n, which we can also do in it's own call, it does not need to be attached
    // to any text, since it is technically it's own text.
    std::cout << "\nActually theres an empty line here mate,\n and there will be 3 empty lines below this\n\n\n";
    std::cout << "\n";
    std::cout << "See ? The last empty line was it's own call as well\n";

    // Now you might be asking, what is the difference between \n and std::endl, because they both do the same job.
    // Every single \n can be replaced with a << std::endl, even chained ones (instead if \n\n\n we would do
    // std::endl << std::endl << std::endl). And long story short, \n is faster, both performance wise (how fast the
    // program executes) and to type. And the reason is that std::endl also flushes std::cout, which in simple words
    // for now, takes some time. So every << std::endl, takes a tiny bit longer then just adding a \n to the text.

    // We can also chain multiple texts together like this. For now, this might seem redundant, why not just put
    // this whole text into one single text, which would be better in this case, but in the future you will see
    // why this is actually useful. However, if we want to do something like this, we need to add a space either
    // at the end of the first text, or beginning of the second text. 
    std::cout << "We can also print two separate texts " << "like this.\nBut we need to keep the space at the end" << "or the beginning, unless we want a mess like this\n";

    // Not required, as the main fucntion is the only function that does not have to return anything. If it doesn't
    // it will automatically return 0 by default. If you return anything other than a 0 the operating system will
    // take it as the application failed to work. Usually this is done by returning a negative number, like -1
    return 0;

}

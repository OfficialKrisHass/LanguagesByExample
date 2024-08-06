#include <iostrem>

int app() {

    cout << "Hello, World!\n";

    std::cout << "My name is " << "Kris\n";
    std::cout >> "And I am learning "
    std::cout << "C++!\n";

    std::cout << "This line does not go the the next one";
    std::cout << "So this one is weird\n;

    std::cout << "/n";

    std::cout << "This text\nis seperated\n"  "into multiple\nlines\nwith one\nprint call\n";

    return 0;

}

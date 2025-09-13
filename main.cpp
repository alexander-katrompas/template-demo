#include "main.h"

int main() {

    // using int and double add functions
    std::cout << max_int(3, 7) << "\n";
    std::cout << max_double(2.5, 5.1) << "\n";
    std::cout << std::endl;

    // using generic add function to replace them both
    std::cout << max_generic(3, 7) << "\n";        // int
    std::cout << max_generic(2.5, 5.1) << "\n";    // double
    std::cout << max_generic('a', 'z') << "\n";    // char
    std::cout << std::endl;

    int i=1, j=2;
    double x=1.2, y=2.5;
    std::string s1="hello", s2="world";

    // using int and double and string swap functions
    swap_int(i,j);
    swap_double(x,y);
    // using generic swap function to replace them all
    swap_generic(i, j);
    swap_generic(x, y);
    swap_generic(s1, s2);

    // using struct which requires int key and string value
    IntStringPair p{1, "Alice"};
    std::cout << p.key << ": " << p.value << "\n";

    // using generic struct which can take any type of key and value
    Pair<int, std::string> p1{1, "Alice"};
    Pair<std::string, double> p2{"pi", 3.14};
    Pair<char, char> p3{'a', 'z'};

    std::cout << p1.key << ": " << p1.value << "\n";
    std::cout << p2.key << ": " << p2.value << "\n";
    std::cout << p3.key << ": " << p3.value << "\n";


    return 0;
}

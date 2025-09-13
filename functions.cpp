#include "functions.h"

//*********************************
// add functions for int and double
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

//generic add function for any types
template <typename T>
T add(T a, T b) {
    return a + b;
}

//*********************************
// max functions for int and double
    int max_int(int a, int b) {
    return (a > b) ? a : b;
}

double max_double(double a, double b) {
    return (a > b) ? a : b;
}

// generic max function for any types
template <typename T>
T max_generic(T a, T b) {
    return (a > b) ? a : b;
}

//*********************************
// swap functions for int and double
void swap_int(int &a, int &b) {
    int temp = a; a = b; b = temp;
}

void swap_double(double &a, double &b) {
    double temp = a; a = b; b = temp;
}

// generic swap function for any types
template <typename T>
void swap_generic(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}


// create explicit template instantiations for all templates to be used

template int add<int>(int, int);
template double add<double>(double, double);
template std::string add<std::string>(std::string, std::string);

template int max_generic<int>(int, int);
template double max_generic<double>(double, double);
template char max_generic<char>(char, char);

template void swap_generic<int>(int&, int&);
template void swap_generic<double>(double&, double&);
template void swap_generic<std::string>(std::string&, std::string&);


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

//*********************************
// add functond for int and double
int add(int, int);
double add(double, double);
// generic add function for any types
template <typename T>
T add(T, T);

//*********************************
// max functions for int and double
int max_int(int, int);
double max_double(double, double);
// generic max function for any types
template <typename T>
T max_generic(T, T);

//*********************************
// swap functions for int and double
void swap_int(int&, int&);
void swap_double(double&, double&);
// generic swap function for any types
template <typename T>
void swap_generic(T&, T&);



#endif //FUNCTIONS_H

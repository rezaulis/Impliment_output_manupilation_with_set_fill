/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
cout << "ten" << setw(10) << "" << "fourfour" << endl; //prints ten fourfour with a width of 10 in between
cout << setfill('-') << setw(80) << "" << endl; //prints 80 dashes
return 0;
}
#include <iostream>

using namespace std;

int main() {

volatile const int a = 22;
const volatile int *ptr_to_a = &a;
int *ptr;

ptr = (int*)ptr_to_a;
(*ptr) = 5;

cout << a << endl;
// Prints 5

volatile const int &b = a;

cout << b << endl;
// Prints 5

int c = a;

cout << c << endl;
// Prints 22
cin.get();
return 0;
}

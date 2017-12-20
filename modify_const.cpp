cin.get();
#include <iostream>

using namespace std;

void IChangeConst(int* pa) {
*pa = 5;
cout << "IChangeConst: *pa : " << *pa << endl;
}

int main() {

const int a = 22;
int *ptr = (int*)&a;

IChangeConst(ptr);
cout << "Value of a after IChangeConst : " << a << endl;

const int &b = a;
cout << "Value of b which is reference to a :" << b << endl;

int c = a;
cout << "Valu of C - equal to value of a : " << c << endl;
cin.get();
return 0;
}

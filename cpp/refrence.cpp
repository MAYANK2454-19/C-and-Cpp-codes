#include <iostream>

using namespace std ;
 
int main (){

    int a = 9 ;
    int &b = a ;
    int &c = a ;
    int &d = a ;
    int &e = a ;
    cout << a << endl  << b << endl << &a << endl << &b << endl  ;
    cout << a << endl  << c << endl << &a << endl << &c << endl  ;
    cout << a << endl  << d << endl << &a << endl << &d << endl  ;
    cout << a << endl  << e << endl << &a << endl << &e << endl  ;

    return 0;
}

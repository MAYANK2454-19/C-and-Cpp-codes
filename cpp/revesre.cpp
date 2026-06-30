#include <iostream>

using namespace std ;

bool areReverse(int*,int*);

int main(){
int a , b ;
cout << "Enter both numbers"<< endl ;
cin >> a >> b ;
if (areReverse(&a,&b)){
    cout << "Ture"<<endl;
}
else {
    cout << "False" << endl ;
}
    return 0 ;
}

bool areReverse(int * a , int * b){
int num = 0;
while (*a !=0)
   { int remainder = *a % 10 ;
  *a = (*a )/10 ;
  num = num * 10 + remainder ;
}
if (num == *b){
    return true ;
}
 return false ;
}
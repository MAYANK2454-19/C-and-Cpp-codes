#include <iostream>

using namespace std ;
// fns prototype
int digitalRoot(int );
int len(int );

int main(){
    int num ;
    cout << "Enter your number " << endl ;
    cin >> num ;

   
        cout << "Digital root is " << digitalRoot(num) << endl ;
   
}

// fns declarations

// lenght fn

int len (int num ){
    int count = 0 ;
    if(num == 0)
    return 1;
    while(num!=0){
        num = num /10 ;
        count ++ ;
    }
    return count ;
}

// digitalroot fn
int digitalRoot(int num){
    int digitalroot = 0 ;
    while (num!=0){
        int remainder = num % 10 ;
        num = num / 10 ;
        digitalroot = digitalroot + remainder ;
    }
    if (len(digitalroot)==1){
        return digitalroot ;
    }
    else {
        return digitalRoot(digitalroot) ;
    }

}
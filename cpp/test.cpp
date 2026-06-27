#include <iostream>
using namespace std ;
// All fns Declaration
void classifyNumber(int = 0);
bool isArmstrong(int = 0);
int add(int, int);
int subtract(int, int);
float divide(int , int );
int multiply(int , int);
bool isStrong(int );
int factorial(int);
bool isPalindrome(int);

// main fn
int main (){
    int n , a , b , c  ;
    float result ;
    cout << "Enter the value for n" << endl ;
    cin >> n ;
    // classifying number

    classifyNumber(n);

    // is armstrong
    
    if (isArmstrong(n)){
        cout << "True" << endl ;
    }
    else {
        cout << "False" << endl ;
    }


    // is strong

    if (isStrong(n)){
        cout << "True" << endl ;
    }
    else {
        cout << "False" << endl ;
    }

    // palindrome
    if (isPalindrome(n)){
        cout << "True" << endl ;
    }
    else {
        cout << "False" << endl ;
    }

   
    // calculator

    while(1){
      cout << "Select Your Choice " << endl ;
      cout << "1.add " << endl ;
      cout << "2.subtract " << endl ;
      cout << "3.multiply " << endl ;
      cout << "4.divide " << endl ;
      cout << "5.exit " << endl ;

      cout << "Enter your choice " << endl ;
      cin >> c ;
      
      

      switch (c) {

        case 1 :
        cout << "Enter value for a and b " << endl ;
        cin >> a >> b ;
        result = add(a,b) ;
        break ;
        case 2 :
        cout << "Enter value for a and b " << endl ;
        cin >> a >> b ;
        result = subtract(a,b) ;
        break ;
        case 3 :
        cout << "Enter value for a and b " << endl ;
        cin >> a >> b ;
        result = multiply(a,b) ;
        break ;
        case 4 :
        cout << "Enter value for a and b " << endl ;
        cin >> a >> b ;
        result = divide(a,b) ;
        break ;
        case 5 :
        exit(1);
        break ;
        default :
        cout << "Invalid Choice" << endl ;
        
      }
       cout << "result is " << result << endl ;

    }
    return 0 ;
}
// CLassify number
void classifyNumber(int n) {
      if (n >0 ){
        if (n % 2 == 0){
            cout << "Positive Even" << endl ;
        } else {
            cout << "Positive Odd" << endl ;
        }
      }
      else if (n < 0 ){
        if (n % 2 == 0){
            cout << "Negative Even" << endl ;
        }
    else {
        cout << "Negative Odd " << endl ;
    }
      }
    else {
        cout << "Zero" << endl ;
    }
}

// is Armstrong 
bool isArmstrong(int n){
  int num = n ; 
  int remainder ;
  int armstrong = 0 ;

   while ( num != 0){
    remainder = num % 10 ;
    num = num / 10 ;
    armstrong += remainder * remainder * remainder ;
   }
  if (n == armstrong)
  return true ;

  return false ;
}
// calculator fns 
int add (int a , int b ){
    return a + b ;
}
int subtract (int a , int b ){
    return a - b ;
}
int multiply (int a , int b ){
    return a * b ;
}
float divide (int a , int b ){
    return (float) a / (float) b ;
}

// strong number 

bool isStrong(int n){
  int num = n ; 
  int remainder ;
  int strong = 0 ;
  int fact ;

   while ( num != 0){
    remainder = num % 10 ;
    num = num / 10 ;
    fact = factorial(remainder);
    strong +=  fact ;
   }
    if (strong == n) 
    return true ;

    return false ;

}
//  factoria;
int factorial(int r){
    if (r == 1 )
      return 1 ;
    
    return r * factorial(r-1) ;
    }

    // palindrome 

    bool isPalindrome(int n){
        int num = n ; 
        int remainder ;
        int palindrome = 0 ;

   while ( num != 0){
    remainder = num % 10 ;
    num = num / 10 ;
    palindrome = (10 * palindrome) + remainder;
   }
  if (n == palindrome)
  return true ;

  return false ;

    }
// not working currently but i will solve it soon 
#include <iostream>
using namespace std ;

bool len(int,int);
bool anagrams(int,int);

int main (){
   
    int num1 , num2 ;
    cout << "Enter both numbers to compare" << endl ;
    cin >> num1 >> num2 ;
    
    if (len(num1,num2)){
        if (anagrams(num1,num2)){
            cout << "True"<< endl ;
        }
        else {
            cout << "False" << endl ;
        }
    }
    else {
        cout << "Enter numbers of same length" << endl ;
    }

    
    

    return 0 ;
}

// length function

bool len(int a , int b){
int count_a = 0 ;
int count_b = 0;
int num = a ;

while(num !=0){
num = num / 10 ;
count_a ++ ;

}

num = b ;

while(num !=0){
num = num / 10 ;
count_b ++ ;

}

if (count_a == count_b){
    return true ;
}

return false ;

}

// anagrams
bool anagrams(int a , int b){
    int num1 = a ;
    int num2 = b ;
    int comparator = b ;
    int eliminator ;
    int r1 = 0 , r2 = 0;

    while (num1 != 0){
        eliminator = 0 ;
        r1 = num1 % 10 ;
        num1 =  num1 / 10 ;
           while (r2 != r1){
            r2 = num2 % 10 ;
            num2 = num2 / 10 ;
            if (eliminator == 0){
                eliminator = 1 ;
            }
            else {
                eliminator = eliminator * 10 ;
            }

           }
           comparator = comparator-( eliminator * r2) ; ;
           num2 = comparator ;
    }
    if (num1 == num2){
        return true ;
    }
    return false ;
}
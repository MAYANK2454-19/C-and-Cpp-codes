#include <iostream>
using namespace std ;
int main()
{  
    string name ;
    int age , cgpa , marks ;
    cout << "What is your name ?"<< endl;
    cin>>name;
    cout<< "What is your age ?"<< endl;
    cin >> age;
    if(age<18){
        cout<<"What is your marks in school ?"<< endl;
        cin>>marks;
    }
    else 
    cout<<"What is your cgpa ?"<< endl;
        cin>>cgpa;
}
#include <iostream>

using namespace std ;

int main(){
// Declaration of size and its initialization
int n;
cout << "Enter number of rows and columns for your square matrix" << endl;
cin >> n ;

//Declaration and filling the array with printing it along 
int arr[n][n] ;

for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
    cout << "Enter value for arr["<< i <<"][" << j << "] : "  ;
    cin >> arr[i][j] ;

  }
}

for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
    
    cout << arr[i][j] << "\t" ;

  }
  cout << endl ;
}

cout << "\n\n" ;
// Transposing it 


for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
    swap(arr[i][j],arr[j][i]);
  }
}

for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
    
    cout << arr[i][j] << "\t" ;

  }
  cout << endl ;
}

    return 0 ;
}
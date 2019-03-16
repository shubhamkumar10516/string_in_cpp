#include<iostream>

using namespace std;


//const int n = 4;


void print(int arr[][4] , int m , int n){
    
    for(int i = 0  ; i < m ; i++)
      {
    for(int j = 0  ; j < n ; j++)
        cout << arr[i][j];
         cout << endl; 
      } 
}

int main(){
    
   int m = 3;
    const int n =4;
    int arr[m][n];
    
    for(int i = 0 ; i < m ; i++)
       for(int j = 0 ; j < n ; j++)
            std::cin >> arr[i][j] ;
            
    print(arr , m , n);
}

// recursion fibonacci

#include<iostream>

using namespace std;

int fibonacci(int n){
    
    if(n <= 1) return n;
    
    
    return fibonacci(n-1) + fibonacci(n-2);
}/*

T(n) = T(n-1) + T(n-2)

T(n-1) = T(n-2)+T(n-3)
T(n-2) = T(n-3) + T(n-4)
....
T(n) = 2T(n-2) + T(n-3)

T(n) = 3T(n-4) + 2T(n-4)
... so on gives exponential complexity


*/

int main(){
    
    int t = 3;
    
    while(t--){
        
        int n;
        
        cin >> n;
        
        cout << "required fibo num " << fibonacci(n);
    }
    
}

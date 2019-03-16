#include<iostream>

using namespace std;

int main(){
    
    int a = 0 , b = 0 , c = 1;
    int n = 10;
    for(int i = 0 ; i < n ; i++){
        cout << c << endl;
        a = b; 
        b = c;
        c = a+b;
    }
    return 0;
}

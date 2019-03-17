//elements that appears twice only one appear once find that one

#include<iostream>

using namespace std;

int main(){
    
    int arr[] = {3,5,3,5,6,1,6};
    
    int c = 0;
    
    int l = sizeof(arr)/arr[0];
    
    for(int i = 0 ; i < l ; i++ )// n^2 time which isn't good
      {
          c = 0;
          for(int j = 0 ; j < l ; j++ )
                  if(arr[i] == arr[j])
                      c++;
                if(c == 1)
                 {
                     cout << arr[i]<< " at "<< i;
                     break;
                 }
      }
      
      
      // solution with linear time complexity::
      
      // using xor or hash table
      
      //q2 swaping bits of given number
      
      //**************************************
      
      /*

47

00 1 011 1 1
 1     0
1     0 

11100011


p1 = 1 

p2 = 6 

n = 3 



a[8] = {0};

47 & 1 = 0 ? a[0] = 0 : a[0] = 1 

47 >> 1



*/


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    
    int val;
    
    cin >> val;
    
    int a[8] , p1,p2,n;
    
    
    
    cin >> p1 >> p2 >> n;
    
    for(int i = 0 ; i < 8 ; i++)
       {
           a[i] = val & 1 ? 1 : 0;
           
           val = val >> 1;
       }
    
    for(int i = 0 ; i < 8 ; i++)
      cout << a[i] <<" ";

    int temp;
    for(int i = 0 ; i < n; i++)
    {
        temp = a[p1+i];
        a[p1 + i] = a[p2 + i];
        a[p2 + i] = temp;
        
    }
     cout << endl;
     for(int i = 0 ; i < 8 ; i++)
      cout << a[i] <<" ";
int sum = 0;
   for(int i = 0 ; i < 8 ; i++)
       sum = sum +a[i]* pow(2 , i);
       
    cout << endl;
    cout << sum;
    
    
    
    
}


//*******************************

      
      
      return 0;
}

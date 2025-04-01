#include<iostream>
using namespace std;

int main(){
    
   int arr[4][4]={{3,4,5,6},{7,8,9,10},{11,12,13,14},{15,16,17,18}};
    for(int i=0;i<4;i++){
          cout<<arr[0][i]<< " ";
          cout<<arr[1][i]<< " ";
          cout<<arr[2][i]<< " ";
          cout<<arr[3][i]<< " ";      
    }
   

    return 0;
}
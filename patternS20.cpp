/*


*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *


*/

#include<iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n ;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=(2*n-2*i);j>0;j--){ 
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
    for(int i=n;i>1 ;i--){
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        for(int j=(2*n-2*i+2);j>0;j--){ 
            cout<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
}

int main(){
int n;
cin>>n;
print(n);


}
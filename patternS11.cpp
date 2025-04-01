/*
     1
     0 1
     1 0 1
     0 1 0 1
     1 0 1 0 1
     0 1 0 1 0 1 0

*/

#include<iostream>
using namespace std;
void print(int n){
    int x;
    for(int i=0;i<n;i++){
         if(i%2==0){
            x=1;
            }else{
              x=0;
            }

        for(int j=0;j<=i;j++){
              cout<<x;
              x=1-x;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}
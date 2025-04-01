/*

                                            A
                                           ABA
                                          ABCBA
                                         ABCDCBA
                                        ABCDEDCBA

*/


#include<iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++){  
        char ch='A';
        //space
         for(int k=1;k<=n-i;k++){
            cout<<" ";
         }
            for(int j=1;j<=2*i-1;j++){
                cout<<ch;
                if(j<i){
                    ch++;
                }
                else{
                    ch--;
                }
            
         }
              cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}
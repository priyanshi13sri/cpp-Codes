/*

                             A B C D E 
                             A B C D 
                             A B C 
                             A B 
                             A






*/


#include<iostream>
using namespace std;

void print(int n){;
     for(int i=1;i<=n;i++){
        for(char j='A';j<='A'+n-i;j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
     }

}

int main(){

    int n;
    cin>>n; 
    print(n);
}
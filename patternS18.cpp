/*

                                        E
                                        DE
                                        CDE
                                        BCDE
                                        ABCDE



*/

#include<iostream>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        
        for(char j='E'-i;j<='E';j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}
#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int dup=n;
int sum=0;
while(n>0){
    int ld=n%10;
    sum=sum+(ld*ld*ld);
    n=n/10;
    int revNum=(revNum *10)+ld;
}
if(sum==dup)
cout<<"Armstrong Number";
else
cout<<"Not a Armstrong Number";

return 0;
}
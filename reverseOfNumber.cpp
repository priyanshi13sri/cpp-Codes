
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int revNum=0;
while(n>0){
revNum=(revNum*10)+n%10;
n=n/10;
}
cout<<revNum;
return 0;
}
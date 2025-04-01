#include<iostream>
using namespace std;
int main(){
  string ch;
   cin>>ch;
    if(ch>="a" &&ch<="z"){
        cout<<"This is a lower case";
    }
    else if(ch>="A"&& ch<="Z"){
        cout<<"This is a upper case ";
    }
    else{
        cout<<"There is not a letter related ";
    }
}
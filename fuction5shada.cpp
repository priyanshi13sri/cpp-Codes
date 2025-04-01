#include<iostream>
using namespace std;

double sum(double a,double b){
    double s= a+b;
    return s;

}

int min(int a,int b){//parameters
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){

   cout<<"min="<< min(5,6)<<endl;//arguments
    
    return 0;
}
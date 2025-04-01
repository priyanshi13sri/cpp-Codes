#include<iostream>
using namespace std;


int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    } 
   return sum;
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

//Pass by value

void change(int x){
    x=2*x;
    cout<<"x = " <<x<<endl;
}

int sumofDigits(int num){
    int sum=0;
    while(num>0){
        int lastdigit=num%10;
        num=num/10;
        sum=sum+lastdigit;
    }
    return sum;
    
}

int nCr(int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

   return fact_n/ (fact_r *fact_nmr);
}

int main(){
    
    int n=6,r=3;
   cout<< nCr(n,r) <<endl;
  

    cout<<"sum = "<< sumofDigits(2356)<<endl;
     int x=5;
     change(x); 
     cout<<"x = "<< x << endl;
    cout<<sumN(7)<<endl;
    cout<<sumN(3)<<endl;

    cout<<factorial(5)<<endl;
    
    cout<<factorial(4)<<endl;

    return 0;
}

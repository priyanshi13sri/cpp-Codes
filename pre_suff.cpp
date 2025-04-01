//Minimum value to get positive step by step sum

#include <iostream>
using namespace std;

int main(){
    int arr[5]={-3,2,-3,4,2};
   int sum=0,minSum=0;
    for(int i=0;i<5;i++){
       sum=sum+arr[i];
       if(sum<minSum)
       minSum=sum;
    }
  
   if(minSum<0)
  cout<< (-1*minSum)+1;
   else
  cout<< minSum+1;
return 0;
}
#include<iostream>
using namespace std;
// to find the index of the array element we can just simpily find the element after that at ehich position we find it we just do index=i and we can find the array index.

int main(){

    int nums[]={101,1,2,-15,65,99};
    int size=6;
    int i;
    int index1;
    int index2;
  //  cout<<sizeof(marks)/sizeof(int);
  int smallest=INT_MAX;
  int largest=INT_MIN;

  for( i=0;i<size;i++){

    if(nums[i]>largest){
        largest=nums[i];
      index1=i;
        
    }
  if(nums[i]<smallest){
    smallest=nums[i];
    index2=i;
   }
}
     // smallest=min(nums[i],smallest);
      
      //largest=max(nums[i],largest);
  
  
 /* cout<<"smallest number is: "<<smallest<<endl;
  cout<<"largest number is: "<<largest<<endl;
  */
 cout<<"smallest number at index : "<<index2 <<endl;
  cout<<"largest number at index : "<<index1<<endl;

    return 0;
}
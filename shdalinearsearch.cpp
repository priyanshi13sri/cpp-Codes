#include<iostream>
using namespace std;

int main(){
    
 int arr[]={21,32,23,47,97,45,85};
 int size=7;
 int key;
 cout<<"Enter the element you want to search: ";
 cin>>key;
 int index=-1;

 for(int i=0;i<size;i++){
    if(arr[i]==key){
         index=i;
         break;
    }
    
}

if(index!=-1){
    cout<<"Element found at index:"<<index<<endl;
}
else{
    cout<<"Element not found!";
}

    return 0;
}
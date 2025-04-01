 #include<iostream>
using namespace std;
#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    cout<<("Array: ");
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int deletionAtBeginning(int arr[], int size) {
   
    for (int i = 1; i <size; i++) {
        arr[i-1] = arr[i];
    }
   
    return size - 1;  
}
 int deletionAtEnd(int arr[], int size){
    int i;
    arr[i]=arr[size];
    return size -1;
 }

 int deletionAtSpecificPosition(int arr[],int size){
    for(int i=size;i<=size-3;i--){
        arr[i]=arr[i+1];
    }
    return size-1;
 }

int main(){
       int arr[] = {10, 20, 30, 40, 50,60,70,80,90}; 
    int size = 9;  

    cout<<"Initial "<<endl;
    displayArray(arr, size);

    
    size= deletionAtBeginning(arr, size);
    cout<<"After deletion  at beginning ";
    displayArray(arr, size);

    size = deletionAtEnd(arr, size);
    cout<<"After deletion at end";
    displayArray(arr,size);
 
    size = deletionAtSpecificPosition(arr, size);
    cout<<"After deletion at position";
    displayArray(arr,size);
 
    
} 


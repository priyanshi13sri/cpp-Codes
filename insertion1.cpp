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

int insertAtBeginning(int arr[], int size, int value) {
   
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    return size + 1;  
}
 int insertAtEnd(int arr[], int size, int value){
    arr[size]=value;
    return size +1;
 }

 int insertAtSpecificPosition(int arr[],int size,int value){
    for(int i=size;i>=size-2;i--){
        arr[i+1]=arr[i];
    }
    arr[size-2]=value;
 
    return size+1;
 }

int main(){
       int arr[] = {10, 20, 30, 40, 50}; 
    int size = 5;  

    cout<<"Initial "<<endl;
    displayArray(arr, size);

    
    size= insertAtBeginning(arr, size, 5);
    cout<<"After inserting 5 at beginning ";
    displayArray(arr, size);

    size = insertAtEnd(arr, size, 120);
    cout<<"After inserting 120 at end";
    displayArray(arr,size);
 
    size = insertAtSpecificPosition(arr, size, 12);
    cout<<"After inserting 12 at position";
    displayArray(arr,size);
 
    
} 


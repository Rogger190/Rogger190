#include<iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size;i++){

     if(i%2!=0){
        int temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
     }
    }
}

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

int main(){

int n;
cin>>n;
int arr[100];
readArray(arr,n);
swapAlternate(arr,n);
printArray(arr,n);

return 0;
}

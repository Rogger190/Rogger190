#include<iostream>
using namespace std;

void reverseArray(int a[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[10];
    readArray(arr,n);
    reverseArray(arr,n);
    printArray(arr,n);

return 0;
}

#include<iostream>
using namespace std;

void PrintArray(int b[],int n){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    PrintArray(arr,n);

    return 0;
}

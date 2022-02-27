#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here

    for(int i=0;i<size;i++){
            int flag=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]  && i!=j){
                flag=1;
                break;
            }
            }
        if(flag==0){
            return arr[i];
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
int unique=findUnique(arr,n);
//printArray(arr,n);
cout<<endl<<unique<<endl;

return 0;
}

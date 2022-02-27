#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){

for(int i=0;i<n-1;i++){

    int min=arr[i],minIndex=i;
//finding smallest value in array;
for(int j=i+1;j<n;j++){
    if(arr[j]<min){
        min=arr[j];
        minIndex=j;
    }
}
//Swapping that smallest value with the smallest unsorted index
int temp=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;


}

for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}

}




int main(){
int input[100],n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>input[i];
}
selectionSort(input,n);





return 0;
}

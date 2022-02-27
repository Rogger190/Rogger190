#include<iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start=0,end=n-1,mid,p=-1;

    while(start<end){
        mid=(start+end)/2;

        if(val<input[mid]){
            end=mid-1;
        }

        else if(val>input[mid]){
            start=mid+1;
        }

        else{
            return mid;
        }
    }
    return p;
}

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}


int main(){
int input[100],n,val;
cin>>n;
readArray(input,n);
cin>>val;
int k=binarySearch(input,n,val);
cout<<k;



return 0;
}

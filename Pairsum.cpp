#include<iostream>
using namespace std;

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int pairSum(int *input, int size, int x)
{
	//Write your code here
    int sum=0;
    for(int i=0;i<size;i++){

        for(int j=0;j<size;j++){

            if(input[i]+input[j]==x ){
                sum++;
                break;
            }
        }
    }
    return sum;
}


int main(){
int n;
cin>>n;
int arr[100];
readArray(arr,n);
int x;
cin>>x;
int ans=pairSum(arr,n,x);
cout<<"Pairs are: "<<ans<<" ";

return 0;
}

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr0[n];
    for(int i=1;i<=n;i++){
        cin>>arr0[i];
    }

    int arr1[n];
    for(int i=1;i<=n;i++){
        arr1[i]=i;
    }

cout<<endl;
    for(int i=1;i<=n;i++){
             int flag=0;
        for(int j=1;j<=n;j++){
            if(arr1[i]==arr0[j]){
                flag=1;
            }
        }
         if(flag==0){
               cout<<arr1[i]<<" ";
               }
    }


return 0;
}

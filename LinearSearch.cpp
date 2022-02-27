#include<iostream>
using namespace std;
int linearSearch(int *arr, int n, int x)
{
    //Write your code here
	int t,p=-1;
   //in>>t;

        for(int i=0;i<n;i++){
            if(arr[i]==x){
                return i;
            }
        }
        return p;

}
int main(){

    int n,arr[100],x;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    cin>>x;
    int z=linearSearch(arr,n,x);
    cout<<z<<endl;


return 0;
}

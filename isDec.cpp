#include<iostream>
using namespace std;

int main() {
	// Write your code here
    long n;
    cin>>n;
    long long arr[n];
    bool isDec=true;
 int i=0,n1=0,n2=1,n3;
    while(i<n-2){
        cin>>n3;
        n1=n2;
        n2=n3;
        if(n1<n2){
            isDec=true;
        }
        else if(n1>n2){
            isDec=true;
        }
        else{
            isDec=false;
        }
        i++;
    }
    cout<<endl;
    cout<<isDec<<endl;

}

#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i){
        cout<<" ";
        j++;
    }
    int k=1;
    while(k<=i){
        cout<<k;
        k++;
    }
    int m=i-1;
    while(m>0){
        cout<<m;
        m--;
    }
    cout<<endl;
    i++;
}

return 0;
}

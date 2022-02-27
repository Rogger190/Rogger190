#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int i=1,val=1;
    while(i<=N){
         int   k=1;
         while(k<=N-i){
            cout<<" ";
            k++;
         }
           int j=1;
        while(j<=i){
            cout<<val;
            j=j+1;
            val++;
        }
        cout<<endl;
        i=i+1;

    }

    return 0;
}

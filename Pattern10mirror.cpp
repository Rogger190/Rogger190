#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
       /* while(k<=n){  This approach will also work.

            cout<<"*";
            k++;
        }*/

        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }


        cout<<endl;
        i++;
    }


return 0;
}

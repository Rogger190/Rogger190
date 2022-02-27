#include<iostream>
using namespace std;

int main(){

        int n;
        cin>>n;
        int i=1;
        while(i<=n){
                int j=1;
                while(j<=i){
                  int k=j;
                    char ch='A'+n-k;
                    cout<<ch;
                    k--;
                    j++;
                }
            cout<<endl;
            i++;
        }

return 0;
}

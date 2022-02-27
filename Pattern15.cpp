#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
    	int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=1,l=i;
        while(k<=i){
            cout<<l;
            l++;
            k++;
        }
        int m=i-1;
        while(m>0){
            cout<<l-2;
            l--;
            m--;
        }



        cout<<endl;
        i++;
    }
}

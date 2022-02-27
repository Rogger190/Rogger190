#include<iostream>
#include<cmath>
using namespace std;


void printTable(int s, int e, int w) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    int i=s,d;
    while(i<=e){
        float c=(i-32)*(5.0/9.0);
        if(c<0){
            d=ceil(c);
        }
        else{
            d=floor(c);
        }
       //int d=ceil(c);
        cout<<i<<"\t"<<d<<endl;

        i=i+w;
    }

}

int main(){

int s,e,w;
cin>>s>>e>>w;
printTable(s,e,w);


return 0;
}



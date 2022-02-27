#include<iostream>
using namespace std;

int power(int x, int n){

if(n == 0){
    return 1;
}

int smallop = power(x, n-1);
int op = x * smallop;
return op;
}


int main(){
int x,n;
cin>>x>>n;
int op = power(x,n);
cout << op << endl;

return 0;
}

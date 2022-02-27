#include<iostream>
using namespace std;

bool isPrime(int n){

for(int i=2;i<n/2;i++){
    if(n%i==0){
    return false;
    }
}
return true;
/*if(flag==0){
    isPrime=true;
}
else{
    isPrime=false;
}

return isPrime;
}*/
}

int main(){

int n;
cin>>n;
//bool isPrime=true;
 bool ans=isPrime(n);
cout<<ans<<endl;

return 0;
}

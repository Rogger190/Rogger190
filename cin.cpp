#include<iostream>
using namespace std;

int main(){
int count=0;
char c;
c=cin.get();

while(c!='p'){
    count++;
    cin>>c;
}
cout<<endl;
cout<<count;

return 0;
}


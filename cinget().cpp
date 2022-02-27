#include<iostream>
using namespace std;

int main(){
int count=0;
char c;
c=cin.get();
while(c!='p'){
    count++;
    c=cin.get();
}
cout<<endl;
cout<<count;

return 0;
}

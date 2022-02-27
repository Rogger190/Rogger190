#include<iostream>
#include<cstring>
using namespace std;

int main(){

char input[100]="abcd";
int len=strlen(input);

for(int i=0; input[i]!='\0';i++){
    for(int j=0; j<=i; j++){
    cout<<input[j];
    }
cout<<endl;
}

return 0;
}

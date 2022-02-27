#include<iostream>
#include<cstring>
using namespace std;

int main(){

char input1[100]="abcd";
char input2[100]="hello";

cout<<"before copying"<<endl;
cout<<input1<<endl<<input2<<endl<<endl;
cout<<"After copying"<<endl;
strncpy(input1, input2, 3);

cout<<input1<<endl<<input2<<endl;


return 0;
}

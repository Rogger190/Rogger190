#include<iostream>
#include<cstring>
using namespace std;


int main(){

char input1[100], input2[100];

cin.getline(input1,100);
cin.getline(input2, 100);
//int len = strlen(input);
int cmp = strcmp(input1, input2);
/*if(cmp == 0){
    cout << "Strings are equal" << endl;
}
else{
    cout << "Strings are not equal" << endl;
}*/
cout << cmp << endl;

return 0;
}

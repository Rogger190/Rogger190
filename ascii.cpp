#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c>='a' && c<='z'){
        cout<<"1"<<endl;
    }
    else if(c>='A' && c<='Z'){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
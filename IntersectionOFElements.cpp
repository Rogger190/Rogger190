#include<iostream>
using namespace std;

void readArray(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    int a[100000],k=0;
    for(int i=0;i<size1;i++){

        for(int j=0;j<size2;j++){

            if(input1[i]==input2[j]){
                a[k]=input1[i];
                k++;
                break;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
int size1,size2;
cin>>size1;
int input1[1000],input2[1000];
readArray(input1,size1);
cin>>size2;
readArray(input2,size2);

intersection(input1,input2,size1,size2);




return 0;
}

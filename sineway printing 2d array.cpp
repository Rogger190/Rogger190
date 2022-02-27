#include<iostream>
using namespace std;

int main(){

int arr[100][100];
int m,n;
cin>>m>>n;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
//column wise matrix printing
/*for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;

}*/
//printing matrix sine wave wise


    int j=0;
    while(j<n){

        for(int i = 0 ; i < m ; i++){
            cout << arr[i][j] <<endl;
        }
        j++;

        for(int i = m - 1 ; i >= 0 ; i--){
            cout << arr[i][j];
        }
    }



return 0;
}

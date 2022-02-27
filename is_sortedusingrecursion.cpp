#include<iostream>
using namespace std;

bool is_sorted(int a[], int size){

if(size == 0 || size == 1){
    return true;
}

if(a[0] > a[1]){
    return false;
}

int is_smallersorted = is_sorted(a+1, size - 1);
return is_smallersorted;

}


int main(){

int n;
cin >> n;
int *a = new int[n];

for(int i = 0 ; i < n ; i++){
    cin >> a[i];
}

bool sorted_array = is_sorted(a , n);
cout << sorted_array;
delete a;

return 0;
}

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    for(int i=0,j=N-1;i<j && j>i;i++,j--){
	        int temp=arr[i];
	        arr[i]=arr[j];
	        arr[j]=temp;
	    }
	   for(int i=0;i<N;i++){
	       cout<<arr[i]<<" ";
	   }
	}
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int basic;
    char grade;
    cin>>basic;
    cin>>grade;

	float hra,da,allow,pf;

    hra=basic*(20/100);
    da=basic*(50/100);
    pf=basic*(11/100);

    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    int TotalSalary=basic+hra+da+allow-pf;
    int TS=floor(TotalSalary);
    cout<<TS<<endl;
    return 0;

}

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double n;
	cin>>n;
	double a=2*3.14*n;
	double b=pow(n,2)*3.14;
	cout<<fixed<<setprecision(3)<<a<<" "<<b<<endl;
	return 0;
}

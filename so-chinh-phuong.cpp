#include<iostream>
#include<cmath>
using namespace std;
bool isperfectsquare(long long x){
	long long n = sqrt(x);
	return n*n==x;}
int main(){
	long long number;
	cin>>number;
	if (isperfectsquare(number)){
		cout<<"YES";}
	else{
		cout<<"NO";}
	return 0;}

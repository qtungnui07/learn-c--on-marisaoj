#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a, b;
    cin>>a>>b;
	double n = a/b;
    cout<<fixed<<setprecision(2)<<n<<endl;
	return 0;
}

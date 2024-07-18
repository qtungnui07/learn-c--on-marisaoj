#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b,result;
    char op;
    cin>>a>>op>>b;
    switch (op)
    {
    case '+':
        result=a+b;
        break;
    case '-':
        result=a-b;
        break;
    case '*':
        result=a*b;
        break;
    case '/':
        if (b!=0){
            result=a/b;}
        else{cout<<"ze"<<endl;
        return 0;}
        break;
    
    default:
        cout<<"ze"<<endl;
        return 0;
        break;
    }
    cout<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}

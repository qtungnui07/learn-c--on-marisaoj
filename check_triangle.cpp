#include<iostream>
using namespace std;
string check_triangle(int a, int b, int c){
    if (a+b>c && b+c>a && c+a>b){
        return "YES";
    }else{
        return "NO";
    }
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<check_triangle(a,b,c)<<endl;
    return 0;
}

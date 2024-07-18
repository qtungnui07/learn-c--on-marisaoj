#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int res;
    if (a == b) {
        res = c;
    } else if (a == c) {
        res = b;
    } else {
        res = a;
    }
    cout << res << endl;
    
    return 0;
}

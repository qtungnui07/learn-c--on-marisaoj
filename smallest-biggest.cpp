#include <iostream>
using namespace std;

int main() {
    int a, b, c;
	cin >> a >> b >> c;
    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    int biggest = a;
    if (b > biggest) biggest = b;
    if (c > biggest) biggest = c;
    cout << smallest << " " << biggest << endl;
    
    return 0;
}

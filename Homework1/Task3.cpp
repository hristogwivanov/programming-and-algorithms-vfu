#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;
    
    if (n == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }
    
    stack<int> bits;
    int k = n;
    
    do {
        bits.push(k % 2);
        k = k / 2;
    } while (k);
    
    cout << "Binary: ";
    while (!bits.empty()) {
        cout << bits.top();
        bits.pop();
    }
    cout << endl;
    
    return 0;
}

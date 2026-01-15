#include <iostream>
#include <stack>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    stack<int> s;
    
    int n;
    do {
        cout << "Enter the number of elements (10-100): ";
        cin >> n;
    } while (n < 10 || n > 100);
    
    // Генериране на случайни числа от 1 до 101
    cout << "\nGenerated elements: ";
    for (int i = 0; i < n; i++) {
        int value = rand() % 101 + 1;
        cout << value << " ";
        s.push(value);
    }
    cout << endl;
    
    // Разделяне на четни и нечетни
    stack<int> even;      // Четните - stack (обръща се обратно към оригинален ред)
    queue<int> odd;       // Нечетните - queue (остават в обратен ред)
    
    // Извличаме от стека (обратен ред)
    while (!s.empty()) {
        int current = s.top();
        s.pop();
        
        if (current % 2 == 0) {
            even.push(current);
        } else {
            odd.push(current);
        }
    }
    
    // Извеждане: първо четни, после нечетни
    cout << "\nResult: ";
    
    // Четни (в реда на въвеждане)
    while (!even.empty()) {
        cout << even.top() << " ";
        even.pop();
    }
    
    // Нечетни (в обратен ред на въвеждане)
    while (!odd.empty()) {
        cout << odd.front() << " ";
        odd.pop();
    }
    
    cout << endl;
    
    return 0;
}

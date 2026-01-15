#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Инициализация на генератора
    
    queue<int> q;
    
    int n;
    do {
        cout << "Enter the number of elements (10-100): ";
        cin >> n;
    } while (n < 10 || n > 100);
    
    // Генериране на случайни числа от 1 до 1000
    for (int i = 0; i < n; i++) {
        int value = rand() % 1000 + 1;
        q.push(value);
    }
    
    // Изчисляваме min и avg докато извеждаме елементите
    int minVal = q.front();
    int sum = 0;
    int count = q.size();
    
    cout << "\nEntered elements: ";
    while (!q.empty()) {
        int current = q.front();
        cout << current << " ";
        
        if (current < minVal) {
            minVal = current;
        }
        sum += current;
        
        q.pop();
    }
    
    double avg = (double)sum / count;
    
    cout << endl;
    cout << "Min: " << minVal << endl;
    cout << "Avg: " << avg << endl;

    return 0;
}
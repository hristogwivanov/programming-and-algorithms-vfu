#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

struct Person {
    string name;
    int age;
    int height;        // ръст в см
    string address;
    string phone;
    string email;
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int n;
    cout << "Въведете броя на хората: ";
    cin >> n;
    cin.ignore();

    // Динамично заделяне на памет
    Person* people = new Person[n];

    // Въвеждане на данни
    for (int i = 0; i < n; i++) {
        cout << "\nЧовек #" << i + 1 << ":\n";

        cout << "Въведете име: ";
        getline(cin, people[i].name);

        cout << "Въведете възраст: ";
        cin >> people[i].age;

        cout << "Въведете ръст в сантиметри: ";
        cin >> people[i].height;
        cin.ignore();

        cout << "Въведете адрес: ";
        getline(cin, people[i].address);

        cout << "Въведете телефонен номер: ";
        getline(cin, people[i].phone);

        cout << "Въведете имейл адрес: ";
        getline(cin, people[i].email);
    }

    // Извеждане на информацията
    cout << "\nИнформация за хората:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nЧовек #" << i + 1 << ":\n";
        cout << "Име: " << people[i].name << endl;
        cout << "Възраст: " << people[i].age << endl;
        cout << "Ръст: " << people[i].height << " см" << endl;
        cout << "Адрес: " << people[i].address << endl;
        cout << "Телефонен номер: " << people[i].phone << endl;
        cout << "Имейл адрес: " << people[i].email << endl;
    }

    // Освобождаване на паметта
    delete[] people;

    return 0;
}

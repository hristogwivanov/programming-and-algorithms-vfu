#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    string color;
    string transmission;      // автоматик или ръчна
    int horsepower;
    string fuelType;          // бензин/дизел/газ или газ/бензин
    string engineType;        // V-образен/редови/боксер
    int displacementCC;       // кубатура в кубици
    double displacementLiters; // кубатура в литри
    int weight;               // тегло в кг
    int kilometers;           // изминати километри

public:
    void input() {
        cout << "Brand: ";
        getline(cin, brand);
        
        cout << "Model: ";
        getline(cin, model);
        
        cout << "Year: ";
        cin >> year;
        cin.ignore();
        
        cout << "Color: ";
        getline(cin, color);
        
        cout << "Transmission (automatic/manual): ";
        getline(cin, transmission);
        
        cout << "Horsepower: ";
        cin >> horsepower;
        cin.ignore();
        
        cout << "Fuel type (petrol/diesel/gas): ";
        getline(cin, fuelType);
        
        cout << "Engine type (V-type/inline/boxer): ";
        getline(cin, engineType);
        
        cout << "Displacement (cc): ";
        cin >> displacementCC;
        displacementLiters = displacementCC / 1000.0;
        
        cout << "Weight (kg): ";
        cin >> weight;
        
        cout << "Kilometers: ";
        cin >> kilometers;
    }
    
    void display() {
        cout << "\n=== Car Info ===" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
        cout << "Transmission: " << transmission << endl;
        cout << "Horsepower: " << horsepower << " hp" << endl;
        cout << "Fuel type: " << fuelType << endl;
        cout << "Engine type: " << engineType << endl;
        cout << "Displacement: " << displacementCC << " cc (" << displacementLiters << " L)" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Kilometers: " << kilometers << " km" << endl;
    }
};

int main() {
    Car car;
    car.input();
    car.display();
    
    return 0;
}

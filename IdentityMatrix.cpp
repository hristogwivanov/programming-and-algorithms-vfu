#include <iostream>
using namespace std;
int inc_arr[20][20]; //Инцидентна матрица (максимум 20 върха и 20 ребра)
int ed_no = 0; //Брой на ребрата (колоните в матирцата)
void displayMatrix(int v, int e){ // Функция за отпечатване на инцидентната матрица
    int i, j;
    for(i = 0; i < v; i++){
        for(j = 0; j < e; j++){
            cout << inc_arr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v){ // Функция за добавяне на ребро между върховете u и v
    inc_arr[u][ed_no] = 1; // Маркираме, че върховете u и v участват в текущото ребро
    inc_arr[v][ed_no] = 1;
    ed_no++; // Увеличаваме номера на реброто
}

void add_directed_edge(int u, int v){ // Функция за добавяне на насочено ребро от u към v
    inc_arr[u][ed_no] = -1; // Източник (реброто излиза от u)
    inc_arr[v][ed_no] = 1;  // Дестинация (реброто влиза във v)
    ed_no++;
}

void add_directed_edge_reverse(int u, int v){ // Функция за добавяне на насочено ребро от v към u
    inc_arr[u][ed_no] = 1;  // Дестинация
    inc_arr[v][ed_no] = -1; // Източник
    ed_no++;
}

main(int argc, char *argv[]){
    int v = 6; // Брой върхове
    int e = 9; // Брой ребра
    //Добавяне на ребра (неориентиран граф)
    add_edge(0, 4);
    add_edge(0, 3);
    add_edge(1, 2);
    add_edge(1, 4);
    add_edge(1, 5);
    add_edge(2, 3);
    add_edge(2, 5);
    add_edge(5, 3);
    
    displayMatrix(v, e); // Отпечатване на инцидентната матрица
    return 0;
}

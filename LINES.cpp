#include <cmath>
#include <iostream>
#include "LINES.h"
using namespace std;

LINES::LINES() {
    POINTS start, end;

}

bool LINES::init(POINTS start, POINTS end)
{
    if (&start == nullptr || &end == nullptr) return false;
    this->startPoint = start;
    this->endPoint = end;

    return true;
}

void LINES::input() {
    POINTS start, end;

    this->init(start, end);

}

void LINES::output() {
    std::cout << "Начальные координаты линии: ";
    this->startPoint.output();

    std::cout << "\nКонечные координаты линии:  ";
    this->endPoint.output();

    std::cout << "\nДлина линии: " << this->lenght()<<endl;


}

float LINES::lenght() {
    return this->startPoint.distance(this->endPoint);
}

void LINES::lenght(float *l) {
    *l = this->startPoint.distance(this->endPoint);

}

void LINES::lenght(float &l) {
    l = this->startPoint.distance(this->endPoint);

}

POINTS LINES::getStartPiont() {
    return this->startPoint;
}

POINTS LINES::getEndPoint() {
    return this->endPoint;
}
//одномерный массив длин линий
void LINES::massive_input_one_dimensional(float *a, int n){
    cin.exceptions(cin.failbit);
    int i;
    for(i=0; i < n; i ++) {

            try {
                cout << "Введите " << i + 1 << " элемент массива длины: ";
                cin >> a[i];
                if (a[i] < 0.0)
                    throw -1 ;
            }
            catch (...){
                cout << "Ошибка: Некорректный ввод!" << endl;
                cin.clear();
                cin.ignore(10, '\n');
                i--;
            }
        }
}

void LINES::massive2(float (*a)[C]) {
    int i,j;
    int n,m;

    cout <<"введите строки ";
    cin >> n;
    cout <<"Введите столбцы ";
    cin >> m;
    for (i = 0; i < n; i ++){
        for(j = 0; j < m; j ++){
            a[i][j] = i+j;
        }
    }
    cout <<"вывод двумерного массива линий\n";
    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j++)
            cout << " " << a[i][j];
        cout << std::endl;
    }
    // Дан двумерный массив и два числа: i и j.
    // Поменяйте в массиве столбцы с номерами i и j.
    int x,y,temp;
    cout <<"Введите столбцы для обмена: ";
    cin >> x >> y;
    for (int i = 0; i < n; i++) {
        temp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = temp;
    }
    // вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


}


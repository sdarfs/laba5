#include "POINTS.h"
#include <iostream>
#include <cmath>
using namespace std;


POINTS::POINTS() {
    x=y=0;
}

POINTS::POINTS(float x, float y) {
    this->x = x;
    this->y = y;
}

void POINTS::input() {
    cin.exceptions(cin.failbit);
    try {
        cin  >> this->x >> this->y;

    }
    catch(const exception &ex) {
        cout << "Ошибка: Некорректный ввод!" << endl;
        cout << ex.what() << endl;
        cin.clear();
        cin.ignore(10, '\n');
    }

}

void POINTS::output(){
    cout << "x = " << this->x << ", y = " << this->y;
}

float POINTS::distance(POINTS end) {
    if (&end == NULL) return -1;

    float d1 = end.x - this->x, d2 = end.y - this->y;
    return sqrt(d1 * d1 + d2 * d2);
}

float POINTS::getX()
{
    return this->x;
}

float POINTS::getY()
{
    return this->y;
}

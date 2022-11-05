//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_LINES_H
#define TASK2_LINES_H
#include "POINTS.h"
const int C = 3;
class LINES
{
private:
    POINTS startPoint, endPoint;

public:
    bool init(POINTS start, POINTS end);
    LINES();
    void input();
    void output();

    float lenght();
    void lenght(float *l);
    void lenght(float &l);
    POINTS getStartPiont();
    POINTS getEndPoint();
    static void massive_input_one_dimensional(float *a, int n);
    static void massive2(float(*a)[C]);


};

#endif //TASK2_LINES_H

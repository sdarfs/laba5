//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_CIRCLES_H
#define TASK2_CIRCLES_H
#include "POINTS.h"
#include "TRIANGLES.h"

class CIRCLES {
private:
    POINTS center;
    float radius;

public:
    CIRCLES();
    bool init(POINTS center, float radius);
    void input();
    void output();
    float area();
    float circlelenght();
    POINTS getCenter();
    float getRadius();

    void area_triangle_in_circle(float line1, float line2, float line3);
    friend float check(CIRCLES x);
    friend float RoundRadius(CIRCLES x);

static float radius_second;//статическое поле - радиус.
static float area_ring(CIRCLES r);

//функции перегрузки +
CIRCLES operator+(CIRCLES b);//сложение двух объектов оператор+
CIRCLES operator+(float b);//сложение с числом справа

//функции перегрузки ++
CIRCLES & operator ++();
CIRCLES operator ++(int unused);


};
#endif //TASK2_CIRCLES_H

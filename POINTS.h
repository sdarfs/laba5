
#ifndef TASK2_POINTS_H
#define TASK2_POINTS_H
#include <MacTypes.h>
class POINTS
{
private:
    float x{}, y{};

public:
    POINTS();
    POINTS(float a, float b);
    void input();
    void output();
    float distance(POINTS end);
    float getX();
    float getY();

};
#endif //TASK2_POINTS_H

/**
@file display.h
@brief 화면을 출력 기능을 가진 객체를 생성하기 위한 클래스를 선언한다.
@author sLo
*/

#ifndef __DISPLAY_H__
#define __DISPLAY_H__

#include "common.h"
#include "snake.h"

class Display
{
public:
    Display();

    void print_wall();
    void print_food(Position pos);
    void print_snake(Snake snake);
    void print_prompt(const char *msg);
    void clear();

    const int max_x() const;
    const int max_y() const;

private:
    const int max_x_;
    const int max_y_;
};

#endif
/**
@file snake_game.h
@brief 뱀게임을 통째로 추상화한다.
@author sLo
*/

#ifndef __SNAKE_GAME_H__
#define __SNAKE_GAME_H__

#include "common.h"
#include "display.h"
#include "snake.h"

class SnakeGame
{
    typedef unsigned int ScoreType;

public:
    SnakeGame();

    void initialize();

    ReturnCode start();
    ReturnCode play();
    ReturnCode stop();

    void make_food();

private:
    ReturnCode pause();

    bool is_valid_food_position(int x, int y);
    bool is_no_food();

    const ScoreType score() const;

private:
    Snake snake_;
    Position food_position_;
    Display display_;
    ScoreType score_;
};

#endif
#ifndef PLAYER_H
#define PLAYER_H

typedef enum
{
    DIR_DOWN,
    DIR_RIGHT,
    DIR_UP,
    DIR_LEFT
} Direction;

typedef enum
{
    ANIM_IDLE = 0,
    ANIM_WALK = 1
} AnimationState;

typedef struct Player
{
    float posX;
    float posY;

    Direction direction;
    AnimationState state;

    int frame;
    float animationTimer;
} Player;

#endif
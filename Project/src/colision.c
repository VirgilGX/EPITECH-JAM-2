/*
** EPITECH PROJECT, 2023
** colision.c
** File description:
** colision
*/

#include "dash_geometry.h"

void if_colision_white(GAME_T *GAME)
{
    int a = 100, b = 100;
    if ((GAME->obs->pre.x >= GAME->sprite_game->pos.x) &&
    (GAME->obs->pre.x <= (GAME->sprite_game->pos.x + a)) &&
    (GAME->obs->pre.y >= GAME->sprite_game->pos.y) &&
    (GAME->obs->pre.y <= (GAME->sprite_game->pos.y + b))) {
        printf("touché : %d\n", GAME->life);
        GAME->life++;
    }
}
/*
** EPITECH PROJECT, 2023
** colision.c
** File description:
** colision
*/

#include "dash_geometry.h"

void if_colision_white(GAME_T *GAME)
{
    int a = 110, b = 110;
    if ((GAME->sprite_game->pos.x >= GAME->obs->pre.x) &&
    (GAME->sprite_game->pos.x <= (GAME->obs->pre.x + a)) &&
    (GAME->sprite_game->pos.y >= GAME->obs->pre.y) &&
    (GAME->sprite_game->pos.y <= (GAME->obs->pre.y + b))) {
        printf("%d\n", GAME->life);
        GAME->life++;
    }
}
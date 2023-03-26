/*
** EPITECH PROJECT, 2023
** draw.c
** File description:
** draw
*/

#include "dash_geometry.h"

void sprite_static(GAME_T *GAME_T)
{
    sfRenderWindow_drawRectangleShape(GAME_T->window,
    GAME_T->sprite_game->black_rect, NULL);
    sfRenderWindow_drawRectangleShape(GAME_T->window,
    GAME_T->sprite_game->white_rect, NULL);
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obs->pierre, NULL);
}

void draw_sprite(GAME_T *GAME_T)
{
    sprite_static(GAME_T);
    if (GAME_T->boo % 2 == 0) {
        sfRenderWindow_drawSprite(GAME_T->window,
        GAME_T->sprite_game->ski_character, NULL);
    } else {
        sfRenderWindow_drawSprite(GAME_T->window,
        GAME_T->sprite_game->ski_character2, NULL);
    }
}

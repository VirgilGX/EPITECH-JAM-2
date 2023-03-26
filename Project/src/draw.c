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
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obs->pierrev2, NULL);
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obs->pierrev3, NULL);

    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obs->arbre, NULL);
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obs->cactus, NULL);

    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obns->champi, NULL);
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obns->champi2, NULL);
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obns->diamand, NULL);
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obns->piece, NULL);
    sfRenderWindow_drawSprite(GAME_T->window,
    GAME_T->obns->illusion, NULL);

    sfRenderWindow_drawRectangleShape(GAME_T->window,
    GAME_T->sprite_game->life, NULL);
    sfRenderWindow_drawRectangleShape(GAME_T->window,
    GAME_T->sprite_game->life2, NULL);
    sfRenderWindow_drawRectangleShape(GAME_T->window,
    GAME_T->sprite_game->life3, NULL);
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

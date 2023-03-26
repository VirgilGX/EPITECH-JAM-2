/*
** EPITECH PROJECT, 2023
** JAM 2 | XP
** File description:
** dash_geometry
*/

#include "dash_geometry.h"

void move_obstacle(GAME_T *GAME_T)
{
    int move = 8;
    GAME_T->obs->pre.x = GAME_T->obs->pre.x - move;
    sfVector2f cailloux = { GAME_T->obs->pre.x, GAME_T->obs->pre.y };
    sfSprite_setPosition(GAME_T->obs->pierre, cailloux);
    if (cailloux.x == 0) {
        GAME_T->obs->pre.x = 1900;
        GAME_T->obs->pre.y = ((rand() % 400) + 550);
    }
}

GAME_T *condition_window(GAME_T *GAME)
{
    while (sfRenderWindow_pollEvent(GAME->window, &GAME->event)) {
        if (GAME->event.type == sfEvtKeyPressed &&
        GAME->event.key.code == sfKeyEscape) {
            sfRenderWindow_close(GAME->window);
        }
        if (GAME->event.type == sfEvtKeyPressed &&
        GAME->event.key.code == sfKeySpace) {
            GAME->boo++;
        }
    }
    return (GAME);
}

int main_window(GAME_T *GAME_T, int index)
{
    while (sfRenderWindow_isOpen(GAME_T->window)) {
        GAME_T = condition_window(GAME_T);
        sfRenderWindow_clear(GAME_T->window, sfBlack);
        draw_sprite(GAME_T);
        move_obstacle(GAME_T);
        sfRenderWindow_display(GAME_T->window);
    }
    return (SUCCESS);
}

/*
** EPITECH PROJECT, 2023
** JAM 2 | XP
** File description:
** dash_geometry
*/

#include "dash_geometry.h"

int main_window(GAME_T *GAME_T)
{
    if (GAME_T->window != NULL) {
        while (sfRenderWindow_isOpen(GAME_T->window)) {
            while (sfRenderWindow_pollEvent(GAME_T->window, &GAME_T->event)) {
                if (GAME_T->event.type == sfEvtKeyPressed &&
                GAME_T->event.key.code == sfKeyEscape) {
                    sfRenderWindow_close(GAME_T->window);
                }
                //main_game();
            }
            draw_sprite(GAME_T);
            sfRenderWindow_display(GAME_T->window);
        }
    }
    return (SUCCESS);
}

/*void main_game(GAME_T *GAME_T)
{
    sfVector2i Q = sfMouse_getPositionRenderWindow(GAME_T->window);

    sfClock *clock = sfClock_create();

    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) >= 60) {
            sfVector2f ski_character = {ALL->h.px, ALL->h.py};
            sfSprite_setPosition(IMAGE[2].spr, pos_duck1);
        sfClock_restart(clock);
    }
}

int a = 110, b = 110;
    sfVector2i Q = sfMouse_getPositionRenderWindow(WINDOW);
    if (Q.x >= ALL->h.px && Q.x <= (ALL->h.px + a)
        && (Q.y >= ALL->h.py && Q.y <= (ALL->h.py + b)))
            if (EVENT.type == sfEvtMouseButtonPressed)
                respawn(ALL);
*/
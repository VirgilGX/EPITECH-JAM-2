/*
** EPITECH PROJECT, 2023
** free.c
** File description:
** free
*/

#include "dash_geometry.h"

void free_sprite(SPRITE_T *SPRITE_T, OBS_T *OBS_T, OBS_2T *OBS_2T)
{
    sfSprite_destroy(OBS_T->pierre);
    sfSprite_destroy(SPRITE_T->ski_character);
    sfSprite_destroy(SPRITE_T->ski_character2);
    sfRectangleShape_destroy(SPRITE_T->black_rect);
    sfRectangleShape_destroy(SPRITE_T->white_rect);
    free(OBS_T);
    free(OBS_2T);
    free(SPRITE_T);
}

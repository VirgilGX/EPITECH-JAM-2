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
    sfSprite_destroy(OBS_T->pierrev2);
    sfSprite_destroy(OBS_T->pierrev3);
    sfSprite_destroy(OBS_T->arbre);
    sfSprite_destroy(OBS_T->cactus);

    sfSprite_destroy(OBS_2T->champi);
    sfSprite_destroy(OBS_2T->champi2);
    sfSprite_destroy(OBS_2T->diamand);
    sfSprite_destroy(OBS_2T->piece);
    sfSprite_destroy(OBS_2T->illusion);

    sfSprite_destroy(SPRITE_T->ski_character);
    sfSprite_destroy(SPRITE_T->ski_character2);

    sfRectangleShape_destroy(SPRITE_T->black_rect);
    sfRectangleShape_destroy(SPRITE_T->white_rect);

    free(OBS_T);
    free(OBS_2T);
    free(SPRITE_T);
}

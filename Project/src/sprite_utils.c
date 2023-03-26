/*
** EPITECH PROJECT, 2023
** JAM 2 | XP
** File description:
** dash_geometry
*/

#include "dash_geometry.h"

SPRITE_T *set_sprite(void)
{
    SPRITE_T *S = malloc(sizeof(SPRITE_T));
    S->ski_character = create_sprite("./assets/sprite/character/skieur.png",
    0, 450, 0.7);
    S->ski_character2 = create_sprite("./assets/sprite/character/skieur2.png",
    1200, 0, 0.7);
    S->black_rect = create_rectangle(sfBlack, (sfVector2f){ 0, 0 },
    (sfVector2f){ 1920, 540 });
    S->white_rect = create_rectangle(sfWhite, (sfVector2f){ 0, 540 },
    (sfVector2f){ 1920, 1080 });
    return (S);
}

OBS_T *obs_sprite_white(void)
{
    OBS_T *obs = malloc(sizeof(OBS_T));
    obs->pre.x = 1200, obs->pre.y = ((rand() % 400) + 550);
    obs->pierre = create_sprite("./assets/sprite/obstacle/pierre.png",
    obs->pre.x, obs->pre.y, 1);
    return (obs);
}

OBS_2T *obns_sprite_black(void)
{
    OBS_2T *obns = malloc(sizeof(OBS_2T));
    return (obns);
}



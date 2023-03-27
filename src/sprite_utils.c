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
    S->life = create_rectangle(sfRed, (sfVector2f){20, 980}, (sfVector2f){50, 20});
    S->life2 = create_rectangle(sfRed, (sfVector2f){20, 1010}, (sfVector2f){50, 20});
    S->life3 = create_rectangle(sfRed, (sfVector2f){20, 1040}, (sfVector2f){50, 20});
    S->pos.x = 0, S->pos.y = 450, S->loc.x = 1200, S->loc.y = 0;
    S->ski_character = create_sprite("./assets/sprite/character/skieur.png",
    S->pos.x, S->pos.y, 0.5);
    S->ski_character2 = create_sprite("./assets/sprite/character/skieur2.png",
    S->loc.x, S->loc.y, 0.5);
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
    obs->pre2.x = 1800, obs->pre2.y = ((rand() % 400) + 550);
    obs->pre3.x = 600, obs->pre3.y = ((rand() % 400) + 550);

    obs->abr.x = 1000, obs->abr.y = ((rand() % 400) + 550);
    obs->cact.x = 900, obs->cact.y = ((rand() % 400) + 550);

    obs->pierre = create_sprite("./assets/sprite/obstacle/pierre.png",
    obs->pre.x, obs->pre.y, 1);
    obs->pierrev2 = create_sprite("./assets/sprite/obstacle/pierre2.png",
    obs->pre2.x, obs->pre2.y, 1);
    obs->pierrev3 = create_sprite("./assets/sprite/obstacle/pierre3.png",
    obs->pre3.x, obs->pre3.y, 1);

    obs->arbre = create_sprite("./assets/sprite/obstacle/pain.png",
    obs->abr.x, obs->abr.y, 1);
    obs->cactus = create_sprite("./assets/sprite/obstacle/cactus.png",
    obs->cact.x, obs->cact.y, 1);
    return (obs);
}

OBS_2T *obns_sprite_black(void)
{
    OBS_2T *obns = malloc(sizeof(OBS_2T));
    obns->champ.x = 400, obns->champ.y = (rand() % 480);
    obns->champ2.x = 620, obns->champ2.y = (rand() % 480);
    obns->diam.x = 1200, obns->diam.y = (rand() % 480);
    obns->pie.x = 300, obns->pie.y = (rand() % 480);
    obns->illu.x = (rand() % 1910), obns->illu.y = (rand() % 400);

    obns->champi = create_sprite("./assets/sprite/obstacle/champi_o.png",
    obns->champ.x, obns->champ.y, 1.5);
    obns->champi2 = create_sprite("./assets/sprite/obstacle/champi_v.png",
    obns->champ2.x, obns->champ2.y, 1.5);

    obns->diamand = create_sprite("./assets/sprite/obstacle/diamand_r.png",
    obns->diam.x, obns->diam.y, 1.5);
    obns->piece = create_sprite("./assets/sprite/obstacle/piece.png",
    obns->pie.x, obns->pie.y, 1.5);
    obns->illusion = create_sprite("./assets/sprite/illusion/optique2.png",
    obns->illu.x, obns->illu.y, 1);
    return (obns);
}

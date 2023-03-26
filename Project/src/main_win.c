/*
** EPITECH PROJECT, 2023
** JAM 2 | XP
** File description:
** dash_geometry
*/

#include "dash_geometry.h"

void move_obstacle_white(GAME_T *GAME)
{
    int speed = 20;
    GAME->obs->pre.x = GAME->obs->pre.x - speed;
    sfVector2f posso = { GAME->obs->pre.x, GAME->obs->pre.y };
    sfSprite_setPosition(GAME->obs->pierre, posso);
    if (GAME->obs->pre.x == 0) {
        GAME->obs->pre.x = 1920;
        GAME->obs->pre.y = ((rand() % 400) + 550);
    }
    GAME->obs->pre2.x = GAME->obs->pre2.x - speed;
    sfVector2f posso2 = { GAME->obs->pre2.x, GAME->obs->pre2.y };
    sfSprite_setPosition(GAME->obs->pierrev2, posso2);
    if (GAME->obs->pre2.x == 0) {
        GAME->obs->pre2.x = 1920;
        GAME->obs->pre2.y = ((rand() % 400) + 550);
    }
    GAME->obs->abr.x = GAME->obs->abr.x - speed;
    sfVector2f abris = { GAME->obs->abr.x, GAME->obs->abr.y };
    sfSprite_setPosition(GAME->obs->arbre, abris);
    if (GAME->obs->abr.x == 0) {
        GAME->obs->abr.x = 1920;
        GAME->obs->abr.y = ((rand() % 400) + 550);
    }
}

void move_obstacle_black(GAME_T *GAME)
{
    int speed = 15;
    GAME->obns->champ.x = GAME->obns->champ.x + speed;
    sfVector2f pos = { GAME->obns->champ.x, GAME->obns->champ.y };
    sfSprite_setPosition(GAME->obns->champi, pos);
    if (GAME->obns->champ.x == 1920) {
        GAME->obns->champ.x = 0;
    }
    GAME->obns->diam.x = GAME->obns->diam.x + speed;
    sfVector2f pos3 = { GAME->obns->diam.x, GAME->obns->diam.y };
    sfSprite_setPosition(GAME->obns->diamand, pos3);
    if (GAME->obns->diam.x == 1920) {
        GAME->obns->diam.x = 0;
        GAME->obns->diam.y = (rand() % 480);
    }
}

void move_skier_white(GAME_T *GAME)
{
    int speed = 50;
    if (GAME->event.type == sfEvtKeyPressed && GAME->event.key.code == sfKeyUp) {
        GAME->sprite_game->pos.y = GAME->sprite_game->pos.y - speed;
        sfVector2f loco = { GAME->sprite_game->pos.x, GAME->sprite_game->pos.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character, loco);
    } else if (GAME->event.type == sfEvtKeyPressed && GAME->event.key.code == sfKeyDown) {
        GAME->sprite_game->pos.y = GAME->sprite_game->pos.y + speed;
        sfVector2f loco = { GAME->sprite_game->pos.x, GAME->sprite_game->pos.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character, loco);
    }
    if (GAME->event.type == sfEvtKeyPressed && GAME->event.key.code == sfKeyLeft) {
        GAME->sprite_game->pos.x = GAME->sprite_game->pos.x - speed;
        sfVector2f loco = { GAME->sprite_game->pos.x, GAME->sprite_game->pos.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character, loco);
    } else if (GAME->event.type == sfEvtKeyPressed && 
    GAME->event.key.code == sfKeyRight) {
        GAME->sprite_game->pos.x = GAME->sprite_game->pos.x + speed;
        sfVector2f loco = { GAME->sprite_game->pos.x, GAME->sprite_game->pos.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character, loco);
    }
}

void move_skier_black(GAME_T *GAME)
{
    int speed = 50;
    if (GAME->event.type == sfEvtKeyPressed && GAME->event.key.code == sfKeyUp) {
        GAME->sprite_game->loc.y = GAME->sprite_game->loc.y - speed;
        sfVector2f loco = { GAME->sprite_game->loc.x, GAME->sprite_game->loc.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character2, loco);
    } else if (GAME->event.type == sfEvtKeyPressed && GAME->event.key.code == sfKeyDown) {
        GAME->sprite_game->loc.y = GAME->sprite_game->loc.y + speed;
        sfVector2f loco = { GAME->sprite_game->loc.x, GAME->sprite_game->loc.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character2, loco);
    }
    if (GAME->event.type == sfEvtKeyPressed && GAME->event.key.code == sfKeyLeft) {
        GAME->sprite_game->loc.x = GAME->sprite_game->loc.x - speed;
        sfVector2f loco = { GAME->sprite_game->loc.x, GAME->sprite_game->loc.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character2, loco);
    } else if (GAME->event.type == sfEvtKeyPressed && GAME->event.key.code == sfKeyRight) {
        GAME->sprite_game->loc.x = GAME->sprite_game->loc.x + speed;
        sfVector2f loco = { GAME->sprite_game->loc.x, GAME->sprite_game->loc.y };
        sfSprite_setPosition(GAME->sprite_game->ski_character2, loco);
    }
}

GAME_T *condition_window(GAME_T *GAME)
{
    while (sfRenderWindow_pollEvent(GAME->window, &GAME->event)) {
        if (GAME->event.type == sfEvtKeyPressed &&
        GAME->event.key.code == sfKeyEscape) {
            sfRenderWindow_close(GAME->window);
        } else if (GAME->event.type == sfEvtKeyPressed &&
        GAME->event.key.code == sfKeySpace) {
            GAME->boo++;
        }
        if (GAME->boo % 2 == 0)
            move_skier_white(GAME);
        else
            move_skier_black(GAME);
    }
    return (GAME);
}

GAME_T *main_window(GAME_T *GAME_T)
{
    while (sfRenderWindow_isOpen(GAME_T->window)) {
        GAME_T = condition_window(GAME_T);
        sfRenderWindow_clear(GAME_T->window, sfBlack);
        draw_sprite(GAME_T);
        move_obstacle_white(GAME_T);
        move_obstacle_black(GAME_T);
        sfRenderWindow_display(GAME_T->window);
        if_colision_white(GAME_T);
    }
    return (GAME_T);
}

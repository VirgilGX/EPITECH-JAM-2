/*
** EPITECH PROJECT, 2023
** colision.c
** File description:
** colision
*/

#include "dash_geometry.h"

int colision_sprite(int vie, GAME_T *GAME)
{
    switch (vie) {
        case 1:
        sfRenderWindow_drawRectangleShape(GAME->window, GAME->sprite_game->life, NULL);
        break;
        case 2:
        sfRenderWindow_drawRectangleShape(GAME->window, GAME->sprite_game->life2, NULL);
        break;
        case 3:
        sfRenderWindow_drawRectangleShape(GAME->window, GAME->sprite_game->life3, NULL);
        break;
    }
    return (vie);
}

int if_colision_white(GAME_T *GAME)
{
    sfFloatRect rect_1 = sfSprite_getGlobalBounds(GAME->sprite_game->ski_character2);
    sfFloatRect rect_2 = sfSprite_getGlobalBounds(GAME->obs->pierre);
    sfFloatRect rect_3 = sfSprite_getGlobalBounds(GAME->obs->pierrev2);
    sfFloatRect rect_4 = sfSprite_getGlobalBounds(GAME->obs->pierrev3);
    sfFloatRect rect_5 = sfSprite_getGlobalBounds(GAME->obs->arbre);
    sfFloatRect rect_6 = sfSprite_getGlobalBounds(GAME->obs->cactus);

    if ((sfFloatRect_intersects(&rect_1, &rect_2, NULL) == 0) || (sfFloatRect_intersects(&rect_1, &rect_3, NULL) == 0) ||
    (sfFloatRect_intersects(&rect_1, &rect_4, NULL) == 0) || (sfFloatRect_intersects(&rect_1, &rect_5, NULL) == 0) ||
    (sfFloatRect_intersects(&rect_1, &rect_6, NULL) == 0)) {
        if (GAME->life < 3) {
            GAME->life++;
        } else {
            sfRenderWindow_close(GAME->window);
        }
    }
    return (0);
}

void if_colision_black(GAME_T *GAME_T)
{
    sfFloatRect rect_1 = sfSprite_getGlobalBounds(GAME_T->sprite_game->ski_character2);
    sfFloatRect rect_2 = sfSprite_getGlobalBounds(GAME_T->obns->champi);
    sfFloatRect rect_3 = sfSprite_getGlobalBounds(GAME_T->obns->champi2);
    sfFloatRect rect_4 = sfSprite_getGlobalBounds(GAME_T->obns->diamand);
    sfFloatRect rect_5 = sfSprite_getGlobalBounds(GAME_T->obns->piece);
    sfFloatRect rect_6 = sfSprite_getGlobalBounds(GAME_T->obns->illusion);

    if ((sfFloatRect_intersects(&rect_1, &rect_2, NULL) == 0) || (sfFloatRect_intersects(&rect_1, &rect_3, NULL) == 0) ||
    (sfFloatRect_intersects(&rect_1, &rect_4, NULL) == 0) || (sfFloatRect_intersects(&rect_1, &rect_5, NULL) == 0) ||
    (sfFloatRect_intersects(&rect_1, &rect_6, NULL) == 0)) {
        printf("touché2 : %d\n", GAME_T->life);
        if (GAME_T->life < 3) {
            GAME_T->life++;
        } else {
            sfRenderWindow_close(GAME_T->window);
        }
    }
}


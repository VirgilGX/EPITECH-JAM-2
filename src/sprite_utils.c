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
   S->ski_character = create_sprite("./assets/sprite/character/skieur.png", 0, 450, 0.7);
   //S->ski_character2 = create_sprite("./assets/sprite/character/skieur2.png", 1200, 0, 0.7);
   S->black_rect = create_rectangle(sfBlack, (sfVector2f){ 0, 0 }, (sfVector2f){ 1920, 600 });
   S->white_rect = create_rectangle(sfWhite, (sfVector2f){ 0, 540 }, (sfVector2f){ 1920, 1080 });
   return (S);
}

void draw_sprite(GAME_T *GAME_T)
{
   sfRenderWindow_drawRectangleShape(GAME_T->window, GAME_T->sprite_game->black_rect, NULL);
   sfRenderWindow_drawRectangleShape(GAME_T->window, GAME_T->sprite_game->white_rect, NULL);
   sfRenderWindow_drawSprite(GAME_T->window, GAME_T->sprite_game->ski_character, NULL);
   //sfRenderWindow_drawSprite(GAME_T->window, GAME_T->sprite_game->ski_character2, NULL);
}

void free_sprite(SPRITE_T *SPRITE_T)
{
   sfSprite_destroy(SPRITE_T->ski_character);
   //sfSprite_destroy(SPRITE_T->ski_character2);
   sfRectangleShape_destroy(SPRITE_T->black_rect);
   sfRectangleShape_destroy(SPRITE_T->white_rect);
   free(SPRITE_T);
}

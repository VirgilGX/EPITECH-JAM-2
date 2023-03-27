/*
** EPITECH PROJECT, 2023
** JAM 2 | XP
** File description:
** dash_geometry
*/

#include "dash_geometry.h"

int game_init(char **args)
{
    (void)args;
    GAME_T *G = malloc(sizeof(GAME_T));
    if (!G) {
        fprintf(stderr, "%sError: malloc failed%s\n", RED, RESET);
    }
    G->window = create_window(1920, 1080, "Dash_Geometry");
    sfRenderWindow_setFramerateLimit(G->window, 60);
    G->sprite_game = set_sprite();
    G->obs = obs_sprite_white();
    G->obns = obns_sprite_black();
    G->life = 3;

    int status = 0;
    G = main_window(G);
    if (G->life == 1) {
        sfRectangleShape_destroy(G->sprite_game->life);
    } else if (G->life == 2) {
        sfRectangleShape_destroy(G->sprite_game->life2);
    } else if (G->life == 3) {
        sfRectangleShape_destroy(G->sprite_game->life3);
        free_sprite(G->sprite_game, G->obs, G->obns);
        free(G);
        status = 1;
    } else {
        free_sprite(G->sprite_game, G->obs, G->obns);
        sfRenderWindow_destroy(G->window);
        free(G);
        status = 0;
    }
    return (status);
}

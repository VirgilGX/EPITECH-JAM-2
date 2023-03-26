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
    G->sprite_game = set_sprite();
    G->obs = obs_sprite_white();
    G->obns = obns_sprite_black();

    int status = 0, index = 0;
    if (G->window != NULL)
        status = main_window(G, index);
    free_sprite(G->sprite_game, G->obs, G->obns);
    sfRenderWindow_destroy(G->window);
    free(G);
    return (status);
}

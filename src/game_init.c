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

    int status = main_window(G);
    free_sprite(G->sprite_game);
    sfRenderWindow_destroy(G->window);
    free(G);
    return (status);
}

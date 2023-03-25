/*
** EPITECH PROJECT, 2023
** JAM 2 | XP
** File description:
** dash_geometry
*/

#ifndef DASH_GEOMETRY
    #define DASH_GEOMETRY
    // Constants
    #define PI 3.14159265358979323846
    #define SUCCESS 0
    #define END 2
    #define ERROR 1
    #define BPP 32
    #define RESET "\033[0m"
    #define RED "\033[31m"
    // CSFML Includes
    #include <SFML/Graphics.h>
    // C Includes
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    // Struct
    typedef struct SPRITE_T {
        sfTexture *texture;
        sfSprite *ski_character;
        sfSprite *ski_character2;
        sfRectangleShape *black_rect;
        sfRectangleShape *white_rect;
        sfVector2f position;
        sfVector2f scale;
        sfVector2f origin;
    } SPRITE_T;
    typedef struct GAME_T {
        sfRenderWindow *window;
        sfEvent event;
        sfTexture *texture;
        SPRITE_T *sprite_game;
        sfVector2f position;
        sfVector2f scale;
        sfVector2f origin;
    } GAME_T;

/* Function create */
sfRenderWindow *create_window(int width, int height, char *str);
sfSprite *create_sprite(char *name, int posx, int posy, double scale);
sfRectangleShape *create_rectangle(sfColor color, sfVector2f pos, sfVector2f size);

/* Sprite */
SPRITE_T *set_sprite(void);
void draw_sprite(GAME_T *GAME_T);
void free_sprite(SPRITE_T *SPRITE_T);

/* Game */
int game_init(char **args);
int main_window(GAME_T *GAME_T);
#endif /* DASH_GEOMETRY */

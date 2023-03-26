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
    #include <stdbool.h>
    // C Includes
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <time.h>

    /* Structure sprite */
    typedef struct SPRITE_T {
        sfTexture *texture;
        sfSprite *ski_character;
        sfVector2f pos;
        sfSprite *ski_character2;
        sfVector2f loc;
        sfRectangleShape *life;
        sfRectangleShape *life2;
        sfRectangleShape *life3;
        sfRectangleShape *black_rect;
        sfRectangleShape *white_rect;
        sfVector2f scale;
        sfVector2f origin;
    } SPRITE_T;

    /* Bande blanche */
    typedef struct OBS_T {
        sfSprite *pierre;
        sfVector2f pre;
        sfSprite *pierrev2;
        sfVector2f pre2;
        sfSprite *pierrev3;
        sfVector2f pre3;
        sfSprite *arbre;
        sfVector2f abr;
        sfSprite *cactus;
        sfVector2f cact;
    } OBS_T;

    /* Bande noir */
    typedef struct OBS_2T {
        sfSprite *champi;
        sfVector2f champ;
        sfSprite *champi2;
        sfVector2f champ2;
        sfSprite *diamand;
        sfVector2f diam;
        sfSprite *piece;
        sfVector2f pie;
        sfSprite *illusion;
        sfVector2f illu;
    } OBS_2T;

    /* Structure globale */
    typedef struct GAME_T {
        sfRenderWindow *window;
        sfEvent event;
        sfTexture *texture;
        SPRITE_T *sprite_game;
        OBS_T *obs;
        OBS_2T *obns;
        sfVector2f position;
        sfVector2f scale;
        sfVector2f origin;
        int boo;
        int life;
    } GAME_T;

/* Function create */
sfRenderWindow *create_window(int width, int height, char *str);
sfSprite *create_sprite(char *name, int posx, int posy, double scale);
sfRectangleShape *create_rectangle(sfColor color, sfVector2f pos,
sfVector2f size);

/* Sprite */
SPRITE_T *set_sprite(void);
OBS_T *obs_sprite_white(void);
OBS_2T *obns_sprite_black(void);
void draw_sprite(GAME_T *GAME_T);

/* Mouvement */
void move_obstacle_white(GAME_T *GAME_T);
void move_obstacle_black(GAME_T *GAME_T);
void movement_white(sfSprite *sprite, sfVector2f pos);
void movement_black(sfSprite *sprite, sfVector2f pos);

/* Colision */
void if_colision_white(GAME_T *GAME);

/* Menu */
void menu(char **args);

/* Game */
int game_init(char **args);
GAME_T *main_window(GAME_T *GAME_T);

/* Free */
void free_sprite(SPRITE_T *SPRITE_T, OBS_T *OBS_T, OBS_2T *OBS_2T);

#endif /* DASH_GEOMETRY */

/*
** EPITECH PROJECT, 2023
** JAM 2 | XP
** File description:
** dash_geometry
*/

#include "dash_geometry.h"

sfRenderWindow *create_window(int width, int height, char *str)
{
    sfVideoMode mode = { width, height, BPP };
    sfRenderWindow *win = sfRenderWindow_create(mode, str,
    sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(win, 60);
    return (win);
}

sfSprite *create_sprite(char *name, int posx, int posy, double scale)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(name, NULL);
    sfVector2f position = {posx, posy};
    sfVector2f scaler = {scale, scale};
    sfSprite_setScale(sprite, scaler);
    sfSprite_setPosition(sprite, position);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return (sprite);
}

sfRectangleShape *create_rectangle(sfColor color, sfVector2f pos,
sfVector2f size)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(rectangle, size);
    sfRectangleShape_setFillColor(rectangle, color);
    sfRectangleShape_setPosition(rectangle, pos);

    return (rectangle);
}

void movement_white(sfSprite *sprite, sfVector2f pos)
{
    int speed = 8;
    pos.x = pos.x - speed;
    sfVector2f posso = { pos.x, pos.y };
    sfSprite_setPosition(sprite, posso);
    if (pos.x == 0)
        pos.x = 1920;
}

void movement_black(sfSprite *sprite, sfVector2f pos)
{
    int speed = 8;
    pos.x = pos.x + speed;
    sfVector2f posso = { pos.x, pos.y };
    sfSprite_setPosition(sprite, posso);
    if (pos.x == 1920)
        pos.x = 0;
}
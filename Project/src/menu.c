/*
** EPITECH PROJECT, 2023
** menu.c
** File description:
** menu
*/

#include "dash_geometry.h"

int click_start_bouton(sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (mouse.x >= 790 && mouse.x <= 1100 && mouse.y >= 550 && mouse.y <= 650) {
        if (event.type == sfEvtMouseButtonPressed) {
            return (1);
        }
    }
    return (0);
}

void menu(char **args)
{
    sfEvent event;
    sfRenderWindow *window = create_window(1920, 1080, "Menu");
    sfSprite *button = create_sprite("./assets/sprite/button2.png", 800, 550, 1);
    sfSprite *back = create_sprite("./assets/sprite/back.jpg", 0, 0, 1);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_drawSprite(window, back, NULL);
        sfRenderWindow_drawSprite(window, button, NULL);
        sfRenderWindow_display(window);
        if (click_start_bouton(window, event) == 1) {
            sfRenderWindow_close(window);
            game_init(args);
        }
    }
    sfSprite_destroy(button);
    sfSprite_destroy(back);
    sfRenderWindow_destroy(window);
}

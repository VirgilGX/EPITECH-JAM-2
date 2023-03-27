/*
** EPITECH PROJECT, 2023
** effects_handler.c
** File description:
** draw
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>

void glitch_effect(sfRenderWindow* window) {
    srand(time(NULL));
    sfVector2u windowSize = sfRenderWindow_getSize(window);

    sfTexture* texture = sfTexture_create(windowSize.x, windowSize.y);
    sfSprite* sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    int width = windowSize.x;
    int height = windowSize.y;

    sfUint8* pixels = malloc(width * height * 4);
    sfTexture_updateFromRenderWindow(texture, window, 0, 0);

    for (int i = 0; i < 10; i++) {
        int x = rand() % width;
        int y = rand() % height;
        int size = rand() % 20;

        for (int j = x; j < x + size && j < width; j++) {
            for (int k = y; k < y + size && k < height; k++) {
                int pixelIndex = (j + k * width) * 4;
                pixels[pixelIndex] = rand() % 256;
                pixels[pixelIndex + 1] = rand() % 256;
                pixels[pixelIndex + 2] = rand() % 256;
            }
        }
    }

    sfTexture_updateFromPixels(texture, pixels, width, height, 0, 0);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);

    free(pixels);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
}

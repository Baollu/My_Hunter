/*
** EPITECH PROJECT, 2023
** window
** File description:
** window
*/

#include <stdlib.h>
#include "include/struct.h"
#include "include/my.h"
#include <SFML/Graphics.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <time.h>

sfRenderWindow *create_window(char *name)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 30};

    window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
    if (!window){
        return NULL;
    }
    return window;
}

void display(struct start *init)
{
    sfRenderWindow_clear(init->window, sfBlack);
    sfSprite_setScale(init->spritedeco, init->positionDeco);
    sfRenderWindow_drawSprite(init->window, init->spritedeco, NULL);
    sfRenderWindow_drawSprite(init->window, init->sprite, NULL);
    sfSprite_setTexture(init->sprite, init->texture, sfTrue);
    sfSprite_setTexture(init->spritedeco, init->texturedeco, sfTrue);
    sfSprite_setPosition(init->sprite, init->position);
    init->position.x += 0.5;
    init->position.y += 0.01;
    if (init->position.x == 1920)
        init->position.x = 0;
    if (init->position.y == 1080)
        init->position.y = 0;
    sfSprite_setTextureRect(init->sprite, *(init->rectSprite));
    sfRenderWindow_display(init->window);
}

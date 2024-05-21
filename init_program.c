/*
** EPITECH PROJECT, 2023
** init
** File description:
** inti
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


struct start *init_program(void)
{
    struct start *init;
    sfVideoMode mode = {1920, 1080, 30};

    init = malloc(sizeof(struct start));
    init->rectSprite = init_rectsprite();
    init->window = sfRenderWindow_create(mode, "My_hunter", sfClose, NULL);
    init->clock = sfClock_create();
    init->sprite = sfSprite_create();
    init->spritedeco = sfSprite_create();
    init->texturedeco = sfTexture_createFromFile("picture/back.JPG", NULL);
    init->texture = sfTexture_createFromFile("picture/spritesheet.png", NULL);
    init->position.x = 0;
    init->position.y = 20;
    init->positionDeco.x = 4.0;
    init->positionDeco.y = 3.5;
    return init;
}

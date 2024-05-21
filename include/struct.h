/*
** EPITECH PROJECT, 2023
** struct
** File description:
** struct
*/

#include <SFML/Graphics.h>
#include <SFML/Window/Mouse.h>
#include <stdio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <time.h>

#ifndef STRUCT
    #define STRUCT

struct start{
    sfWindow *window2;
    sfRenderWindow *window;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfSprite *sprite;
    sfTexture *texture;
    sfTexture *texturedeco;
    sfIntRect *rectSprite;
    sfVector2f position;
    sfSprite *spritedeco;
    sfVector2f positionDeco;
};

#endif

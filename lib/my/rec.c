/*
** EPITECH PROJECT, 2023
** rec
** File description:
** rec
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

sfIntRect *init_rectsprite(void)
{
    sfIntRect *rectSprite = malloc(sizeof(sfIntRect));

    rectSprite->top = 0;
    rectSprite->left = 0;
    rectSprite->width = 110;
    rectSprite->height = 110;
    return rectSprite;
}

void move_rect(sfIntRect *rectSprite, int offset, int max_value)
{
    if (rectSprite->left < max_value)
        rectSprite->left += offset;
    if (rectSprite->left >= max_value)
        rectSprite->left = 0;
}

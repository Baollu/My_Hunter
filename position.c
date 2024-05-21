/*
** EPITECH PROJECT, 2023
** position
** File description:
** position
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

void position_cursor(struct start *init)
{
    sfVector2i button = sfMouse_getPositionRenderWindow(init->window);
    sfFloatRect sprite_position = sfSprite_getGlobalBounds(init->sprite);

    if (sfMouse_isButtonPressed(sfMouseLeft)){
        if (sfFloatRect_contains(&sprite_position, button.x, button.y)){
            srand(time(NULL));
            init->position.x = rand() % (1920 - 0);
            init->position.y = rand() % (1080 - 0);
        }
    }
}

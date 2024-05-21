/*
** EPITECH PROJECT, 2023
** event
** File description:
** event
*/

#include <stdlib.h>
#include "include/struct.h"
#include "include/my.h"
#include <SFML/Graphics.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Types.h>

void analyse_events(struct start *init, sfEvent event)
{
    while (sfRenderWindow_pollEvent(init->window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(init->window);
        if (event.type == sfEvtMouseButtonPressed)
            position_cursor(init);
    }
}

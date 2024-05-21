/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
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

int my_hunter(void)
{
    struct start *init = init_program();
    sfTime time;
    float seconds;
    sfEvent event;

    while (sfRenderWindow_isOpen(init->window)){
        time = sfClock_getElapsedTime(init->clock);
        seconds = time.microseconds / 100000.0;
        if (seconds > 1.0){
            move_rect(init->rectSprite, 110, 330);
            sfClock_restart(init->clock);
        }
        analyse_events(init, event);
        display(init);
    }
    sfRenderWindow_destroy(init->window);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][1] == 'h')
        rules();
    my_hunter();
}

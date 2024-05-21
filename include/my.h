/*
** EPITECH PROJECT, 2023
** hunter_h
** File description:
** hunter_h
*/

#ifndef LIB_H
    #define LIB_H

int my_putstr(char const *str);
void my_putchar(char c);
void analyse_events(struct start *init, sfEvent event);
struct start *init_program(void);
void position(struct start *init);
sfIntRect *init_rectsprite(void);
void move_rect(sfIntRect *rectSprite, int offset, int max_value);
void rules(void);
sfRenderWindow *create_window(char *name);
void display(struct start *init);
void position_cursor(struct start *init);
int mini_printf(const char *format, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);

#endif

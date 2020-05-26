/*
** EPITECH PROJECT, 2019
** map.h
** File description:
** Header of the map. Thanks to the map, you don't fall into the abyss.
*/

#ifndef MAP_H_
#define MAP_H_

typedef struct s_map {
    char *map;
    int player_pos;
    int line_len;
    int len;
} map_t;

char *read_map(char **, map_t *);
map_t *init_map(char **);
int get_position_on_map(char, char *);
int get_len_line(char *);

#endif /* MAP_H_ */

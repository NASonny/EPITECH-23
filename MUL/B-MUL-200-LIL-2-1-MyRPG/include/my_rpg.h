/*
** EPITECH PROJECT, 2023
** MY PAINT PROJECT
** File description:
** my_paint header
*/

#pragma once

#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080
#define FRAME_WIDTH 1920
#define FRAME_HEIGHT 1080
#define NUM_FRAMES 8
#define NUM_BACKBUTTON 5
#define NUM_HELPBUTTON 5
#define FRAME_DELAY 0.09 // in seconds
#define FRAME_BUTTON 0.1 // in seconds
#define FRAME_HBUTTON 0.1  // in seconds

/* FOR THE DISPLACEMENT */
#define SPEED 10.f
#define POS rpg->pers->pos
/*----------------------*/

/* SIZE OF A TILES SQUARE */
#define SIZE 32
/*------------------------*/

/* FOR COOLDOWN */
#define COOLDOWN_ATK rpg->pers->cooldown_atk
/*--------------*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include <SFML/System/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Config.h>
#include <SFML/Graphics/Transform.h>

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

#ifndef MY_RPG_H
    #define MY_RPG_H

    typedef struct inventory_s {
        sfTexture* inventory;
        sfSprite* sprite_inventory;
        sfText* sword;
        sfText* inventory_title;
        sfClock* clock;
        sfTime time;
        sfFont* font;
        float seconds;
        int potion_nb;
        int open;
    } inventory_t;

    typedef struct dialogue_s {
        sfText *bubble;
        sfSprite *sprite;
        sfTexture *texture;
    } dialogue_t;

    typedef struct menu_s {
        sfRenderWindow *window;
        sfVideoMode mode;
        sfVector2i pos;
        sfFont *font;
        sfSprite* sprite;
        sfVector2f position;
        sfClock* clock;
        sfTexture* frames[NUM_FRAMES];
        float elapsed_time;
        sfText *title;
        sfText *play;
        sfText *settings;
        sfEvent event;
        sfText *quit;
        sfMusic *music;
        sfText *text_volume;
        sfText *text_fullscreen;
        sfText *text_resolution;
        sfText *text_settings;
        sfText *text_volume_value;
        sfText *text_resolution_value;
        sfText *text_fullscreen_value;
        sfText *text_resolution_1920x1080;
        sfText *text_resolution_1600x900;
        sfSprite *sprite_button_help;
        sfTexture* frame[NUM_HELPBUTTON];
        sfTexture *button_help;
        sfClock* clock_h;
        sfTexture *button_yes;
        sfSprite *sprite_button_yes;
        sfTexture *button_no;
        sfSprite *sprite_button_no;
        float elapsed_time_h;
        sfTexture *volumeoff_button;
        sfSprite *sprite_volumeoff_button;
        sfTexture *volumeon_button;
        sfSprite *sprite_volumeon_button;
        sfTexture *volumeup_button;
        sfSprite *sprite_volumeup_button;
        sfTexture *volumedown_button;
        sfSprite *sprite_volumedown_button;
        int volume;
        int fullscreen;
    } menu_t;

    typedef struct back_button_s {
        sfTexture* frames[NUM_BACKBUTTON];
        sfTexture *button_back;
        sfSprite *sprite;
        sfVector2f pos;
        sfVector2f scale;
        sfClock* clock;
        float elapsed_time;
    } back_button_t;

    typedef struct music_s {
        sfMusic *music;
        int volume;
    }   music_t;

    typedef struct sound_s {
        sfSound *sound;
        sfSoundBuffer *buffer;
    }   sound_t;

    typedef struct hitbox_s {
        sfRectangleShape *hitbox;
        sfVector2f pos;
}   hitbox_t;

    typedef struct collide_s {
        hitbox_t *hitbox;
        struct collide_s *next_box;
    } collide_t;

    typedef struct sprite_s {
        sfTexture *text;
        sfSprite *sprite;
        sfVector2f pos;
        sfVector2f scale;
        sfRectangleShape *hitbox;
        sfIntRect int_r;
        sfClock *clock;
        sfTime time;
        float seconds;
        int frame_number;
        struct echo_s *next;
    }   sprite_t;

    typedef struct mouse_s {
        float x;
        float y;
        sfVector2f center;
    }   mouse_t;

    typedef struct button_s {
        sfTexture *text;
        sfSprite *sprite;
        sfRectangleShape *rect;
        sfIntRect int_r;
        sfVector2f pos;
        sfVector2f size;
        sfColor color;
    }   button_t;

    typedef struct map_s {
        sfTexture *text;
        sfImage *img;
        int size;
    }  map_t;

    typedef struct card_s {
        sfText *pm;
        sfText *pv;
        sfText *atk;
        sfText *xp;
        sfText *lvl;
        sfText *gold;
        sfText *skill_point;
        sfFont *font;
        int max_pv;
        int max_pm;
        int max_atk;
        int next_lvl;
        button_t *in_atk;
        button_t *in_pv;
        button_t *in_pm;
    } card_t;

    typedef struct cooldown_s {
        sfText *cooldown;
        sfClock *cooldow_atk;
        sfTime time;
        float seconds;
    } cooldown_t;

    typedef struct player_s {
        sfTexture *text;
        sfSprite *sprite;
        sfTexture *fiche_perso;
        sfSprite *fiche;
        sfVector2f pos;
        sfVector2f scale;
        sfRectangleShape *hitbox;
        sfIntRect int_r;
        int pv;
        int strength;
        int mana;
        int speed;
        int level;
        int xp;
        int gold;
        int skill_point;
        sfClock *clock;
        sfTime time;
        cooldown_t *cooldown_atk;
        sfTime time_atk;
        float sec_cooldown;
        float seconds;
        int frame_number;
        inventory_t inventory;
        card_t *card;
    } player_t;

    typedef struct echo_s {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f pos;
        sfVector2f scale;
        sfClock *clock;
        sfTime time;
        sfIntRect rect;
        sfIntRect int_r;
        sfRectangleShape *hitbox;
        sfText *health;
        sfFont *health_font;
        char *status;
        float seconds;
        int frame_number;
        struct echo_s *next;
        int pv;
        int pa;
        int draw_fight;
        int last_pv;
        int strength;
    }   echo_t;

    typedef struct boutique_s {
        sfTexture *boutique;
        sfSprite *sprite_boutique;
        sfVector2f pos;
        sfVector2f scale;
        sfClock* clock;
        sfTime time;
        sfFont* font;
        float seconds;
        int potion_nb;
        int open;
    } boutique_t;

    typedef struct myrpg_s {
        sprite_t *background;
        sprite_t *background_iso;
        sprite_t* interact_forest;
        sprite_t *fight;
        sprite_t *help;
        player_t *pers;
        sprite_t *pnj;
        music_t *music;
        collide_t *collide;
        dialogue_t *dialogue;
        sound_t *sound;
        menu_t *menu;
        back_button_t *back_button;
        map_t *map;
        echo_t *echo;
        echo_t *f_mob;
        inventory_t *inventory;
        boutique_t *boutique;
        sfEvent event;
        mouse_t mouse;
        sfRenderWindow *window;
        sfView *view;
        sfVideoMode mode;
        int last_win;
        float speed;
        int which_win;
        int frame_number;
        sfText *text;
        int draw;
    }   myrpg_t;

/* WINDOW PART */
int main_loop(sfRenderWindow *window, sfEvent event, myrpg_t *game);
void main_window(sfRenderWindow *window, sfEvent event, myrpg_t *game);
sfRenderWindow *create_w(unsigned int x, unsigned int y,
myrpg_t* rpg, char *title);
sfRenderWindow *create_w_f(unsigned int x, unsigned int y,
myrpg_t* rpg, char *title);
void draw_all(sfRenderWindow *window, myrpg_t *rpg);
void set_sfview(sfRenderWindow* window, myrpg_t *rpg);
void rend_window(sfRenderWindow *window, myrpg_t *rpg, sfEvent event);
void other_window(myrpg_t *rpg, sfEvent event);
/*-------------*/

/* {MAIN + FREE} PART*/
int main(int argc, char **argv);
void free_area(myrpg_t *paint);
/*-------------------*/

/* INIT PART */
myrpg_t *init(myrpg_t *paint);
void init_function(myrpg_t *paint);
myrpg_t *init_character(myrpg_t *rpg);
void sf_sprite_pattern(sfSprite *sprite, sfTexture *text, sfVector2f pos,
sfVector2f scale);
void sf_rectangle_shape_pattern(sfRectangleShape *hitbox, sfVector2f pos,
sfVector2f size);
myrpg_t* init_background(myrpg_t *rpg);
myrpg_t *init_pnj(myrpg_t *rpg);
myrpg_t* init_background(myrpg_t *rpg);
void set_icon(myrpg_t *rpg);
/*-----------*/

/* EVENT PART */
void event_part(sfRenderWindow *window, sfEvent event, myrpg_t *rpg);
void event_one(myrpg_t* rpg, sfIntRect rect_);
void event_two(myrpg_t* rpg, sfIntRect rect_);
void event_three(myrpg_t* rpg, sfIntRect rect_);
void event_four(myrpg_t* rpg, sfIntRect rect_);
void event_keypressed_displacement(myrpg_t* rpg);
void event_keypressed_error(myrpg_t* rpg);
void event_esc(sfRenderWindow *window, sfEvent event, myrpg_t *rpg);
void event_z_q_s_d(myrpg_t* rpg);
void event_one_xy(myrpg_t* rpg, sfIntRect rect_);
void event_two_xy(myrpg_t* rpg, sfIntRect rect_);
void event_three_xy(myrpg_t* rpg, sfIntRect rect_);
void event_four_xy(myrpg_t* rpg, sfIntRect rect_);
/*------------*/

/* MOVE PART */
void move_loop_x(myrpg_t *rpg, int choice, float speed);
void move_loop_y(myrpg_t *rpg, int choice, float speed);
void inside_loop_y (myrpg_t *rpg, int choice);
void inside_loop_x(myrpg_t *rpg, int choice);
void delete_and_modify_pers_plus_move(myrpg_t* rpg, sfIntRect rect);
void move_view(myrpg_t* rpg);
void view_displacement(myrpg_t* rpg, int x, int y);
void part2(myrpg_t* rpg);
void animation_pers(myrpg_t* rpg, sfIntRect rect_);
void move_loop_xy_minus(myrpg_t* rpg, int choice, float speed);
void move_loop_xy_plus(myrpg_t* rpg, int choice, float speed);
/*-----------*/

/* MAIN MENU */
void create_background(myrpg_t *rpg);
void animate_background(myrpg_t *rpg);
void create_title(myrpg_t *rpg);
void create_play(myrpg_t *rpg);
void create_settings(myrpg_t *rpg);
void create_quit(myrpg_t *rpg);
void create_texts(myrpg_t *rpg);
void destroy_menu(myrpg_t *rpg);
void check_button_play(myrpg_t *rpg, sfEvent event);
void check_button_settings(myrpg_t *rpg, sfEvent event);
void check_button_quit(myrpg_t *rpg, sfEvent event);
void check_mouse(myrpg_t *rpg, sfEvent event);
void event_handler(myrpg_t *rpg, sfEvent event);
void create_help_button(myrpg_t *rpg);
void drawing_text(myrpg_t *rpg);
void drawing_sprite(myrpg_t *rpg);
void main_menu(myrpg_t *rpg);
void rend_texts(myrpg_t *rpg);
void view_gestion(myrpg_t* rpg);
void view_gestion_return(myrpg_t* rpg, int x, int y);
/*-----------*/

/* SETTINGS MENU */
void settings_window(myrpg_t *rpg, sfEvent event);
void create_text_settings(myrpg_t *rpg);
void create_text_volume(myrpg_t *rpg);
void create_button_back(myrpg_t *rpg);
void touch_back_button(myrpg_t *rpg, sfEvent event);
void animate_backbutton (myrpg_t *rpg);
void create_text_resolution(myrpg_t *rpg);
void create_text_fullscreen(myrpg_t *rpg);
void window_isopen(myrpg_t *rpg);
void menu_settings(myrpg_t *rpg);
void destroy_settings_menu(myrpg_t *rpg);
void create_text_resolution_1920x1080(myrpg_t *rpg);
void create_text_resolution_1600x900(myrpg_t *rpg);
void create_button_yes(myrpg_t *rpg);
void create_button_no(myrpg_t *rpg);
void create_volumeon_button(myrpg_t *rpg);
void create_volumeoff_button(myrpg_t *rpg);
void create_volume_up_button(myrpg_t *rpg);
void create_volume_down_button(myrpg_t *rpg);
void draw_settings_menu(myrpg_t *rpg);
sfVector2f set_pos_text_settings(myrpg_t *rpg, int x, int y);
void volume_click(myrpg_t *rpg);
void quit_click(myrpg_t *rpg);
/*--------------*/

/* MAP PART */
int check_collide(myrpg_t *rpg, int x, int y);
void init_img_collider(myrpg_t *rpg);
void init_pattern(myrpg_t *rpg);
void init_background_iso(myrpg_t *rpg);
/*---------*/

/* LIB */
int my_str_isnum(char const *str);
char **my_strtoword_array(char const *str, char delim_char);
char **my_strtoword_array_line(char const *str, char delim_char);
int my_strlen(char const *str);
int my_getnbr(char const *str, char delim);
char *int_to_str(int num);
char *my_strconcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
int len_int(int nb);
/*-----*/

/* ECHO PART */
void create_mob(myrpg_t *rpg);
void create_mob_suite(myrpg_t* rpg);
void display_mob(myrpg_t *rpg);
sfVector2f rand_pos(void);
void moov_mob(myrpg_t* rpg);
void animate_mob(myrpg_t *rpg);
void echo_keyboard_event(myrpg_t *rpg);
void event_echo(myrpg_t *rpg);
void init_fight(myrpg_t *rpg);
void decrease_pv(myrpg_t *rpg);
void pv_decreaser(myrpg_t* rpg);
/*-----------*/

/* RECT PART */
sfIntRect set_rect(sfRectangleShape *RectangleShape);
void event_pnj_pers(myrpg_t *rpg);
/*-----------*/

/* CARD */
void init_card(myrpg_t *rpg);
void display_card(myrpg_t *rpg);
void set_text(myrpg_t *rpg);
void set_string(myrpg_t *rpg);
void display_button(myrpg_t *rpg);
void set_button(myrpg_t *rpg);
void event_click_button(myrpg_t *rpg, sfEvent event);
/*------*/

/* SOUND */
void set_sound(myrpg_t *rpg);
/*-------*/

/* TEXT PART */
sfText* create_text_min(myrpg_t* rpg, sfText* text, char* str, sfVector2f pos);
sfText* create_text_max(myrpg_t* rpg, sfText* text, char* str, sfVector2f pos);
void display_bubble(myrpg_t* rpg, sfVector2f scale);
/*-----------*/

/* INTERACTION PART */
void e_interaction(myrpg_t* rpg);
void e_interaction_2(myrpg_t* rpg);
void e_interaction_3(myrpg_t* rpg);
/*------------------*/

/* FOREST PART */
void create_interact_forest(myrpg_t *rpg);
void event_forest(myrpg_t *rpg);
/*------------*/

/* INVENTORY PART */
void create_inventory(myrpg_t *rpg);
void event_open_inventory(myrpg_t *rpg);
void event_inventory(myrpg_t *rpg);
void display_inventory(myrpg_t *rpg);
/*------------------*/

/* HELP MENU */
void check_button_help(myrpg_t *rpg, sfEvent event);
void display_help(myrpg_t *rpg);
void create_help_menu(myrpg_t *rpg);
/*-----------*/

/* BOUTIQUE */
void create_boutique(myrpg_t *rpg);
void display_boutique(myrpg_t *rpg);
void event_boutique(myrpg_t *rpg);
void sell_boutique(myrpg_t *rpg, sfEvent event);
int check_money(myrpg_t *rpg, int price);
/*----------*/

#endif /* MY_RPG_H */

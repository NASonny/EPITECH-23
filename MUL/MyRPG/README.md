# Documentation pour le MyRpg project !

MyRpg-EDERIA est un rpg conçu et créé par 4 étudiants et une dessinatrice !

## Lancer le projet

Pour former le projet, il suffit de faire la commande suivante : `make re` :
```sh
make re
```

Pour le lancer, il suffit de faire `./myrpg`

```sh
./myrpg
```

## Explication du code

Tout est géré par la structure `myrpg_t`:

```c
typedef struct myrpg_s {
    sprite_t *sprite;
    sprite_t pers;
    music_t music;
    sfEvent event;
    mouse_t mouse;
    sfRenderWindow *window;
    int speed;
}   myrpg_t;
```

Elle contient donc deux structures sprite_t, une pour le background et un autre pour le personna principal, elle se constitue de la sorte :

```c
typedef struct sprite_s {
    sfTexture *text;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f scale;
    sfRectangleShape *hitbox;
}   sprite_t;
```

Cette dernière contient une texture, un `sfSprite`, une variable position, une autre concernant l'échelle et enfin un `sfRectangleShape` pour la hitbox et/ou area

La structure myrpg_t contient également une structure `music_t` qui pour le moment ne contient qu'une variable `sfMusic` :

```c
typedef struct music_s {
    sfMusic *music;
}   music_t;
```

Elle contient une variable `event`, qui, je suppose n'est pas utile de commenter, idem pour la variable `speed`, une variable `window`, qui est donc initialisé au début du programme !

Enfin la dernière structure qu'elle contient, c'est `music_t`, qui contient que les variables de base :

```c
typedef struct mouse_s {
    float x;
    float y;
    sfVector2f center;
}   mouse_t;
```

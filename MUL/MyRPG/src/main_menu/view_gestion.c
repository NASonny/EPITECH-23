/*
** EPITECH PROJECT, 2023
** view gestion
** File description:
** X black bord X
*/
/*
** EPITECH PROJECT, 2023
** view displacement management
** File description:
** move the sfview
*/

#include "my_rpg.h"

void view_gestion_return(myrpg_t* rpg, int x, int y)
{
    sfView_setCenter(rpg->view, (sfVector2f){x, y});
    return;
}

void suite(myrpg_t* rpg)
{
    if (POS.x > 1818)
        return view_gestion_return(rpg, 1818, POS.y);
    if (POS.y > 803)
        return view_gestion_return(rpg, POS.x, 803);
    if (POS.y < 226)
        return view_gestion_return(rpg, POS.x, 226);
    else
        return view_gestion_return(rpg, POS.x, POS.y);
}

void view_gestion(myrpg_t* rpg)
{
    if (POS.x < 402 && POS.y > 226 && POS.y < 803)
        return view_gestion_return(rpg, 402, POS.y);
    if (POS.x > 1818 && POS.y > 226 && POS.y < 803)
        return view_gestion_return(rpg, 1818, POS.y);
    if (POS.x > 1818 && POS.y < 226)
        return view_gestion_return(rpg, 1818, 226);
    if (POS.x < 402 && POS.y < 226)
        return view_gestion_return(rpg, 402, 226);
    if (POS.y > 803 && POS.x > 1818)
        return view_gestion_return(rpg, 1818, 803);
    if (POS.y > 226 && POS.y < 803)
        return view_gestion_return(rpg, POS.x, POS.y);
    if (POS.y > 803 && POS.x < 402)
        return view_gestion_return(rpg, 402, 803);
    suite(rpg);
}

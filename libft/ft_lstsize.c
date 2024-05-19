#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     i;
    t_list *move;

    move = lst;
    i = 0;
    while (move)
    {
        i++;
        move = move->next;
    }
}
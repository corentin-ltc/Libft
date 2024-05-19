#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
        t_list *move;

        move = lst;
        while (move->next)
                move = move->next;
        return (move);

}
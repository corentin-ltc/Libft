#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
        t_list  *tmp;

        tmp = *lst;

        if(!lst || !del)
                return (NULL);
        while (tmp)
        {
                tmp = (*lst)->next;
                del((*lst)->content);
                free(*lst);
                *lst = tmp;
        }
}
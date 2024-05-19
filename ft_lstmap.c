#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        t_list  *newlst;
        t_list  *tmp;

        newlst = ft_lstnew(f(lst->content));
        if (!newlst)
                return (NULL);
        tmp = newlst;
        while(lst)
        {
                tmp->next = ft_lstnew(f(lst->content));
                if (!(tmp->next))
                {
                        ft_lstclear(&newlst, del);
                        return (NULL);
                }
                lst = lst->next;
                tmp = tmp->next;
        }
        tmp->next = NULL;
        return(newlst);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coco <A CHANGER 42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 01:20:30 by coco              #+#    #+#             */
/*   Updated: 2024/05/19 01:20:30 by coco             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *list;

    list->content = malloc(sizeof(t_list));
    if (!(list->content))
        return (NULL);
    list->content = content;
    list->next = NULL;
    return(list->content);
}
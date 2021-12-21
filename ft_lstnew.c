/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:15:32 by mpons             #+#    #+#             */
/*   Updated: 2021/12/21 18:05:17 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*block;

	block = malloc(sizeof(block));
	if (!block)
		return (NULL);
	block->content = content;
	block->next = NULL;
	return (block);
}
/*
int	main(void)
{
	t_list elem1;
	t_list *debut;

	debut = &elem1;
	elem1 = *ft_lstnew("hola manola");
	printf("valeur du 1er element = %s\n", debut->content); 
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:31:26 by mpons             #+#    #+#             */
/*   Updated: 2021/12/18 16:15:29 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	size_t	len_d;
	int		len_s;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (dstsize <= len_d)
		return (len_s + dstsize);
	i = len_d;
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (len_s + len_d);
}	
/*
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  a;
    size_t  d;

    a = 0;
    d = ft_strlen(dst);
    while ((int)dstsize > ft_strlen(dst) + 1 && src[a] != 0)
    {
        dst[a + d] = src[a];
        a++;
    }
    dst[a + d] = 0;
    if (d > dstsize)
        return(dstsize + ft_strlen(src));
    else
        return(d + ft_strlen(src));
}
*/
//dstsize no tiene que ser mas largo que la taille de dest
//dstsize es el espacio en memoria(buffer) que hay en dst char buffer[50];
//dst size = 50
//
//dstsize tiene que ser > que strlen(dst) porque sino no hay espacio 
//para agregar source, y sobreescribira dst
//la funcion copia desde src con un max de dstsize-1 para poner el 0 al final
//por eso strlcat return la taille de src + dstsize si dstsize <= strlen(dest)
//
//el man esta mal? nose en todo caso no es claro
//
//RETURN
// For strlcat() that means the initial length of dst plus the length of src.
//
// If the return value is >= dstsize, the output string has been truncated.
//  It is the caller's responsibility to handle this. ??? faux

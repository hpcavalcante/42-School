/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:14:18 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/12 22:51:14 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *cdest;
    const unsigned char *csrc;

    cdest = (unsigned char *) dest;
    csrc = (const unsigned char *) src;

    if (cdest > csrc)
    {
        while (n--)
        {
            cdest[n] = csrc[n];
        }
    }
    else
    {
        ft_memcpy(cdest,csrc,n);
    }
    return ((void *)cdest);
}

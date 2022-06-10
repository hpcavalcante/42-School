/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hpcavalcante@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:24:42 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/10 15:50:12 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *cdest;
    const char *csrc;

    cdest = (char *) dest;
    csrc = (const char *) src;
    
    while (n > 0)
    {
        *cdest = *csrc;
        cdest++;
        csrc++;
        n--;
    }
    return (dest);
}

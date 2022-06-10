/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hpcavalcante@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:17:15 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/10 14:21:21 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    unsigned char *p = str;
    
    while(n > 0)
    {
        *p = c;
        p++;
        n--;
    }
    return(str);
}

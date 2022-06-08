/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hpcavalcante@student.42sp.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:23:30 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/02 13:56:10 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    unsigned    char *s;
    unsigned    char i;

    i = (unsigned char) c;
    s = (unsigned char *)str;
    while (*s != i && *s != '\0')
    {
        s++;
    }
    if (*s == i)
    {
        return ((char *)s);
    }
    return (0);
}

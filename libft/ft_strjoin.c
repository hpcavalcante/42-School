/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:05:02 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/15 13:27:49 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    size_t  s1_size;
    size_t  s2_size;
    size_t  total_size;
    size_t  i;
    
    s1_size = ft_strlen(s1);
    s2_size = ft_strlen(s2);
    total_size = s1_size + s2_size;
    dest = (char *)malloc(sizeof(char) * (total_size + 1));
    i = 0;
    if (s1 == 0 || s2 == 0)
        return (NULL);
    if (dest == 0)
        return (NULL);
    while (i < s1_size)
    {
        dest[i] = s1[i];
        i++;
    }
    while (i < total_size)
    {
      dest[i] = *s2;
      s2++;
      i++;
    }
    dest[i] = '\0';
    return (dest);
}
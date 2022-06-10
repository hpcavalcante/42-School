/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hpcavalcante@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:14:18 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/10 15:16:29 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// void *ft_memmove(void *dest, const void *src, size_t n)
// {

// }

#include <stdio.h>
#include <string.h>
  
int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz"; // Array of size 5
  
    puts("str1 before memmove ");
    puts(str1);
  
    /* Copies contents of str2 to sr1 */
    memmove(str1, str2, sizeof(str2));
  
    puts("\nstr1 after memmove ");
    puts(str1);
  
    return 0;
}
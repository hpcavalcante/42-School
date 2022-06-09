/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hpcavalcante@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 04:28:01 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/09 16:45:26 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *str, size_t n)
{
	while (n-- > 0)
		*(unsigned char *)str++ = 0;
}


int main( void )
  {
    char buffer[80] = "They dont make time for me but is ok";

    ft_bzero(buffer, 5 );
    return EXIT_SUCCESS;
  }
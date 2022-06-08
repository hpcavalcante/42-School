/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 04:28:01 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/07 04:49:43 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *str, size_t n)
{
	while (n-- > 0)
		*(unsigned char *)str++ = 0;
}

#include <stdlib.h>
#include <string.h>

int main( void )
  {
    char buffer[80] = "They dont make time for me but is ok";

    ft_bzero(buffer, 80 );
    return EXIT_SUCCESS;
  }
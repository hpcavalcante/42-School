/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:19:14 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 20:54:57 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Retorna uma string a um determinado file descriptor */
void	ft_putstr_fd(char *s, int fd)
{	
	int	count_size;

	count_size = 0;
	while (s[count_size] != '\0')
	{
		write (fd, &s[count_size], 1);
		count_size++;
	}
}

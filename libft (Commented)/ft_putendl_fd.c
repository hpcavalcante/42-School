/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:20:29 by hepiment          #+#    #+#             */
/*   Updated: 2022/06/19 20:55:25 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Retorna uma string a um determinado file descriptor seguido de uma newline*/
void	ft_putendl_fd(char *s, int fd)
{	
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

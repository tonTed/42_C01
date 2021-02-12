/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:07:46 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/12 11:14:44 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	ft_putchar(str[0]);
	i = 1;
	while (i != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	ft_putstr("Ecole 42");
	return 0;
}

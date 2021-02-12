/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 08:43:31 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/12 10:53:02 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	printf("div = %d & mod = %d\n", div, mod);
	ft_div_mod(42, 10, &div, &mod);
	printf("div = %d & mod = %d\n", div, mod);
}

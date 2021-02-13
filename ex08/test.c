/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:45:56 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/13 18:36:56 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}




void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i++ < size)
	{
		if (!(tab[size - 2] < tab[size - 1] && i >= size - 1))
		{
			i--;
			if (tab[i] <= tab[i + 1])
				i++;
			else
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
			}
		}
	}
}

int main()
{
    int tab[10];
    int i;

	tab[0] = 1532165456;
	tab[1] = 15;
	tab[2] = 95;
	tab[3] = -1;
	tab[4] = -5000;
	tab[5] = 0;
	tab[6] = 4168;
	tab[7] = 856;
	tab[8] = 56;
	tab[9] = -55885454;

    i = 1;
    while(i < sizeof(tab)/4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    printf("++++++++++++++++++\n");
	ft_sort_int_tab(tab, sizeof(tab)/4);
    
    i = 0;
    while(i < sizeof(tab)/4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    return 0;
}

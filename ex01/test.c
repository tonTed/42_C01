/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 08:29:07 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/12 08:34:43 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    printf("%d\n", *********nbr);
    *********nbr = 42;
    printf("%d\n", *********nbr);

}

int main()
{
    int numb;
    int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;


    ptr = &numb;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
    numb = 12;
    ft_ultimate_ft(ptr9);
    printf("%d\n", numb);
}
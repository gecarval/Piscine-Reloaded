/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:40:21 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/07 12:01:22 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*a;
	int	*b;

	a = (int *)malloc(sizeof(int));
	b = (int *)malloc(sizeof(int));
	*a = 97;
	*b = 98;
	ft_putstr("Hello World!");
	ft_putchar('\n');
	printf("len = %d\n", ft_strlen("Hello"));
	printf("cmp = %d\n", ft_strcmp("Hello", "HellO"));
	ft_swap(a, b);
	printf("swap= %d %d\n", a[0], b[0]);
	return (0);
}

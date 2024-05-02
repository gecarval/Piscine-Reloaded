/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:10:58 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/02 17:25:13 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 16)
		return (0);
	else
	{
		while (--nb < 0)
			res *= nb;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}

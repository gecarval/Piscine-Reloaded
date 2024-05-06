/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:10:58 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/06 15:33:51 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 16)
		return (0);
	while (--nb >= 0)
		res *= (nb + 1);
	return (res);
}

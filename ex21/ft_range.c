/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:12:09 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/06 09:50:07 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * (max - min));
	if (!res)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

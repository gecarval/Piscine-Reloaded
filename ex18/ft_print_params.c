/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:40:09 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/10 11:38:04 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (a < ac)
	{
		while (av[a][b])
		{
			ft_putchar(av[a][b]);
			b++;
		}
		ft_putchar('\n');
		b = 0;
		a++;
	}
	return (0);
}

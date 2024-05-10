/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:34:16 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/10 14:36:08 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	ch;

	fd = open(argv[1], O_RDONLY);
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	while (read(fd, &ch, 1))
		ft_putchar(ch);
	close(fd);
	return (0);
}

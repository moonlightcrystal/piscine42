/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 17:26:43 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/14 19:02:41 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/good_lib.h"

#define BUF_SIZE  
int sqsq(int argc)
{
	if(argc == 1)
	{
		ft_putstr("File name missing.\n");
		return(1);
	}
	if(argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return(1);
	}
	return(0);
}

int main(int argc, char **argv)
{

	int fd;
	int ret;
	char buf(BUF_SIZE + 1);

	if (sqsq(argc) == 1)
		return(1);
	fd = open(argv[1], O_RDONLY); //только чтение
	if (fd == -1)
	{
		ft_putstr("Open missing.\n");
        return(1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if(close(fd) == -1)
	{
		ft_putstr("Close failed.\n");
		return(1);
	}
	return(0);
}
 

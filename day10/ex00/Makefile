#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcorie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/11 20:32:43 by kcorie            #+#    #+#              #
#    Updated: 2019/03/11 22:16:15 by kcorie           ###   ########.fr        #
#                                                                              #
#******************************************************************************#
TARGET = libft.a

HEADER = ./includes/

C_FILES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

O_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(TARGET)

$(TARGET):
	gcc -c -Wall -Wextra -Werror $(C_FILES) -I $(HEADER)
	ar rc $(TARGET) $(O_FILES)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean 
	/bin/rm -f $(TARGET) 

re: fclean all


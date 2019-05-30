# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adollie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 11:41:18 by adollie           #+#    #+#              #
#    Updated: 2019/05/28 08:46:22 by adollie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_strlen.c ft_strcpy.c ft_strcmp.c ft_strdup.c ft_strncpy.c ft_strncmp.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_atoi.c ft_bzero.c ft_memalloc.c ft_memdel.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_putchar.c
OFILES = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_strdup.o ft_strncpy.o ft_strncmp.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_atoi.o ft_bzero.o ft_memalloc.o ft_memdel.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_putchar_fd.o ft_memcpy.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_putchar.o

$(NAME):
		gcc -c -Wall -Wextra -Werror $(CFILES)
		ar rcs $(NAME) $(OFILES)
		ranlib $(NAME)

all: $(NAME)

clean:
		rm -fr $(OFILES)

fclean: clean
		rm -fr *.a
		rm -rf a.out

re: fclean all

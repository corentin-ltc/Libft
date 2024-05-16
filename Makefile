SRC = ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_strnstr.c ft_atoi.c ft_memcmp.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_tolower.c

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.c=.o}

%.o : %.c
	cc ${FLAGS} -c $< -o $@ 

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS} ${NAME}

all: ${NAME}

clean: 	
	rm -f ${OBJS}  

fclean: clean 
		rm -f ${NAME}
re: fclean all

.PHONY: re clean all fclean 
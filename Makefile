NAME =  libft.a

SRCS =  ft_memset.c     \
        ft_bzero.c      \
        ft_memcpy.c     \
        ft_memccpy.c    \
        ft_memmove.c    \
        ft_memchr.c     \
        ft_memcmp.c     \
        ft_strlen.c     \
        ft_strdup.c     \
        ft_strcpy.c     \
        ft_strncpy.c    \
        ft_strcat.c     \
        ft_strncat.c    \
        ft_strlcat.c    \
        ft_strchr.c     \
        ft_strrchr.c    \
        ft_strstr.c     \
        ft_strnstr.c    \
        ft_strcmp.c     \
        ft_strncmp.c    \
        ft_atoi.c       \
        ft_isalpha.c    \
        ft_isdigit.c    \
        ft_isalnum.c    \
        ft_isascii.c    \
        ft_isprint.c    \
        ft_toupper.c    \
        ft_tolower.c    \

OBJS =  $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc  $(FLAGS) -o $(NAME) $(SRCS) -I.

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

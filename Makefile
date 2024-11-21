NAME = libft.a

SRC = ft_bzero.c ft_calloc.c ft_isalnum.c  ft_isalpha.c ft_isascii.c\
 ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
 ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
 ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strjoin.c \
 ft_strlen.c  ft_tolower.c ft_toupper.c ft_strlcat.c ft_strdup.c \
 ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_split.c \
 ft_atoi.c ft_strnstr.c ft_substr.c  ft_strmapi.c ft_strtrim.c ft_striteri.c

CFLAGS = -Wall -Werror -Wextra

SRC_BON = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_BON = $(SRC_BON:.c=.o)

CC = cc

HDR = libft.h 

all: $(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $?


bonus: $(OBJ_BON) 
	ar rcs $(NAME) $?
	touch bonus

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJ) $(OBJ_BON)
	rm -rf bonus
fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:re clean fclean 

#	Compilation
CC				=	cc
CFLAGS			=	-Wall -Werror -Wextra -g
MAKE			=	make

#	Shell
REMOVE			=	rm -f

#	Directories
DIR_LIBFT		=	libft

#	Files
FILES_SOURCE	=	\
					ft_invoke_best.c \
					ft_solve.c \
					ft_stack_clear.c \
					ft_stack_count.c \
					ft_stack_del.c \
					ft_stack_detach.c \
					ft_stack_new.c \
					ft_stack_parse.c \
					ft_stack_popback.c \
					ft_stack_popfront.c \
					ft_stack_print.c \
					ft_stack_printint.c \
					ft_stack_printstr.c \
					ft_stack_push_all.c \
					ft_stack_push.c \
					ft_stack_pushfront.c \
					ft_stack_pushback.c \
					ft_stack_rotate.c \
					ft_stack_rrotate.c \
					ft_stack_swap.c \
					ft_strtoi.c \
					ft_validate.c \
					push_swap.c
FILES_OBJECT	=	$(FILES_SOURCE:.c=.o)
FILE_LIBFT		=	$(DIR_LIBFT)/libft.a

#	Names
NAME			=	push_swap

#	Targets
all:	$(NAME)

clean:
	$(REMOVE) $(FILES_OBJECT)
	$(MAKE) -C $(DIR_LIBFT) clean

fclean:	clean
	$(REMOVE) $(NAME)
	$(MAKE) -C $(DIR_LIBFT) fclean

re:	fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^ -I $(DIR_LIBFT)

$(NAME):	$(FILES_OBJECT) $(FILE_LIBFT)
	$(CC) $(CFLAGS) -o $@ $^

$(FILE_LIBFT):
	$(MAKE) -C $(DIR_LIBFT) bonus

.PHONY:	all clean fclean re %.o
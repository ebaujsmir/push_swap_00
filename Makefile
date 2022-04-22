# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 10:30:04 by esmirnov          #+#    #+#              #
#    Updated: 2022/01/13 16:28:11 by esmirnov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# executable file name
NAME = push_swap

# sources files
SRCS	= push_swap.c\
			ft_print_error.c\
			errors_check.c\
			ft_atoi.c\
			ft_argv_to_stack.c\
			ft_newnode.c\
			ft_nodeadd_back.c\
			ft_nodeadd_front.c\
			ft_popnode_front.c\
			stack_swap.c\
			stack_rotate.c\
			stack_reverse_rotate.c\
			stacks_rr_rotate.c\
			stacks_rrr_rotate.c\
			stack_push.c\
			stack_sort.c\
			stack_sort_ok.c\
			stack_limits_pos.c\
			stack_min_max.c\
			stack_initialisation.c\
			stack_index.c\
			stack_median.c\
			stack_a_push_to_b.c\
			can_i_push.c\
			stack_node_temp_position.c\
			is_new_minmax.c\
			check_id_min_max.c\
			moves_init.c\
			moves_to_do.c\
			sum_i_j.c\
			moves_update.c\
			stacks_moves.c\
			stack_free.c

# list ".o" files
OBJS	= $(SRCS:.c=.o)

# flags
CFLAGS	= -Wall -Werror -Wextra -g3

# compiler
CC	= gcc

# deleting files
# rm - remove files or directories
# -r, -R --recursive remove directories and thier contents reursively
# -f ignore nonexistent files, never prompt
RM	= rm -rf

# ar s == ranlib 
# c == create - means create the library if it did not exist.
# r == replace - means that if the library already exists, replace the old files
#		within the library with the new files.
# s == sort - can be seen to mean 'sort' (create a sorted index of) the library,
#	so that it will be indexed and faster to access the functions in the library.
#LINKER	= ar rcs

#Rules
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) -o $(NAME) $(OBJS) 
#-fsanitize=address

#delete .o files	
clean:
#	$(RM) objs/
	$(RM) $(OBJS)
	
# f(force) clean to delete the binary
fclean: 	clean
	$(RM) $(NAME)

# delete all and recompile all
re:	fclean all

.PHONY:	all clean fclean re
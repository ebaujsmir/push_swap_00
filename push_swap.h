/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:03:12 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/20 17:04:35 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# ifndef INT_MAX
#  define INT_MAX 2148483647
# endif 

/* - lists declaration ----------------------------------------------------- */
typedef struct s_moves
{
	int	moves_sum;
	int	i;
	int	j;
}				t_moves;
typedef struct s_stack_node
{
	int					value;
	int					index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}				t_stack_node;	
typedef struct s_stack
{
	int				size;
	int				id_max;
	int				id_min;
	t_stack_node	*head;
}				t_stack;

/* - argv - errors check fonctions ------------------------------------------ */
int				ft_check_digit(char **argv);
int				ft_check_double(char **argv);
int				ft_check_argv_sorted(char **argv);
int				ft_check_argv_min_max(char **argv);
int				ft_check_arg(int argc, char **argv);

/* - support fonctions ------------------------------------------------------ */
long int		ft_atoi(const char *str);
void			ft_print_error(void);
int				stack_sort_ok(t_stack *stack);
t_stack			*ft_argv_to_stack(char **argv, t_stack	*stack);

/* - stack support fonctions ------------------------------------------------ */
t_stack			*stack_initialisation(void);
t_stack_node	*ft_newnode(int content);
t_stack_node	*ft_popnode_front(t_stack *stack);
void			ft_nodeadd_front(t_stack *stack, t_stack_node *new);
void			ft_nodeadd_back(t_stack *stack, t_stack_node *new);
int				stack_min_pos(t_stack *stack);
int				stack_max_pos(t_stack *stack);
void			stack_min_max(t_stack *stack);
void			stack_index(t_stack *stack);
int				stack_median(t_stack *stack);
void			stack_a_push_to_b(t_stack *stack_a, t_stack *stack_b);
void			stack_free(t_stack *stack);
int				can_i_push(t_stack *stack_a, t_stack *stack_b, int i, int j);
t_stack_node	*stack_node_temp_position(t_stack *stack_node, int i);
int				is_new_minmax(t_stack_node *a, t_stack_node *b, t_stack *stk_a);
int				check_id_min_max(t_stack_node *tmp_a, t_stack *stack_a);
void			moves_to_do(t_stack *stack_a, t_stack *stack_b, t_moves *moves);
void			moves_swap(t_moves *tmp_moves, t_moves *moves);
t_moves			*moves_init(t_stack *stack_a, t_stack *stack_b);
t_moves			*sum_i_j(int i, int j, t_stack *stack_a, t_stack *stack_b);
void			moves_update(int i, int j, int moves_sum, t_moves *moves);
void			moves_swap(t_moves *tmp_moves, t_moves *moves);
void			stacks_moves(t_stack *stk_a, t_stack *stk_b, t_moves *moves);
void			do_one_stack_rot(t_stack *stack, int i, char c);
void			do_stacks_rot(t_stack *stk_a, t_stack *stk_b, t_moves *moves);
void			do_stacks_rev_rot(t_stack *stk_a, t_stack *stk_b, t_moves *mov);
void			do_stacks_mixarot(t_stack *stk_a, t_stack *stk_b, t_moves *mov);
void			do_stacks_mixbrot(t_stack *stk_a, t_stack *stk_b, t_moves *mov);

/* - stack sort ------------------------------------------------------------- */
void			stack_to_sort(t_stack *stack_a);
void			stack_sort_3(t_stack *stack);
void			stack_sort_4(t_stack *stack);
void			stack_sort_5(t_stack *stack_a);
void			stack_sort(t_stack *stack_a);

/* - stack operators -------------------------------------------------------- */
void			stack_swap(t_stack *stack, char c);
void			stack_rotate(t_stack *stack, char c);
void			stack_reverse_rotate(t_stack *stack, char c);
void			stack_push(t_stack *stack_1, t_stack *stack_2, char c);
void			stacks_rr_rotate(t_stack *stack_a, t_stack *stack_b);
void			stacks_rrr_rotate(t_stack *stack_a, t_stack *stack_b);

#endif


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
#include <unistd.h>
#include <sys/param.h>

//----COLORS
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define BLUE "\033[0;36m"
# define DEFAULT_COLOR "\033[0m"

//-----MESSAGES
# define ERROR "ERROR\n"
# define ERROR_AC "%s%s%s Invalid number of arguments (minimum: 2 \
/ actual: %d) \n"
# define ERROR_ISDIGIT "%s%s%s Invalid data -> you can only input digits"
# define ERROR_DUP "%s%s%s Invalid data -> you have duplicate numbers"
# define ERROR_MAX_MIN "%s%s%s Invalid data -> you numbers should be INTs \
 (check limits.h: INT_MAX and INT_MIN)"

//STRUCTURES

typedef struct s_stack
{
	long			number;
	int				index;
	int				actual_index;
	int				cost;
	struct s_stack	*next;
}	t_stack;

//MOVES
void	swap_node(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **b, t_stack **a);
void	push_node(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	rotate_node_down(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	rotate_node_up(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

//Operations
void	op_two(t_stack **a);
void	op_three(t_stack **a);
void	op_four(t_stack **a, t_stack **b);
void	op_five(t_stack **a, t_stack **b);
void	set_index_number(t_stack **stack);
void	sort_list(t_stack **stack);
void	put_index_stack(t_stack **stack, t_stack **new_stack);
int		op_min(t_stack **stack);
int		op_max(t_stack **stack);
void	radix(t_stack **a, t_stack **b);
int		get_max_bits(t_stack **a);

//Parser
int		check_digits(char **av);
int		ps_parser(int ac, char **av, t_stack **a);
int		check_duplicates(t_stack **a);
int		check_max_min(t_stack **a);
int		ps_parser_ac2(int ac, char **split);

//Utils
int		string_to_int(int ac, char **av, char **split, t_stack **a);
long	lst_size(t_stack **lst);
int		organize_data(char **av, char **split, t_stack **a);
void	lst_add_end(t_stack **list, t_stack *node);
t_stack	*create_new_node(long number);
t_stack	*last_node(t_stack **stack);
int		check_organized(t_stack **stack);
void	numbers_count(t_stack **a, t_stack **b);

//Free Utils
void	free_list(t_stack **a);
void	free_split(char **split);
void	free_stacks(t_stack **a, t_stack **b);

#endif
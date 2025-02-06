#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
typedef struct s_stack
{  
    int data;
    struct s_stack *next;

} t_s;

char	**ft_split(char const *s, char c);
int	ft_isdigit(int c);
long	ft_atoi(const char *str);
int	check_digit(char **str);
t_s *new_node(int content);
void	stack_add_back(t_s **stack, t_s *new);
void	stack_add_front(t_s **stack, t_s *new);
void    add_to_stack(t_s **stack, char **str);
void	stackclear(t_s **stack);
int check_dup(t_s *stack);
void	freestr(char **str);
void ss(t_s  **stack_a, t_s  **stack_b);
t_s	*remove_top(t_s	**stack);
void	pb(t_s	**stack_a,t_s	**stack_b);
t_s *remove_bot(t_s **stack);
void    rrb(t_s **stack_b);
void    rra(t_s **stack_a);
void	rrr(t_s	**stack_a,t_s	**stack_b);
void    rr(t_s **stack_a, t_s **stack_b);
void rb(t_s **stack_b);
void ra(t_s **stack_a);
void	pa(t_s	**stack_a,t_s	**stack_b);
void sb(t_s  **stack_b);
void sa(t_s  **stack_a);


#endif 
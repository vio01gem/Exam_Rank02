#include <stdlib.h>
#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *start;

    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if (cmp(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start; 
        }
        else 
        {
            lst = lst->next;
        }
    }
    return (start);
}

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

// t_list *lstnew(int content)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->content = content;
//     node->next = NULL;
//     return (node);
// }

// int main(void)
// {
//     t_list *node = lstnew(1);
//     node->next = lstnew(8);
//     node->next->next = lstnew(3);

//     node = sort_list(node, ascending);
//     t_list *tmp = node;
//     while (tmp)
//     {
//         printf("%d\n", tmp->content);
//         tmp = tmp->next;
//     }
// }

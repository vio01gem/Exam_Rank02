#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int count = 0;
    t_list *temp_list = begin_list;
    while (temp_list)
    {
        count++;
        temp_list = temp_list -> next;
    }
    return (count);
}

t_list *new_list(void *data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
int main
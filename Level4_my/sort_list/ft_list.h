#ifndef  FT_LIST.H
#define FT_LIST.H
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

#endif
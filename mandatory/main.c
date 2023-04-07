
#include "push_swap.h"

int main(int argc, char **argv)
{
    struct dlist *stack_a;
    char **args;

    stack_a = dlist_init();
    args = (char **)malloc(sizeof(char *) * argc);
    if (!args)
        return -1;
    args = checker(argc, argv);
    stack_a->head = args[0];

}
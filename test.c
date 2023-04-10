#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	check_im(long result)
{
	if (result > 2147483647 || result < -2147483648)
		{
            write (1, "error\n", 6);
		    exit (1);
        }
}

int	ft_atoi(const char *str)
{
	long	nbr;
	int		sign;
	int		i;

	sign = 1;
	nbr = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] > 7 && str[i] < 14))
			i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	check_im( sign * nbr);
	return (sign * nbr);
}

int duplicate(char **str)
{
    int i;
    int j;
    
    i = 0;
    j = 1;
    while (str[i])
    {
        while (str[i + j])
        {
            if (ft_atoi(str[i]) == ft_atoi(str[i + j]))
                    return (1);
            j++;
        }
        j = 1;
       i++;
    }
    return (0);
}


int num_check(char **str)
{
    int i = 1;
    int j = 0;

    while (str[i])
    {
        printf("%s\n", str[i]);
        while (str[i][j])
        {
            if (str[i][j] == '+' || str[i][j] == '-')
            {
                j++;
                continue;
            }
            while (ft_isdigit(str[i][j]))
            {
                j++;
                if (str[i][j] == '\0')
                    break;
            }
            if (str[i][j] != '\0')
                return 1;
        }
        j = 0;
        i++;
    }
    return 0;
}


int main(int argc, char **argv)
{
    if (argc == 1)
        return (1);
    if (num_check(argv))
        printf("error\n");
    else
        printf ("success\n");
    return (0);
}
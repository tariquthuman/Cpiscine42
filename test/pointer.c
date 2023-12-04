#include <stdio.h>
#include <unistd.h>

// int	main()
// {
// 	int	a;
// 	int *p;
// 	a = 5;
// 	printf("a is %d\n", a);
// 	p = &a;
// 	*p = 6;
// 	printf("a is %d\n", a);
// 	int	**q;
// 	q = &p;
// 	int	***r;
// 	r =&q;
// 	// printf("p is %p\n", p);
// 	printf("*p is %d\n", *p);
// 	// printf("q is %p\n", q);
// 	// printf("*q is %p\n", *q);
// 	printf("**q is %d\n", **q);
// 	***r = 10;
// 	printf("a(***r) is %d\n", a);
// 	return (0);
// }

// void	increment(int *x)
// {
// 	*x = *x + 1;
// }
// int	main(void)
// {
// 	int	a;
// 	a = 10;
// 	increment(&a);
// 	printf("%d", a);
// 	return(0);
// }

// int	main(void)
// {
// 	int	A[] = {1,2,3,4,5};
// 	int	i = 0;
// 	while (A[i] != '\0')
// 	{
// 		printf("%d\n", A[i]);
// 		++i;
// 	}
// 	return(0);
// }

// void	Double(int *A)
// {
// 	int	i = 0;
// 	while (i < 5)
// 	{
// 		A[i]= 2*A[i];
// 		printf("%d ", A[i]);
// 		++i;
// 	}
// }
// int	main()
// {
// 	int	A[5] = {1,2,3,4,5};
// 	Double(A);
// 	return(0);
// }

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = argc - 1;
	while (x > 0)
	{
		y = 0;
		while (argv[x][y]!= '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		x--;
		ft_putchar('\n');
	}
	return (0);
}


// int	main(int argc, char *argv)
// {
// 	char	c[5] = "john";
// 	int	i = 0;
// 	while(c[i] != '\0')
// 	{
// 		write(1, &c[i], 1);
// 		++i;
// 	}
// 	printf("\n");
// 	return(0);
// }

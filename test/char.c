#include <unistd.h>

void	ft_puthchar(void)
{
	char	c;
	c = 'a';
	write(1, &c, 1);
}
int	main(void)
{
	ft_puthchar();
	return (0);
}

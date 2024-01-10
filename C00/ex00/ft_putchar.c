#include <unistd.h>
#include <stdio.h>
int occ_z(char *str)
{
	 int i;
	int Z;

	i = 0;
	Z = 0;
	while(str[i])
	{
		if (str[i] == 'Z')
		       	Z++;
		i++;
	}
	return (Z);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Erro de Input\n");
		return (0);
	}	
	printf("%d\n", occ_z(argv[1]));
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*save;

	save = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (save);
}

#include <stdio.h>

int main()
{
	char original[] = "Teste";
	char append[]   = "Bem efetuado";
	
	char *result = ft_strcat(original, append);
	printf("%s\n", result);

	char *backup = result;

	int index = 0;
	while(*result != '\0')
	{
		printf("%s \n", result);
		result++;
		index++;
	}
	
	*(backup+3) = *result;

	index = 0;
	while(*backup != '\0')
	{
		printf("%s \n", backup);
		backup++;
		index++;
	}


	return 0;
}
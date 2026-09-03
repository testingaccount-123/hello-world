#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("usage: script [str]\n");
		return 1;
	}

	printf("Can you see me");
	printf("I can't see you");

	for (int i = 0; i < 100; i++)
	{
		printf("%s\n", argv[1]);	
	}
	
	return 0;
}

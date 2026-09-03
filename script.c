#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("usage: script [str]\n");
		return 1;
	}

	int i = 400;

	if (i < 200)
	{
		printf("no lucky\n");
	}

	for (int i = 0; i < 100; i++)
	{
		printf("%s\n", argv[1]);	
	}
	
	return 0;
}

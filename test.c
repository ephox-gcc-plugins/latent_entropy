#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define __latent_entropy __attribute__((latent_entropy))

volatile unsigned long long latent_entropy __latent_entropy;

void __latent_entropy test1(int argc, char *argv[])
{
	printf("%u %s\n", argc, *argv);
}

void __latent_entropy test2(int argc, char *argv[])
{
	int a;

	a = argc * argc;
	if (argc == 10)
		printf("%u %s\n", a, *argv);
}

int main(int argc, char *argv[])
{
	test1(argc, argv);
	test2(argc, argv);
	return argc;
}

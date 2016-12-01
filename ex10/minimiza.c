#include <stdio.h>

int main(int argc, char const *argv[])
{
	char letra = argv[1][0];
	if (letra > 64 && letra < 91){
		letra += 32;
	} 
	printf("%c\n", letra);
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char names[][10] = {"musk","trump","biden","putin"};
	int i = sizeof(names)/sizeof(names[0]);
	int n = 0;
	while(n < i)
	{
		printf(names[n]);
		printf("\n");
		n++;
	}
	system("pause");
	return 0;
}

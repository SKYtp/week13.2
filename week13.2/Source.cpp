#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int n, nm;
void cal()
{
	while (1)
	{
		int n1, n2, n3, np;
		n3 = nm % 10;
		nm = nm / 10;
		n2 = nm % 10;
		nm = nm / 10;
		n1 = nm;
		np = n1 * n2 * n3;
		printf("%d . %d . %d = %d\n", n1, n2, n3, np);
		nm = np;
		if (np < 10)
		{
			break;
		}
	}
}
int main()
{
	printf("Enter Number : ");
	scanf("%d", &n);
	printf("\n----------------\n");
	nm = n;
	printf("INPUT number : %d\n", nm);
	cal();
}

#include<stdio.h>
#include<stdlib.h>
int Odd(int U);
int Even(int U);
int Total(int U);
int main(void)
{
	int n, sum;
	char addchoice;
	printf("1+2+...+n=? �п�Jn=");
	scanf_s("%d", &n);
	printf("�n���_�ƩM(O),���ƩM(E)�٬O��ƩM(I) �п��:");
	scanf_s(" %c", &addchoice);
	switch (addchoice)
	{
	case 'O':
		sum = Odd(n);
		break;
	case 'E':
		sum = Even(n);
		break;
	case 'I':
		sum = Total(n);
		break;
	default:
		printf("���~\n");
		return -1;
	}
	printf("�`�X��%d\n", sum);
	system("pause");
	return 0;
}
int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}
int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}
int Total(int U)
{
	return Odd(U) + Even(U);
}
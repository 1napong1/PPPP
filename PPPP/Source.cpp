#include<stdio.h>
int main() {
	int a, x, i;
	int min = 9999;
	int max = -9999;
	scanf_s("%d", &a);
	for (i = 1;i <= a;i++)
	{
		scanf_s("%d", &x);
		if (x > 0) 
		{
			if (x > max)
			{
				max = x;
			}
		}
		if (x<=0)
		{
			if (x < min)
			{
				min = x;
			}
		}
	}
	printf("%d is maximun\n%d is minimum", max, min);

}
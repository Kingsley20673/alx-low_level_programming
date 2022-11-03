#include <stdio.h>

int main(void)
{
	int i, j;
	i =0;
	j=2;
	while((i<10) &&(j<14))
	{
		if (i == 1)
		{
			j -= 7;
			printf("%d", j);
		}
		else if (j == 1)
		{
			i += j;
			printf("%d",i);
		}
		else if (i ==6)
		{
			while(j>0)
			i ++;
			j+=2;
			printf("second while loop shows i and j %d%d", i,j);
		}
		i++;
		j+=2;
	}
return (0);
}

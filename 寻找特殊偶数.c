#include <stdio.h>
int main()
{
	int min,max,even,count=0;
	int a,b,c,d;
	scanf("%d %d",&min,&max);
	while((min!=0)&&(max!=0))
	{
		if(!((min>999&&min<10000)&&(max>999&&max<10000)&&(max>=min)))
		{
			printf("Error\n");
		}
		else 
		{
			for(even=min;even<=max;even++)
		{
			if(even%2!=0)
			{
				continue;
			}
			a=even/1000;
			b=even/100%10;
			c=even/10%100;
			d=even%10;
			if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))
			{
				printf("%d ",even);
				count++;
				if(even<max)
				{
					printf(" ");
				}
				if((even==max-1)&&(even%2==0))
			{
				printf("\n");
			}
				
			}		
		}
		printf("\ncounter=%d\n",count);
		count=0;
		}
		scanf("%d %d",&min,&max);
	}
	
	return 0;
}

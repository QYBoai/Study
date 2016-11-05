/*题目内容：
有一种特殊偶数，它每一位上的数字都两两不相同。我们现在需要找出四位数中某一区间内的这类偶数。

输入格式:
所要寻找的四位偶数的范围。每组输入有两个数字：第一个数字是最小范围；第二个数字是最大范围。如果输入遇到0，输入结束。

输出格式：
列出此范围内的所有特殊偶数，并且列出此范围内特殊偶数的个数。

输入样例：
3000  3020
6040  6090
0 0

输出样例：
3012  3014  3016  3018  
counter=4
6042  6048  6052  6054  6058  6072  6074  6078  6082  6084  
counter=10

输入样例：
9  101
87 -1
0 0

输出样例：
Error
Error
*/
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

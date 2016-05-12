#include <stdio.h>
#define N 3
#define M 3
int ave(int a[M+1]);
int line(int b[]);
int main()
{
	int a[N][M+1]={0},i,j,b[N]={0};
	for(i=0;i<N;i++)
	{
	printf("第%d人成绩：\n",i+1);
	for(j=1;j<=M;j++)
	{
		scanf("%d",&a[i][j]);
		getchar();
	}
	ave(a[i]);
	printf("");
	b[i]=a[i][0];
	}
	 line(b);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(b[i]==a[j][0]) printf("第%d名为%d号选手 %d分\n",i+1,j+1,b[i]);
	return 0;
}
int ave(int a[M+1])
{
	int i,max,min;
	max=a[1];min=a[1];
	for(i=1;i<=M;i++)
	{
		if(a[i]>max) max = a[i];
		if(a[i]<min) min = a[i];
		a[0]+=a[i];
	}
	a[0]-=max+min;
	a[0]/=M-2;
	return 0;
}
int line(int b[])
{
	int i,j,t;
	for(i=0;i<N-1;i++)
	{
		for(j=1;j<N;j++)
		{
			if(b[i]<b[j]) 
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	return 0;
}

#include <stdio.h>
#define N 3
#define M 3
int ave(int a[M+1]);
<<<<<<< HEAD
int line(int b[][N]);
int main()
{
	int a[N][M+1]={0},i,j,b[3][N]={0};


	for(i=0;i<N;i++)
	{
	printf("µÚ%dÈË³É¼¨£º\n",i+1);
	for(j=1;j<=M;j++)
	{
		scanf("%d",&a[i][j]);
		getchar();
	}
	ave(a[i]);
	printf("");
	b[1][i]=a[i][0];
	b[0][i]=i;
	}


	 line(b);
	for(i=0;i<N;i++)
		b[2][i]=i;
		for(i=0;i<N;i++)
		{
			if(i>0)
			{
			if(b[1][i]==b[1][i-1])
				b[2][i]=b[2][i-1];
			}
				printf("µÚ%dÃûÎª%dºÅÑ¡ÊÖ %d·Ö\n",b[2][i]+1,b[0][i]+1,b[1][i]);
		}
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
int line(int b[][N])
{
	int i,j,t,d;
	for(i=0;i<N-1;i++)
	{
		for(j=1;j<N;j++)
		{
			if(b[1][i]<b[1][j]) 
			{
				t=b[1][i];			d=b[0][i];
				b[1][i]=b[1][j];	b[0][i]=b[0][j];
				b[1][j]=t;			b[0][j]=d;
			}
		}
	}
	return 0;
}

/*
#include <stdio.h>
#include <math.h>
#define N 4
#define M 4
float ave(int a[M]);
float line(float b[]);
=======
int line(int b[]);
>>>>>>> origin/master
int main()
{
	int a[N][M+1]={0},i,j,b[N]={0};
	for(i=0;i<N;i++)
	{
	printf("ç¬¬%däººæˆç»©ï¼š\n",i+1);
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
			if(b[i]==a[j][0]) printf("ç¬¬%dåä¸º%då·é€‰æ‰‹ %dåˆ†\n",i+1,j+1,b[i]);
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
*/
#include <stdio.h>
#define N 3
#define M 3
int ave(int a[M+1]);
int line(int b[][N]);
int main()
{
	int a[N][M+1]={0},i,j,b[3][N]={0};


	for(i=0;i<N;i++)
	{
	printf("��%d�˳ɼ���\n",i+1);
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
				printf("��%d��Ϊ%d��ѡ�� %d��\n",b[2][i]+1,b[0][i]+1,b[1][i]);
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
int main()
{
	int a[N][M]={0},i,j,find=0;
	float b[N],c[N],d[N]={0},e[N]={0};
	for(i=0;i<N;i++)
	{
	printf("��%d�˳ɼ���\n",i+1);
	for(j=0;j<M;j++)
	{
		scanf("%d",&a[i][j]);
		getchar();
	}
	b[i]=c[i]=ave(a[i]);
	printf("���գ�	%3.2f\n",c[i]);
	for(j=0;j<M;j++)
		d[j]+=fabs(a[i][j]-c[i]);
	}
		for(j=0;j<M;j++)
		e[j]=d[j];
		printf("ѡ������:");
	 line(b);
	 		printf("��ί����:");
	line(d);
	printf("\nѡ��С��");
	 for(i=0;i<N;i+=find?find:1)
	{
		 find=0;

		for(j=0;j<N;j++)
		{
			if(b[i]==c[j]) 
			{
				if(find++==0)	printf("��%d��Ϊ%d��ѡ�� %3.2f��\n",i+1,j+1,b[i]);
				else 	printf("���е�%d��Ϊ%d��ѡ�� %3.2f��\n",i+1,j+1,b[i]);
			}
		}
	}
	 find=0;
	 	printf("\n��ίС��");
	 	 for(i=M-1;i>=0;i-=find?find:1)
	{
		 find=0;

		for(j=0;j<M;j++)
		{
			if(d[i]==e[j]) 
			{
				if(find++==0)	printf("��%d��Ϊ%d����ί,���%3.2f��\n",M-i,j+1,d[i]);
				else 	printf("���е�%d��Ϊ%d����ί,���%3.2f��\n",M-i,j+1,d[i]);
			}
		}
	}
	return 0;
}
float ave(int a[M])
{
	int i,max,min;
	float count=0;
	max=a[0];
	min=a[0];
	for(i=0;i<M;i++)
	{
		count=count+a[i];
		if(a[i]>max) max = a[i];
		if(a[i]<min) min = a[i];
	}
	//printf("		%f\n",count);
	count-=max+min;
	count=count/(float)(M-2);
	return count;
}
float line(float b[])
{
	int i,j,n;
	float t;
	n=sizeof(b);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j]) 
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
		 for(i=0;i<n;i++)
		 printf("%3.2f ",b[i]);
	 printf("\n");
	return 0;
}
*/
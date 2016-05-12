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
	printf("第%d人成绩：\n",i+1);
	for(j=0;j<M;j++)
	{
		scanf("%d",&a[i][j]);
		getchar();
	}
	b[i]=c[i]=ave(a[i]);
	printf("最终：	%3.2f\n",c[i]);
	for(j=0;j<M;j++)
		d[j]+=fabs(a[i][j]-c[i]);
	}
		for(j=0;j<M;j++)
		e[j]=d[j];
		printf("选手排序:");
	 line(b);
	 		printf("评委排序:");
	line(d);
	printf("\n选手小结");
	 for(i=0;i<N;i+=find?find:1)
	{
		 find=0;

		for(j=0;j<N;j++)
		{
			if(b[i]==c[j]) 
			{
				if(find++==0)	printf("第%d名为%d号选手 %3.2f分\n",i+1,j+1,b[i]);
				else 	printf("并列第%d名为%d号选手 %3.2f分\n",i+1,j+1,b[i]);
			}
		}
	}
	 find=0;
	 	printf("\n评委小结");
	 	 for(i=M-1;i>=0;i-=find?find:1)
	{
		 find=0;

		for(j=0;j<M;j++)
		{
			if(d[i]==e[j]) 
			{
				if(find++==0)	printf("第%d名为%d号评委,相差%3.2f分\n",M-i,j+1,d[i]);
				else 	printf("并列第%d名为%d号评委,相差%3.2f分\n",M-i,j+1,d[i]);
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

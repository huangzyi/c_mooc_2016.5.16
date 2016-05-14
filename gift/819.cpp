#include <stdio.h>
#define N 3
#define M 3
int ave(int a[M+1]);
//传入二维数组时最小单元的长度一定要标明
int line(int b[][N]);
int main()
{
	//初定义变量，将数组初始化为0
	//定义a的二维数组存储选手成绩;b为a排序后的数组，b[0]存储选手序号，b[1]存储选手分数，b[2]存储选手名次
	//类型最好改为double
	int a[N][M+1]={0},i,j,b[3][N]={0};

	//输入选手成绩，a[i]的存入第i-1位选手的成绩，第j位评委的分数存入a[i][j]中，将计算后的分数存在a[i][0]中
	for(i=0;i<N;i++)
	{
	printf("第%d人成绩：\n",i+1);
	for(j=1;j<=M;j++)
	{
		scanf("%d",&a[i][j]);
		getchar();
	}
	
	
	//计算每个选手的最终成绩,并将每个选手总分复制到b[1]数组中
	ave(a[i]);
	b[1][i]=a[i][0];
	
	//将选手序号传入b[0]数组中
	b[0][i]=i;
	
	}

	//调用函数line,给选手排序
	 line(b);
	 
	 
	//将选手名次存入b[2]数组中
	for(i=0;i<N;i++)
		b[2][i]=i;
	

	for(i=0;i<N;i++)
	{
		//将并列的名次调节到和同分第一的名次相同
		if(i>0)
		{
		if(b[1][i]==b[1][i-1])
			b[2][i]=b[2][i-1];
		}
		
		//输出	
		printf("第%d名为%d号选手 %d分\n",b[2][i]+1,b[0][i]+1,b[1][i]);
	}
	
	return 0;
}

//ave函数用来计算选手最终成绩
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
	
	//冒泡法排序
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


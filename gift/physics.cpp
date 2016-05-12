#include <stdio.h>
double k1(const float x,const float y);
double k2(const float x,const float y);
//int set(const float a);
#define N 10
#define Q 1e-8
#define K1 (Q/(4*PI*E0*ER))
#define K2 (Q/(4*PI*E0))
#define PI 3.14
#define E0 8.85e-12
#define ER 5.0
int main()
{	float x[N]={0},y[N]={0},all=0;
	double z[N]={0};
	int type,i;
	char cont;
	for(i=0;i<10;i++)
	{	printf("type: ");
		scanf("%d",&type);
		printf("x1,x2: ");
		scanf("%f,%f",&x[i],&y[i]);
		getchar();
		if(type==1) z[i]=k1(x[i],y[i]);
		else z[i]=k2(x[i],y[i]);
		printf("%lf\n",z[i]);
		printf("if continue?y/n");
		cont=getchar();
		if(cont=='n'||cont=='N') break;
	}
	for(i=0;i<10;i++)
		all+=z[i];
	printf("%.0f\n",all);
	return 0;
}
double k1(const float x,const float y)
{
	if(!x) return K1/y;
	else return K1*((float)1/y-(float)1/x);
}
double k2(const float x,const float y)
{
		if(!x) return K2/y;
	else	return K2*((float)1/y-(float)1/x);
}
/*
int set(const float a)
{
	int b;
	b=(int)a;
	if((a-(float)b)>0.5) return b+1;
	else return b;
}
*/
#include <stdio.h>
int main()
{
	int n,find=0,x,y,z;
	printf("Input n(n<1000):\n");
	scanf("%d",&n);
	getchar();
	for(x=0;x<10;x++)
		for(y=0;y<10;y++)
			for(z=0;z<10;z++)
			{
				if(100*x+110*y+12*z==n) 
				{
					find=1;
					printf("X=%d,Y=%d,Z=%d\n",x,y,z);
					return 0;
				}
			}
	if(!find)  printf("Invalid\n");
	return 0;
}


/*
��ԭ�������ʽ��4�֣�

��Ŀ���ݣ�

��д������������ʽ��XYZ��ֵ����������XYZ��YZZ��ӵĺ�n��99<n<1000����ֵҪ��Ӽ������롣


�������н��ʾ��1��

Input n(n<1000):

532�L

X=3,Y=2,Z=1


�������н��ʾ��2��

Input n(n<1000):

977�L

Invalid


�����ʽ: "%d" 

�����ʽ��

������ʾ��"Input n(n<1000):\n"

�����ʽ��"X=%d,Y=%d,Z=%d\n"

���㲻�ɹ�(�޽�)�������ʾ��"Invalid\n"


#include <stdio.h>
int mid(int a, int b, int c); 
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("The result is %d\n",mid(a,b,c));
	return 0;
}
int mid(int a, int b, int c)
{
	int min,max,mid;

	min=a>b?b:a;
	min=min>c?c:min;

	max=a<b?b:a;
	max=max<c?c:max;

	mid=a+b+c-min-max;
	return mid;
}


Ѱ����λ��v1.0��4�֣�

��Ŀ���ݣ�

��дһ�������������������е��м���������ԭ��Ϊ�� int mid(int a, int b, int c); 

���������Ƿ���a��b��c�����д�Сλ���м���Ǹ�����

�����ʽ: "%d%d%d"

�����ʽ��"The result is %d\n"

��������1��

12 6 18�L

�������1��
The_result_is_12

��������2��
-9 7 -2�L

�������2��

The_result_is_-2

ע�⣺Ϊ������ָ�ʽ������ֱ�ӿ���ճ��������������롢�����ʾ��Ϣ�͸�ʽ�����ַ�����

��ע�⣺������У���_������ո����ֱ�ӽ��϶�ʾ��ճ���������У�Ӧ�����滻Ϊ�ո񡣣�
#include <stdio.h>
int Magic(int m);
int main()
{
	int sum,find;
	scanf("%d",&sum);
	find=Magic(sum);
	find?printf("The number is %d\n",find):printf("The sum you calculated is wrong!\n");
	 return 0;
}
int Magic(int m)
{
	int a,b,c,find=0;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++)
			{
				if((a+b+c)*222-a*100-b*10-c==m) 
				return 100*a+10*b+c;
			}
	return 0;
}



ħ��ʦ������4�֣�

��Ŀ���ݣ�

��һ�����ڻ�����Ϸ�У�ħ��ʦҪÿλ����������һ����λ��abc��a��b��c�ֱ��ǰ�λ��ʮλ�͸�λ���֣���
Ȼ��ħ��ʦ�ù������м���acb��bac��bca��cab��cba������Լ���5�����ĺ�ֵ��ֻҪ����˵��������Ƕ��٣�
��ħ��ʦһ���ܲ³������������ԭ��abc�Ƕ��١����磬���ڼ�˵������ĺ�ֵ��1999����ħ��ʦ����˵�����������443��
��������˵������ĺ�ֵ��1998����ħ��ʦ˵����������ˣ���������ģ���������ħ����Ϸ��Ҫ���ú���ʵ�֣�����ԭ��Ϊ��

int Magic(int m);

�����β�m������ڼ���ĺ�ֵ��


�����ʽ:"%d"

�����ʽ��

���ڼ������ħ��ʦ�����Ľ��ۣ�"The sum you calculated is wrong!\n"

���ڼ�����ȷ��ħ��ʦ�����Ľ��ۣ�"The number is %d\n"

��������1��

1998�L

�������1��
The_sum_you_calculated_is_wrong!

��������2��

1999�L

�������2��
The_number_is_443

#include <stdio.h>
unsigned int ComputeAge(unsigned int n);
int main()
{
	unsigned n;
	scanf("%u",&n);
	printf("The person's age is %u\n",ComputeAge(n));
		return 0;
}
unsigned int ComputeAge(unsigned int n)
{
	if(n==1) return 10;
	else return ComputeAge(n-1)+2;
}


�ݹ鷨������Ϸ��Ա�����䣨4�֣�

��Ŀ���ݣ�

��n����Χ����һ���ʵ�n���˶����ͣ���˵�ȵ�n-1���˴�2�ꣻ�ʵ�n-1���ˣ���˵�ȵ�n-2���˴�2��,.....,�ʵ�3���ˣ���˵�ȵ�2���˴�2�ꣻ
�ʵ�2���ˣ���˵�ȵ�1���˴�2�ꡣ��1����˵�Լ�10�꣬�ʵ�n���˶����͡�

�ݹ麯��ԭ�ͣ�unsigned int ComputeAge(unsigned int n);

��ʾ��

��������ĵݹ鹫ʽΪ��


�����ʽ: "%u"

�����ʽ�� "The person's age is %u\n"



#include <stdio.h>
int main()
{
	int y,m;
	printf("Input year,month:\n");
	scanf("%d,%d",&y,&m);
		switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days\n");
			break;
		case 2:
			if(y%400==0||(y%100!=0&&y%4==0)) printf("29 days\n");
			else printf("28 days\n");
			break;
		default:
			printf("Input error!\n");
			break;
	}
	return 0;
}

������ĳ��ĳ���ж����죨���ǵ����꣩����5�֣�

��Ŀ���ݣ�

�Ӽ�������һ����ݺ��·ݣ���������ж����죨�������꣩����switch����̡�


�������н��ʾ��1��

Input year,month:

2015,3�L

31 days


�������н��ʾ��2��

Input year,month:

2015,4�L

30 days


�������н��ʾ��3��

Input year,month:

2016,2�L

29 days


�������н��ʾ��4��

Input year,month:

2014,2�L

28 days


�������н��ʾ��5��

Input year,month:

2015,13�L

Input error!

������ʾ��Ϣ��"Input year,month:\n"

�����ʽ:  "%d,%d"

�����ʽ��

�������ʱ����ʾ��Ϣ��"Input error!\n"

�����ʽ��

          "31 days\n"

          "30 days\n"

          "29 days\n"

          "28 days\n"
#include <stdio.h>
int main()
{
	int n,x,y,z;
	printf("Input n(27<n<=77):\n");
	scanf("%d",&n);
	for(x=0;x<=n/4;x++)
		for(y=0;y<=n/3;y++)
			for(z=0;z<=36;z=z+2)
				if(x+y+z==36&&4*x+3*y+z/2==n) printf("men=%d,women=%d,children=%d\n",x,y,z);
	return 0;
}


n��ש( 27<n<=77 )��36�˰ᣬ�а�4��Ů��3������С��̧һ��ש��Ҫ��һ�ΰ��꣬�����ˡ�Ů�˺�С����������ˣ�
������ٷ�������,n��ֵҪ��Ӽ������롣���������������������������������ʾ��3����
��������н��ʾ��1��
Input n(27<n<=77):
28�L
men=0,women=4,children=32
��������н��ʾ��2��
Input n(27<n<=77):
36�L
men=3,women=3,children=30
��������н��ʾ��3��
Input n(27<n<=77):
60�L
men=2,women=14,children=20
men=7,women=7,children=22
men=12,women=0,children=24
������ʾ�� "Input n(27<n<=77):\n"
�����ʽ: "%d"  
�����ʽ��"men=%d,women=%d,children=%d\n"
#include <stdio.h>
int num(int a,int n);
int main()
{
	int a,n,i;
	long int sum=0;
	printf("Input a,n:\n");
	scanf("%d,%d",&a,&n);
	for(i=0;i<=n;i++)	sum+=num(a,i);
	printf("sum=%ld\n",sum);
		return 0;
}
int num(int a,int n)
{
	if(n==0) return 0;
	else if(n==1) return a;
	else return 10*num(a,n-1)+a;
}
��̼���a+aa+aaa+��+aa��a��n��a����ֵ��4�֣�
��Ŀ���ݣ�
��̼��� a+aa+aaa+��+aa��a��n��a����ֵ��n��a��ֵ�ɼ������롣���磬��n=4,a=2,��ʾ����2+22+222+2222��ֵ��
�������н��ʾ����
Input a,n:
2,4�L
sum=2468
������ʾ��Ϣ��"Input a,n:\n"
�����ʽ:   "%d,%d"��������a��������n��
�����ʽ��  "sum=%ld\n"
    #include<stdio.h>
       int main()
       {
           int score,n;
           char grade;
           while(1)
		   {
		   printf("Please input score:\n");
		   n = scanf("%d", &score);
		   //printf("%d\n",n);
		   getchar();
			if(score < 0 || score > 100||n!=1) 
			{
			     printf("Input error!\n");	
				 continue;
			}
			else break;
			
		   }
             if (score >= 90) 
                 grade = 'A';
            else if (score >= 80)
                 grade = 'B';   
            else if (score >= 70)
                 grade = 'C';  
            else if (score >= 60)
                 grade = 'D'; 
            else
                 grade = 'E'; 
            printf("grade: %c\n", grade);
            return 0;
    }



#include <stdio.h>
int main()
{
	char c,i,j;
	int k;
	printf("Please input a capital:\n");
	scanf("%c",&c);
	for(i='A';i<=c;i++)
	{
		for(k=1;k<=c-i;k++) printf(" ");
		for(j='A';j<i;j++) printf("%c",j);
		for(j=i;j>='A';j--) printf("%c",j);
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
      int main()
      {
        int x1, x2,i,find=0;
        while(!find){
          printf("Input x1, x2:\n");
          i=scanf("%d,%d", &x1, &x2);
		  //printf("%d\n",i);
		  while(getchar()!='\n');
		  if(i==2&&x1*x2<0) find++;
		}
        printf("x1=%d,x2=%d\n", x1, x2);
        return 0;
      }
����Ĵ�-3��4�֣�

��Ŀ���ݣ�

�Ӽ������������������Ÿ����������ֱ�������������������Ҫ��Ϊֹ��Ȼ���ӡ������������ͨ�������ҳ��������������ڵ����⣨��ֹһ������Ŷ������������ͬʱ��������������н��ʾ������޸ĺ�ĳ���

    #include <stdio.h>
      int main()
      {
        int x1, x2;
        do{
          printf("Input x1, x2:");
          scanf("%d,%d", &x1, &x2);
        }while (x1 * x2 > 0);
        printf("x1=%d,x2=%d\n", x1, x2);
        return 0;
      }


������ȷ�����н��ʾ����

Input x1, x2:

a,s�L

Input x1, x2:

a,1�L

Input x1, x2:

2,s�L

Input x1, x2:

1,2�L

Input x1, x2:

-1,-2�L

Input x1, x2:

0,3�L

Input x1, x2:

1.2,3.4�L

Input x1, x2:

1.2,5�L

Input x1, x2:

-1,3�L

x1=-1,x2=3



�����ʽ: "%d,%d"

�����ʽ��

������ʾ��Ϣ��"Input x1, x2:\n"

����� "x1=%d,x2=%d\n"
    #include  <stdio.h>
      int main()
      { 
          int sum = 0, m;
              printf("Input m:\n");
              scanf("%d", &m);
              sum = sum + m;
              printf("sum = %d\n", sum);
          while (m != 0)
		{ 
             printf("Input m:\n");
              scanf("%d", &m);
              sum = sum + m;
              printf("sum = %d\n", sum);
		}
          return 0;
      }
#include <stdio.h>
//float height(int n);
//float s(int n);
int main()
{	int n,i;
	double s=0,h=100;
		printf("Input:\n");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				s+=h;
				h=h/2;
				s+=h;
			}
		printf("%d times:\n",n);
		printf("%.3f\n",s-h);
		printf("%.3f\n",h);
		return 0;
}
float height( int n)
{
	return 0;
}*/
/*������ķ����߶ȣ�4�֣�

��Ŀ���ݣ�

һ�����100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬�����²�����......��
�����ڵ�5�κ͵�10�����ʱ���ֱ𹲾����˶����ף���5�κ͵�10�η����ֱ��Ƕ�ߣ�
Ҫ�������������С�����3λ���û��Ӽ���������Ҫ����ĵ�n�Σ�n<=15����


�������н��ʾ��1��

Input:

5�L

5 times:

287.500

3.125


�������н��ʾ��2��

Input:

10�L

10 times:

299.609

0.098


�����ʽ: "%d"

�����ʽ��

����������"%d times:\n"

��n�η��������������ף�"%.3f\n"

��n�εķ����߶ȣ�"%.3f\n"

������ʾ��Ϣ��"Input:\n"
#include <stdio.h>
int fun(int n);
int main()
{	int num,odd=0,even=0,j;
		printf("Please enter the number:\n");
		do{
			scanf("%d",&num);
			j = fun(num);
			if(j==-1&&odd==0&&even==0) 
			{
				printf("over!\n");
			}
			else if(j==1)
			{
				printf("%d:odd\n",num);
				odd++;
			}
			else if(j==0)
			{
				printf("%d:even\n",num);
				even++;
			}
		}while(num!=-1);
		printf("The total number of odd is %d\n",odd);
		printf("The total number of even is %d\n",even);
		return 0;
}
int fun( int n)
{
	if(n==-1) return -1;
	else if(n%2==1) return 1;
	else return 0;
}
�������������������ż���ĸ�����4�֣�

��Ŀ���ݣ�

�Ӽ�������һϵ��������������-1��ʾ���������-1��������������ݣ���
��д�����ж�����������������ż���ĸ�����
����û�����ĵ�һ�����ݾ���-1����������"over!"��
�����û�ÿ����һ�����ݣ��������������������ż����ֱ���û�����-1Ϊֹ���ֱ�ͳ���û�����������������ż���ĸ�����


�������н��ʾ��1��

Please enter the number:

1�L

1:odd

5�L

5:odd

8�L

8:even

9�L

9:odd

12�L

12:even

17�L

17:odd

-1�L

The total number of odd is 4

The total number of even is 2


�������н��ʾ��2��

Please enter the number:

-1�L

over!

The total number of odd is 0

The total number of even is 0


�����ʽ: "%d"


�����ʽ��

������ʾ��Ϣ��"Please enter the number:\n"

�û�����ĵ�һ�����ݾ���-1�������ʽ��"over!\n"

�����������ʽ��"%d:odd\n"

ż���������ʽ��"%d:even\n"

���������������ĸ���ͳ�ƣ�"The total number of odd is %d\n"

����������ż���ĸ���ͳ�ƣ�"The total number of even is %d\n"
#include <stdio.h>
int main()
{	int num,n,count=0;
		printf("Please enter the number:\n");
		scanf("%d",&num);
	if(num<0) n = -num;
	else n = num;
	while(n)
	{
		n/=10;
		count++;
	}
	printf("%d: %d bits\n",num,count);
	return 0;
}


�Ӽ�������һ����������(int��)����д�����жϸ��������м�λ�����磬�Ӽ�����������16644,����������5λ��


�������н��ʾ��1��

Please enter the number:

21125�L

21125: 5 bits


�������н��ʾ��2��

Please enter the number:

-12234�L

-12234: 5 bits


�����ʽ: "%d"

�����ʽ��

������ʾ��Ϣ��"Please enter the number:\n"

�жϸ��������м�λ: "%d: %d bits\n"
�Ӽ�������6λ��������0~9��ɵ����롣�û�ÿ����һ�����벢���س����󣬳�������жϣ���������֣���ԭ����������֣�����ʾ�û�Ŀǰ�Ѿ������˼�λ���룬ͬʱ����������һλ���룻���򣬳�����ʾ"error"�������û�����������һλ���롣ֱ���û����������ȫ��������Ϊֹ��

����Ϊ��������н��ʾ����

Input your password:

1�L

1, you have enter 1-bits number

6�L

6, you have enter 2-bits number

a�L

error

d�L

error

4�L

4, you have enter 3-bits number

6�L

6, you have enter 4-bits number

8�L

8, you have enter 5-bits number

2�L

2, you have enter 6-bits number


�����ʽ:

�����ַ������ʽ��"%c"


�����ʽ��

������ʾ��Ϣ��"Input your password:\n"

�������������֣������ʽΪ��"%c, you have enter %d-bits number\n"

�������Ĳ������֣������ʾ��Ϣ��"error\n"
#include <stdio.h>
      int main()
      {
        int x1, x2,i;
        do{
          printf("Input x1, x2:");
          i=scanf("%d,%d", &x1, &x2);
		  while(getchar()!='\n');
        }while (x1*x2>0||(i!=2)||!x1||!x2);
        printf("x1=%d,x2=%d\n", x1, x2);
        return 0;
      } 
   #include  <stdio.h>
      int main()
      { 
          int sum = 0, m;
          while (m != 0){
              printf("Input m:\n");
              scanf("%d", &m);
              sum = sum + m;
              printf("sum = %d\n", sum);
          };
          return 0;
      }
	
	int a,b=1;
	a=(b+4,b+=2,++b);
	printf("%d",a);

/*    #include <stdio.h>
      int main()
      {
        int x1=0, x2=0;
        do{
          printf("Input x1, x2:");
          scanf("%d,%d", &x1, &x2);
        }while (x1 * x2 >= 0);
        printf("x1=%d,x2=%d\n", x1, x2);
        return 0;
      }
    #include <stdio.h>
       #include <math.h>
       int main()
       {
         int n, i,j=0;
         printf("Input n:\n");
         scanf("%d", &n);
		 if(n>1)
		 {
         for (i=2; i<=sqrt(n); i++)
         {
           if (n%i==0) j++;
		 }
		 }else j++;
		 if(j==0) printf("Yes!\n");
		 else printf("No!\n");
        return 0;
      }
    #include  <stdio.h>
      int main()
      { 
          int sum = 0, m;
          do{
              printf("Input m:\n");
              scanf("%d", &m);
              sum = sum + m;
              printf("sum = %d\n", sum);
          }while (m != 0);
          return 0;
      }
#include  <stdio.h>
      int main()
      { 
          int sum = 0, m;
          while (m!=0){
              printf( "Input m:\n");
              scanf("%d", &m);
              if(m!=0)
              {
              sum = sum + m;
              printf("sum = %d\n", sum);
               }else{
              break;
             }
          }
          return 0;
      }
Input m:

1�L

sum = 1

Input m:

2�L

sum = 3

Input m:

3�L

sum = 6

Input m:

4�L

sum = 10

Input m:

0�L
    #include  <stdio.h>
      int main()
      { 
        int i, j, sum = 0, n; 
        scanf("%d",&n);
        for (i=1,j=n; i<=j; i++,j--) 
        {
            if(i!=j) sum = sum + i + j;
			else sum = sum + i;
        }
        printf("sum = %d", sum);
        return 0;
      }
��ҵ���ŵĽ������������ɡ�������ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ������40��Ԫ�Ĳ��֣������3%��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������i����Ӧ���Ž���������
�������н��ʾ��1��
789�L
bonus=78


�������н��ʾ��2��

789516�L

bonus=36342


�����ʽ: "%ld"

�����ʽ��"bonus=%d\n"

#include <stdio.h>
int main(void)
{
	long int i;
	int bonus;
	scanf("%ld",&i);
	if(i<=100000) bonus = i/10;
	else if(i>100000&&i<=200000) bonus = 10000+(i-100000)*3/40;
	else if(i>200000&&i<=400000) bonus = 17500+(i-200000)/20;
	else if(i>400000&&i<=600000) bonus = 27500+(i-400000)*3/100;
	else if(i>600000&&i<=1000000) bonus = 33500+(i-600000)*3/200;
	else bonus = 39500+(i-1000000)/100;
	printf("bonus=%d\n",bonus);

	return 0;
}

#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,count=0,j,i;
	int Num[]={0,0,0,0,0,0,0,0,0,0};
	printf("Please enter the number:\n");
	scanf("%d",&n);
	j=abs(n);
	do{
		count++;
		for(i=0;i<=9;i++){
			if(j%10==i) Num[i]++;
		}
		j=j/10;
	}while(j!=0);
	printf("%d: %d bits\n",n,count);
		for(i=0;i<=9;i++){
			if(Num[i]!=0) printf("%d: %d\n",i,Num[i]);
		}
	return 0;
}
	�������Ĺ����ǽ��ٷ��Ƴɼ�ת��Ϊ5���Ƴɼ������幦���ǣ�����û�������ǷǷ��ַ����߲��ں��������ڵ�����
	�������������a,����102����-45�ȣ����������� Input error!��������ת��Ϊ5���������
	Ŀǰ������ڴ����뽫���޸���ȷ���������������������ʾ��������
   #include<stdio.h>
       int main()
       {
           int score;
           char grade;
           printf("Please input  score:");
           scanf("%d", &score);
           if (score<0||score>100)   
                 printf("Input error!\n");
		   else
		   {
            if (score >= 90) 
                 grade = 'A';
            else if (score >= 80)
                 grade = 'B';   
            else if (score >= 70)
                 grade = 'C';  
            else if (score >= 60)
                 grade = 'D'; 
            else
                 grade = 'E'; 
            printf("grade:%c\n", grade);
		   }
            return 0;
    }
�������н��ʾ��1��

Please input score:

-1�L

Input error!


�������н��ʾ��2��

Please input score:

95�L

grade: A


�������н��ʾ��3��

Please input score:

82�L

grade: B


�������н��ʾ��4��

Please input score:

72�L

grade: C


�������н��ʾ��5��

Please input score:

66�L

grade: D


�������н��ʾ��6��

Please input score:

32�L

grade: E


�������н��ʾ��7��

Please input score:

127�L

Input error!


�����ʽ: "%d"

�����ʽ��

������ʾ��Ϣ��"Please input score:\n"

���������ʾ��Ϣ��"Input error!\n"

�����ʽ��"grade: %c\n" (ע�⣺%cǰ����һ���ո�)


�Ӽ��̼�������һ���ַ����жϸ��ַ���Ӣ����ĸ�������ִ�Сд���������ַ����������ַ���
��������ĸ������Ļ��ʾ It is an English character.����������������Ļ��ʾIt is a digit character. ��
�����������ַ�������Ļ��ʾ��It is other character. 
���������ʾ��1��
Input simple:
b�L
It is an English character.


���������ʾ��2��

Input simple:

6�L

It is a digit character.


���������ʾ��3��

Input simple:

*�L

It is other character.


���������ʾ��4��

Input simple:

A�L

It is an English character.


�����ʽ:  "%c"

�����ʽ��

������Ϣ��ʾ��"Input simple:\n"

Ӣ���ַ��������ʽ��"It is an English character.\n"

���ֵ������ʽ��"It is a digit character.\n"

�����ַ��������ʽ��"It is other character.\n"
   #include<stdio.h>
       int main()
       {
           char ch;
           printf("Input simple:\n");
           ch = getchar();
           if (ch>='a' && ch<='z')   
                 printf("It is an English character.\n");
		   else if (ch>='A' && ch<='Z') 
                 printf("It is an English character.\n");
           else if (ch>='0' && ch<='9')
                 printf("It is a digit character.\n"); 
           else
                 printf("It is other character.\n");
           return 0;
    }
   #include<stdio.h>
       int main()
       {
           int a,b;
           printf("Input :\n");
           scanf("%d",&a);
           b = ++a * ++a * ++a;
		   printf("%d,%d\n",b,a);
           return 0;
	   }
	   �Ӽ���������һ��4λ��������n����д��������Ϊ����2λ��������a��b��
	   ���㲢�����ֺ���������ļӡ������ˡ�������������Ľ����
	   ����n=-4321,���ֺ����������Ϊa,b����a=-43,b=-21��
	   ����������Ҫ��ȷ��С�����2λ��
	   ����ͳ���������Ҫ���ǳ���Ϊ0��������������ֺ�b=0,�������ʾ��Ϣ"The second operater is zero!"


��������н��ʾ��1��

Please input n:

1200�L

12,0

sum=12,sub=12,multi=0

The second operater is zero!


��������н��ʾ��2��

Please input n:

-2304�L

-23,-4

sum=-27,sub=-19,multi=92

dev=5.75,mod=-3


�����ʽ: "%d"

�����ʽ��

������ʾ��Ϣ��"Please input n:\n"

��ֺ�����������������ʽ��"%d,%d\n"

�ӷ����������˷��������ʽ��"sum=%d,sub=%d,multi=%d\n"

����������������ʽ��"dev=%.2f,mod=%d\n"

����Ϊ0����ʾ��Ϣ��"The second operater is zero!\n"
#include <stdio.h>
int main()
{
	int a,b,n;
	float dev;
	printf("Please input n:\n");
	scanf("%d",&n);
	a = n / 100 ;
	b = n % 100 ;
	printf("%d,%d\n",a,b);
	printf("sum=%d,sub=%d,multi=%d\n",a+b,a-b,a*b);
	if(b!=0) {
		dev = (float)a/b;
		printf("dev=%.2f,mod=%d\n",dev,a%b);
	}
	else printf("The second operater is zero!\n");
	return 0;
}
��ݷѰ��ʼ��������㣬�����ط��á����ط��������ֹ��ɣ�

��1��	���أ����أ�1���ﰴ�����ʷѼ��㣨����1�����1������㣩���������ص����������������1�����1������㣩��ȡ���طѣ�

��2��	ͬ�������ʷ�10Ԫ������3Ԫ/���

��3��	����1����������ʡ�����ʼ��������ʷ�10Ԫ������4Ԫ��

��4��	���������������ʼ��������ʷ�ͳһΪ15Ԫ�������ز��֣���ͬ����۸�ͬ��2��������5Ԫ/���3��������6.5Ԫ/���4��������10Ԫ/���


��д���򣬴Ӽ��������ʼ���Ŀ�������������������㲢����˷ѣ�����������2λС����

��ʾ�����ز��ֲ���һ�����1������㡣
��ˣ����������2.3���1���������أ�ʣ���1.3���������أ�����1���ﰴ1������㣬1.3�����ۺ�����Ϊ2���
�������Ӧ����0�������Ų��ܳ���0-4�ķ�Χ��
#include <stdio.h>
int main()
{	
	int a ,w2,p1;
	float w1,p,p2;
	scanf("%d,%f",&a,&w1);
	w2 = (int)w1;
	//printf("%.2f,%d\n",w1,w2);
	if(w2!=w1) w2++;
	//printf("%.2f,%d\n",w1,w2);
	switch(a)
	{
	case 0:
		p1 = 10;
		p2 = 3;
		break;
	case 1:
		p1 = 10;
		p2 = 4;
		break;
	case 2:
		p1 = 15;
		p2 = 5;
		break;
	case 3:
		p1 = 15;
		p2 = 6.5;
		break;
	case 4:
		p1 = 15;
		p2 = 10;
		break;
	default:
		printf("Error in Area\n");
		goto exit;
	}
		if(w2 <=1) p = p1;
		else p = p1+p2*(w2-1);
		printf("Price: %5.2f\n",p);
exit:
	return 0;
}
/*
�������н��ʾ��1��

4,4.5�L

Price: 55.00


�������н��ʾ��2��

5,3.2�L

Error in Area

Price:  0.00


�����ʽ:

�ö��ŷָ����������֣���һ����ʾ���򡢵ڶ�����������"%d,%f"


�����ʽ��

�۸�������ʽ��"Price: %5.2f\n"

����������ʾ��Ϣ��"Error in Area\n"

�Ӽ�������һ��int�͵�������n����֪��0<n<10000������д�����ж�n�����ĸ����䡣
����û���������ݲ���ָ���ķ�Χ�������� "error!"�����磬����265��������������� 100-999��


�������н��ʾ��1��

Please enter the number:

2563�L

2563: 1000-9999


�������н��ʾ��2��

Please enter the number:

156�L

156: 100-999


�������н��ʾ��3��

Please enter the number:

36�L

36: 10-99


�������н��ʾ��4��

Please enter the number:

3�L

3: 0-9


�������н��ʾ��5��

Please enter the number:

10923�L

error!


�����ʽ: "%d"

�����ʽ��

������ʾ��Ϣ��"Please enter the number:\n"

����������жϣ�

"%d: 1000-9999\n"

"%d: 100-999\n"

"%d: 10-99\n"

"%d: 0-9\n"

���������ʾ��Ϣ��"error!\n"
#include <stdio.h>
int main()
{	
	int n;
	printf("Please enter the number:\n");
	scanf("%d",&n);
	if(n/1000>=1&&n/1000<=9) printf("%d: 1000-9999\n",n);
	else if(n/100>=1&&n/100<=9) printf("%d: 100-999\n",n);
		else if(n/10>=1&&n/10<=9) printf("%d: 10-99\n",n);
			else if(n%10==0) printf("%d: 0-9\n",n);
			else printf("error!\n");
			return 0;
}

    #include <stdio.h>
    int main( )
    { 
        int i,n=0;
        for(i=2;i<5;i++)
          { 
            do 
            { 
               if(i%3) continue;
               n++;
            }while(!i);
           n++;
         }
       printf("n=%d\n",n);
       return 0;
    }
    #include <stdio.h>
    int main( )
    { 
        int x=0,y=5,z=3;
        while(z-->0 && ++x<5) 
        {
            y=y-1;
        }
        printf("%d,%d,%d\n",x,y,z);
        return 0;
    }
	�Ӽ�������һ����������(int��)����д�����жϸ��������м�λ������������������ֵĸ�����
	���磬�Ӽ�����������16644,����������5λ��������1��1,2��6,2��4��

�������н��ʾ��1��
Please enter the number:

12226�L

12226: 5 bits

1: 1

2: 3

6: 1


�������н��ʾ��2��

Please enter the number:

-12243�L

-12243: 5 bits

1: 1

2: 2

3: 1

4: 1


�����ʽ: "%d"


�����ʽ��

������ʾ��Ϣ��"Please enter the number:\n"

�жϸ��������м�λ��"%d: %d bits\n"

��������0�ĸ�����"0: %d\n"

��������1�ĸ�����"1: %d\n"

��������2�ĸ�����"2: %d\n"

��������3�ĸ�����"3: %d\n"

��������4�ĸ�����"4: %d\n"

��������5�ĸ�����"5: %d\n"

��������6�ĸ�����"6: %d\n"

��������7�ĸ�����"7: %d\n"

��������8�ĸ�����"8: %d\n"

��������9�ĸ�����"9: %d\n"*/



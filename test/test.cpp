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
还原算术表达式（4分）

题目内容：

编写程序求以下算式中XYZ的值，其中两数XYZ与YZZ相加的和n（99<n<1000）的值要求从键盘输入。


程序运行结果示例1：

Input n(n<1000):

532↙

X=3,Y=2,Z=1


程序运行结果示例2：

Input n(n<1000):

977↙

Invalid


输入格式: "%d" 

输出格式：

输入提示："Input n(n<1000):\n"

输出格式："X=%d,Y=%d,Z=%d\n"

计算不成功(无解)的输出提示："Invalid\n"


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


寻找中位数v1.0（4分）

题目内容：

编写一个函数返回三个整数中的中间数。函数原型为： int mid(int a, int b, int c); 

函数功能是返回a，b，c三数中大小位于中间的那个数。

输入格式: "%d%d%d"

输出格式："The result is %d\n"

输入样例1：

12 6 18↙

输出样例1：
The_result_is_12

输入样例2：
-9 7 -2↙

输出样例2：

The_result_is_-2

注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！

（注意：在输出中，“_”代表空格，如果直接将上段示例粘贴到代码中，应将其替换为空格。）
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



魔术师猜数（4分）

题目内容：

在一种室内互动游戏中，魔术师要每位观众心里想一个三位数abc（a、b、c分别是百位、十位和个位数字），
然后魔术师让观众心中记下acb、bac、bca、cab、cba五个数以及这5个数的和值。只要观众说出这个和是多少，
则魔术师一定能猜出观众心里想的原数abc是多少。例如，观众甲说他计算的和值是1999，则魔术师立即说出他想的数是443，
而观众乙说他计算的和值是1998，则魔术师说：“你算错了！”。请编程模拟这个数字魔术游戏。要求用函数实现，函数原型为：

int Magic(int m);

其中形参m代表观众计算的和值。


输入格式:"%d"

输出格式：

观众计算错误，魔术师给出的结论："The sum you calculated is wrong!\n"

观众计算正确，魔术师给出的结论："The number is %d\n"

输入样例1：

1998↙

输出样例1：
The_sum_you_calculated_is_wrong!

输入样例2：

1999↙

输出样例2：
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


递归法计算游戏人员的年龄（4分）

题目内容：

有n个人围坐在一起，问第n个人多大年纪，他说比第n-1个人大2岁；问第n-1个人，他说比第n-2个人大2岁,.....,问第3个人，他说比第2个人大2岁；
问第2个人，他说比第1个人大2岁。第1个人说自己10岁，问第n个人多大年纪。

递归函数原型：unsigned int ComputeAge(unsigned int n);

提示：

计算年龄的递归公式为：


输入格式: "%u"

输出格式： "The person's age is %u\n"



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

编程输出某年某月有多少天（考虑到闰年）。（5分）

题目内容：

从键盘输入一个年份和月份，输出该月有多少天（考虑闰年），用switch语句编程。


程序运行结果示例1：

Input year,month:

2015,3↙

31 days


程序运行结果示例2：

Input year,month:

2015,4↙

30 days


程序运行结果示例3：

Input year,month:

2016,2↙

29 days


程序运行结果示例4：

Input year,month:

2014,2↙

28 days


程序运行结果示例5：

Input year,month:

2015,13↙

Input error!

输入提示信息："Input year,month:\n"

输入格式:  "%d,%d"

输出格式：

输入错误时的提示信息："Input error!\n"

输出格式：

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


n块砖( 27<n<=77 )，36人搬，男搬4，女搬3，两个小孩抬一块砖，要求一次搬完，问男人、女人和小孩各需多少人？
请用穷举法编程求解,n的值要求从键盘输入。输出结果按照男人数量升序给出（见下面示例3）。
程序的运行结果示例1：
Input n(27<n<=77):
28↙
men=0,women=4,children=32
程序的运行结果示例2：
Input n(27<n<=77):
36↙
men=3,women=3,children=30
程序的运行结果示例3：
Input n(27<n<=77):
60↙
men=2,women=14,children=20
men=7,women=7,children=22
men=12,women=0,children=24
输入提示： "Input n(27<n<=77):\n"
输入格式: "%d"  
输出格式："men=%d,women=%d,children=%d\n"
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
编程计算a+aa+aaa+…+aa…a（n个a）的值（4分）
题目内容：
编程计算 a+aa+aaa+…+aa…a（n个a）的值，n和a的值由键盘输入。例如，当n=4,a=2,表示计算2+22+222+2222的值。
程序运行结果示例：
Input a,n:
2,4↙
sum=2468
输入提示信息："Input a,n:\n"
输入格式:   "%d,%d"（先输入a，后输入n）
输出格式：  "sum=%ld\n"
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
程序改错-3（4分）

题目内容：

从键盘任意输入两个符号各异的整数，直到输入的两个整数满足要求为止，然后打印这两个数。请通过测试找出下面这个程序存在的问题（不止一个问题哦），并改正。同时用下面给出的运行结果示例检查修改后的程序。

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


程序正确的运行结果示例：

Input x1, x2:

a,s↙

Input x1, x2:

a,1↙

Input x1, x2:

2,s↙

Input x1, x2:

1,2↙

Input x1, x2:

-1,-2↙

Input x1, x2:

0,3↙

Input x1, x2:

1.2,3.4↙

Input x1, x2:

1.2,5↙

Input x1, x2:

-1,3↙

x1=-1,x2=3



输入格式: "%d,%d"

输出格式：

输入提示信息："Input x1, x2:\n"

输出： "x1=%d,x2=%d\n"
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
/*计算球的反弹高度（4分）

题目内容：

一个球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下并反弹......，
求它在第5次和第10次落地时，分别共经过了多少米？第5次和第10次反弹分别是多高？
要求计算结果保留到小数点后3位。用户从键盘输入想要计算的第n次（n<=15）。


程序运行结果示例1：

Input:

5↙

5 times:

287.500

3.125


程序运行结果示例2：

Input:

10↙

10 times:

299.609

0.098


输入格式: "%d"

输出格式：

反弹次数："%d times:\n"

第n次反弹共经过多少米："%.3f\n"

第n次的反弹高度："%.3f\n"

输入提示信息："Input:\n"
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
检测输入数据中奇数和偶数的个数（4分）

题目内容：

从键盘输入一系列正整数，输入-1表示输入结束（-1本身不是输入的数据）。
编写程序判断输入数据中奇数和偶数的个数。
如果用户输入的第一个数据就是-1，则程序输出"over!"。
否则。用户每输入一个数据，输出该数据是奇数还是偶数，直到用户输入-1为止，分别统计用户输入数据中奇数和偶数的个数。


程序运行结果示例1：

Please enter the number:

1↙

1:odd

5↙

5:odd

8↙

8:even

9↙

9:odd

12↙

12:even

17↙

17:odd

-1↙

The total number of odd is 4

The total number of even is 2


程序运行结果示例2：

Please enter the number:

-1↙

over!

The total number of odd is 0

The total number of even is 0


输入格式: "%d"


输出格式：

输入提示信息："Please enter the number:\n"

用户输入的第一个数据就是-1，输出格式："over!\n"

奇数的输出格式："%d:odd\n"

偶数的输出格式："%d:even\n"

输入数据中奇数的个数统计："The total number of odd is %d\n"

输入数据中偶数的个数统计："The total number of even is %d\n"
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


从键盘输入一个整型数据(int型)，编写程序判断该整数共有几位。例如，从键盘输入整数16644,该整数共有5位。


程序运行结果示例1：

Please enter the number:

21125↙

21125: 5 bits


程序运行结果示例2：

Please enter the number:

-12234↙

-12234: 5 bits


输入格式: "%d"

输出格式：

输入提示信息："Please enter the number:\n"

判断该整数共有几位: "%d: %d bits\n"
从键盘输入6位仅由数字0~9组成的密码。用户每输入一个密码并按回车键后，程序给出判断：如果是数字，则原样输出该数字，并提示用户目前已经输入了几位密码，同时继续输入下一位密码；否则，程序提示"error"，并让用户继续输入下一位密码。直到用户输入的密码全部是数字为止。

以下为程序的运行结果示例：

Input your password:

1↙

1, you have enter 1-bits number

6↙

6, you have enter 2-bits number

a↙

error

d↙

error

4↙

4, you have enter 3-bits number

6↙

6, you have enter 4-bits number

8↙

8, you have enter 5-bits number

2↙

2, you have enter 6-bits number


输入格式:

数字字符输入格式："%c"


输出格式：

输入提示信息："Input your password:\n"

如果输入的是数字，输出格式为："%c, you have enter %d-bits number\n"

如果输入的不是数字，输出提示信息："error\n"
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

1↙

sum = 1

Input m:

2↙

sum = 3

Input m:

3↙

sum = 6

Input m:

4↙

sum = 10

Input m:

0↙
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
企业发放的奖金根据利润提成。利润低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时，高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%，
高于100万元时，超过100万元的部分按1%提成，从键盘输入当月利润i，求应发放奖金总数？
程序运行结果示例1：
789↙
bonus=78


程序运行结果示例2：

789516↙

bonus=36342


输入格式: "%ld"

输出格式："bonus=%d\n"

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
	下面代码的功能是将百分制成绩转换为5分制成绩，具体功能是：如果用户输入的是非法字符或者不在合理区间内的数据
	（例如输入的是a,或者102，或-45等），则程序输出 Input error!，否则将其转换为5分制输出。
	目前程序存在错误，请将其修改正确。并按照下面给出的运行示例检查程序。
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
程序运行结果示例1：

Please input score:

-1↙

Input error!


程序运行结果示例2：

Please input score:

95↙

grade: A


程序运行结果示例3：

Please input score:

82↙

grade: B


程序运行结果示例4：

Please input score:

72↙

grade: C


程序运行结果示例5：

Please input score:

66↙

grade: D


程序运行结果示例6：

Please input score:

32↙

grade: E


程序运行结果示例7：

Please input score:

127↙

Input error!


输入格式: "%d"

输出格式：

输入提示信息："Please input score:\n"

输入错误提示信息："Input error!\n"

输出格式："grade: %c\n" (注意：%c前面有一个空格)


从键盘键入任意一个字符，判断该字符是英文字母（不区分大、小写）、数字字符还是其它字符。
若键入字母，则屏幕显示 It is an English character.；若键入数字则屏幕显示It is a digit character. ；
若输入其它字符，则屏幕显示：It is other character. 
程序的运行示例1：
Input simple:
b↙
It is an English character.


程序的运行示例2：

Input simple:

6↙

It is a digit character.


程序的运行示例3：

Input simple:

*↙

It is other character.


程序的运行示例4：

Input simple:

A↙

It is an English character.


输入格式:  "%c"

输出格式：

输入信息提示："Input simple:\n"

英文字符的输出格式："It is an English character.\n"

数字的输出格式："It is a digit character.\n"

其它字符的输出格式："It is other character.\n"
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
	   从键盘上输入一个4位数的整数n，编写程序将其拆分为两个2位数的整数a和b，
	   计算并输出拆分后的两个数的加、减、乘、除和求余运算的结果。
	   例如n=-4321,设拆分后的两个整数为a,b，则a=-43,b=-21。
	   除法运算结果要求精确到小数点后2位。
	   求余和除法运算需要考虑除数为0的情况，即如果拆分后b=0,则输出提示信息"The second operater is zero!"


程序的运行结果示例1：

Please input n:

1200↙

12,0

sum=12,sub=12,multi=0

The second operater is zero!


程序的运行结果示例2：

Please input n:

-2304↙

-23,-4

sum=-27,sub=-19,multi=92

dev=5.75,mod=-3


输入格式: "%d"

输出格式：

输入提示信息："Please input n:\n"

拆分后的两个整数的输出格式："%d,%d\n"

加法、减法、乘法的输出格式："sum=%d,sub=%d,multi=%d\n"

除法和求余的输出格式："dev=%.2f,mod=%d\n"

除数为0的提示信息："The second operater is zero!\n"
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
快递费按邮件重量计算，由起重费用、续重费用两部分构成：

（1）	起重（首重）1公斤按起重资费计算（不足1公斤，按1公斤计算），超过首重的重量，按公斤（不足1公斤，按1公斤计算）收取续重费；

（2）	同城起重资费10元，续重3元/公斤；

（3）	寄往1区（江浙两省）的邮件，起重资费10元，续重4元；

（4）	寄往其他地区的邮件，起重资费统一为15元。而续重部分，不同区域价格不同：2区的续重5元/公斤，3区的续重6.5元/公斤，4区的续重10元/公斤。


编写程序，从键盘输入邮件的目的区域编码和重量，计算并输出运费，计算结果保留2位小数。

提示：续重部分不足一公斤，按1公斤计算。
因此，如包裹重量2.3公斤：1公斤算起重，剩余的1.3公斤算续重，不足1公斤按1公斤计算，1.3公斤折合续重为2公斤。
如果重量应大于0、区域编号不能超出0-4的范围。
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
程序运行结果示例1：

4,4.5↙

Price: 55.00


程序运行结果示例2：

5,3.2↙

Error in Area

Price:  0.00


输入格式:

用逗号分隔的两个数字，第一个表示区域、第二个是重量："%d,%f"


输出格式：

价格的输出格式："Price: %5.2f\n"

区域错误的提示信息："Error in Area\n"

从键盘输入一个int型的正整数n（已知：0<n<10000），编写程序判断n落在哪个区间。
如果用户输入的数据不在指定的范围里，程序输出 "error!"。例如，输入265，则该数属于区间 100-999。


程序运行结果示例1：

Please enter the number:

2563↙

2563: 1000-9999


程序运行结果示例2：

Please enter the number:

156↙

156: 100-999


程序运行结果示例3：

Please enter the number:

36↙

36: 10-99


程序运行结果示例4：

Please enter the number:

3↙

3: 0-9


程序运行结果示例5：

Please enter the number:

10923↙

error!


输入格式: "%d"

输出格式：

输入提示信息："Please enter the number:\n"

输出的区间判断：

"%d: 1000-9999\n"

"%d: 100-999\n"

"%d: 10-99\n"

"%d: 0-9\n"

输入错误提示信息："error!\n"
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
	从键盘输入一个整型数据(int型)，编写程序判断该整数共有几位，并输出包含各个数字的个数。
	例如，从键盘输入整数16644,该整数共有5位，其中有1个1,2个6,2个4。

程序运行结果示例1：
Please enter the number:

12226↙

12226: 5 bits

1: 1

2: 3

6: 1


程序运行结果示例2：

Please enter the number:

-12243↙

-12243: 5 bits

1: 1

2: 2

3: 1

4: 1


输入格式: "%d"


输出格式：

输入提示信息："Please enter the number:\n"

判断该整数共有几位："%d: %d bits\n"

包含数字0的个数："0: %d\n"

包含数字1的个数："1: %d\n"

包含数字2的个数："2: %d\n"

包含数字3的个数："3: %d\n"

包含数字4的个数："4: %d\n"

包含数字5的个数："5: %d\n"

包含数字6的个数："6: %d\n"

包含数字7的个数："7: %d\n"

包含数字8的个数："8: %d\n"

包含数字9的个数："9: %d\n"*/



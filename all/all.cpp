1.题目内容：

编程并输出半径r=5.3的半圆弧的周长及该半圆弧与直经围成的半圆的面积，的取值为3.14159。要求半径r和必须利用宏常量表示。

#include  <stdio.h>
#define PI 3.14159
main()
{
         double r = 5.3 , l , S ;
         l = r * PI;
	S = PI * r * r / 2;
	printf("Area=%f\n",S);
	printf("circumference=%f\n",l);
	return 0;

}




2.计算长方体体积（3分）

题目内容：

编程并输出长1.2、宽4.3、高6.4的长方体的体积。要求长方体的长、宽、高必须利用const常量表示。




#include  <stdio.h>
main()
{
    const double a = 1.2 , b = 4.3 , h = 6.4 ;
	printf("volume=%.3f\n",a*b*h);
	return 0;

}


3.输出逆序数（3分）

题目内容：

从键盘任意输入一个3位整数，编程计算并输出它的逆序数（忽略整数前的正负号）。例如，输入-123，则忽略负号，由123分离出其百位1、十位2、个位3，然后计算3*100+2*10+1 = 321，并输出321。

提示：

1. 从键盘输入数据可以使用函数scanf()。例如，scanf("%d", &x); 表示从键盘输入整数并存入整形变量x中。

2. 利用取绝对值函数 fabs()忽略输入数据的负号。fabs(x)表示计算变量x的绝对值。

3.使用数学函数，需要在程序开头加上编译预处理指令 #include <math.h>


#include <stdio.h>
#include <math.h>
int main()
{
	int x,y, a,b,c;
	printf("Input x:\n");
	scanf("%d",&x);
	x = fabs(x);
	a = x / 100;
	b = (x-100 * a) / 10;
	c = x % 10;
        y = c * 100 +b *10 +a;
	printf("y=%d\n",y);
	return 0;
}


4.计算总分和平均分（3分）

题目内容：

小明本学期共有5门课程，分别是英语、语文、数学、历史和音乐。5科的期中考试成绩分别是86分、74分、92分、77分、82分，期末考试成绩分别是81分、87分、90分、62分、88分。已知期中和期末考试成绩分别占总成绩的30%和70%。定义相应的变量存放各科成绩，并计算出小明5门课程的总分和平均分。要求平均分输出两种形式：带2位小数的浮点数形式和不带小数的整数形式。要求总分输出带2位小数的浮点数形式。

提示：

输出不带小数的平均分的整数形式可以使用强制类型转换。


#include <stdio.h>
 main()
{
	int a1 = 86 , a2 = 81 ,
		b1 = 74 , b2 = 87 ,
		c1 = 92 , c2 = 90 ,
		d1 = 77 , d2 = 62 ,
		e1 = 82 , e2 = 88 ,
		t1 , t2 ,f2 ;
	float t , f1 ;
	t1 = a1 + b1 + c1 + d1 + e1 ;
	t2 = a2 + b2 + c2 + d2 + e2 ;
	t = t1 * 0.3 + t2 * 0.7;
	printf("total=%.2f\n",t);
	f1 = t / 5 ;
	f2 = (int)f1;
	printf("average=%.2f\n",f1);
	printf("average=%d\n",f2);
	return 0;
}


5.计算存款本利之和（3分）

题目内容：

设银行定期存款的年利率rate为2.25%，已知存款期为n年，存款本金为capital元，试编程计算并输出n年后的本利之和deposit。

提示：从键盘输入数据可以使用函数scanf()。本例中为scanf("%lf,%d,%lf", &rate, &n, &capital);


#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double capital,rate,deposit;
	printf("Please enter rate, year, capital:\n");
	scanf("%lf,%d,%lf", &rate, &n, &capital);
	deposit = capital * pow(1+rate,n) ;
	printf("deposit=%.3f\n",deposit);
	return 0;
}

6.数位拆分v1.0（3分）

题目内容：

现有一个4位数的正整数n=4321，编写程序将其拆分为两个2位数的正整数43和21，计算并输出拆分后的两个数的加、减、乘、除和求余的结果。例如n=4321,设拆分后的两个整数为a,b，则a=43,b=21。除法运算结果要求精确到小数点后2位。


#include <stdio.h>
int main()
{	float c;
	int n = 4321 , a , b ;
	a = n / 100 ;
	b = n % 100 ;
	printf("a=%d,b=%d\n",a,b);
	printf("a+b=%d\n",a+b);
	printf("a-b=%d\n",a-b);
	printf("a*b=%d\n",a*b);
	c = (float)a/b;
	printf("a/b=%.2f\n",c);
	printf("a%%b=%d\n",a%b);
	return 0;
}

7.求正/负余数（3分）

题目内容：

在C语言中，如果被除数为负值，则对一个正数求余的时候，求出的余数也是一个负数。
在某些场合下，我们需要求出它的正余数，例如：在C语言中有(-11)%5=-1，但是有时我们希望得到的余数不是-1，而是4。请编写程序计算(-11)%5的负余数和正余数。


#include <stdio.h>
int main(){
	int a = -11 , b =5 , y ;
	y = a % b ;
	printf("negative: %d\n",y);
	printf("positive: %d\n",y+5);
	return 0;
}

8.身高预测（3分）

题目内容：

已知小明（男孩）爸爸的身高是175厘米，妈妈的身高是162厘米。小红（女孩）爸爸的身高是169厘米，妈妈的身高是153厘米，
按照下面公式，预测并输出小明和小红的遗传身高（不考虑后天因素）。

         男性成人时身高=(faHeight + moHeight)×0.54cm

         女性成人时身高=(faHeight×0.923 + moHeight)/2cm


		 #include <stdio.h>
int main(){
	int mfh = 175 , mmh = 162 ,
		hfh = 169 , hmh = 153 ,
		mh , hh ;
	double m, h;
	m = (mfh + mmh)*0.54;
	mh = (int)m;
	h = (hfh*0.923 + hmh)/2;
	hh = (int)h;
	printf("Height of xiao ming:%d\n",mh);
	printf("Height of xiao hong:%d\n",hh);
	return 0 ;
}

9.求一元二次方程的根（3分）

题目内容：

根据下面给出的求根公式，计算并输出一元二次方程的两个实根，要求精确到小数点后4位。


#include <stdio.h>
#include <math.h>
int main(){
     int a = 2 , b = 3 , c =1;
     double x1,x2,o;
	 o = sqrt(b*b-4*a*c);
     x1 = - (b-o)/(2*a);
     x2 = - (b+o)/(2*a);
     printf("x1=%.4f\nx2=%.4f\n",x1,x2);
     return 0;
}

10.计算两个数的平方和（3分）

题目内容：

从键盘读入两个实数，编程计算并输出它们的平方和，要求使用数学函数pow(x,y)计算平方值，输出结果保留2位小数。

#include <stdio.h>
#include <math.h>
int main(){
	float x , y , r;
	printf("Please input x and y:\n");
	scanf("%f,%f",&x,&y);
	r = pow(x,2) + pow(y,2) ;
	printf("Result=%.2f\n",r);
	return 0;
}

11.逆序数的拆分计算（3分）

题目内容：

从键盘输入一个4位数的整数，编程计算并输出它的逆序数（忽略整数前的正负号）。
例如，输入-1234，忽略负号，由1234分离出其千位1、百位2、十位3、个位4，然后计算4*1000+3*100+2*10+1 = 4321，并输出4321
。再将得到的逆序数4321拆分为两个2位数的正整数43和21，计算并输出拆分后的两个数的平方和的结果。

#include <stdio.h>
#include <math.h>
int main(){
	int x , a , b, r ;
	int y1,y2,y3,y4,y;
	printf("Input x:\n");
	scanf("%d",&x);
	x = fabs(x);
	y1 = x/1000;
	y2 = x/100-y1*10;
	y4 = x%10;
	y3 = (x%100-y4)/10;
	y = y4*1000+y3*100+y2*10+y1;
	printf("y=%d\n",y);
	a = y / 100 ;
	b = y % 100;
	printf("a=%d,b=%d\n",a,b);
	r = pow(a,2) + pow(b,2) ;
	printf("result=%d\n",r);
	return 0;
}

12.拆分英文名（3分）

题目内容：

从键盘输入某同学的英文名（小写输入，假设学生的英文名只包含3个字母。如: tom），
编写程序在屏幕上输出该同学的英文名，且首字母大写（如: Tom）。
同时输出组成该英文名的所有英文字符在26个英文字母中的序号。

13.计算体指数（3分）

题目内容：

从键盘输入某人的身高（以厘米为单位，如174cm）和体重（以公斤为单位，如70公斤），将身高（以米为单位，如1.74m）和体重（以斤为单位，如140斤）输出在屏幕上，并按照以下公式计算并输出体指数，要求结果保留到小数点后2位。

假设体重为w公斤，身高为h米，则体指数的计算公式为：

               #include <stdio.h>
int main(){
	int w ,ht;
	float h,t ;
	printf("Input weight, height:\n");
	scanf("%d,%d",&w,&ht);
	printf("weight=%d\n",w*2);
	h = (float)ht/100;
	printf("height=%.2f\n",h);
        t = h*h;
        t = (float)w/t;
	printf("t=%.2f\n",t);
	return 0;
}

14.日期显示（3分）

题目内容：

编写一个程序, 接收用户录入的日期信息并且将其显示出来. 其中, 输入日期的形式为月/日/年(mm/dd/yy), 输出日期的形式为年月日(yy.mm.dd)。

#include <stdio.h>
int main(){
	int mm , dd , yy ;
	printf("Enter a date (mm/dd/yy):\n");
	scanf("%d/%d/%d", &mm , &dd , &yy);
	printf("You entered the date: %04d.%02d.%02d\n",yy,mm,dd);
	return 0;
}

15.产品信息格式化（3分）

题目内容：

编写一个程序, 对用户录入的产品信息进行格式化。

以下为程序的运行结果示例：

Enter item number:

385↙

Enter unit price:

12.5↙

Enter purchase date (mm/dd/yy):

12/03/2015↙

Item      Unit     Purchase

385      $ 12.50    12032015

#include <stdio.h>
int main(){
	int mm , dd , yy , i ;
	float p ;
	printf("Enter item number:\n");
	scanf("%d",&i);
	printf("Enter unit price:\n");
	scanf("%f",&p);
	printf("Enter purchase date (mm/dd/yy):\n");
	scanf("%d/%d/%d", &mm , &dd , &yy);
	printf("Item      Unit     Purchase\n");
	printf("%-9d$ %-9.2f%02d%02d%02d\n",i,p,mm,dd,yy);
	return 0;
}

16.数位拆分v2.0（4分）

题目内容：

从键盘上输入一个4位数的整数n，编写程序将其拆分为两个2位数的整数a和b，计算并输出拆分后的两个数的加、减、乘、除和求余运算的结果。
例如n=-4321,设拆分后的两个整数为a,b，则a=-43,b=-21。除法运算结果要求精确到小数点后2位。
求余和除法运算需要考虑除数为0的情况，即如果拆分后b=0,则输出提示信息"The second operater is zero!"

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

17.快递费用计算（4分）

题目内容：

上海市的某快递公司根据投送目的地距离公司的远近，将全国划分成5个区域：

 

0区
	

1区
	

2区
	

3区
	

4区

同城
	

临近两省
	

1500公里（含）以内
	

1500——2500公里
	

2500公里以上

上海
	

江苏，浙江
	

北京，天津，河北，辽宁，河南，安微，陕西，湖北，江西，湖南，福建，广东，山西。
	

吉林，辽宁，甘肃，四川，重庆，青海，广西，云南，海南，内蒙古，黑龙江，贵州。
	

新疆，西藏。



快递费按邮件重量计算，由起重费用、续重费用两部分构成：

（1）	起重（首重）1公斤按起重资费计算（不足1公斤，按1公斤计算），超过首重的重量，按公斤（不足1公斤，按1公斤计算）收取续重费；

（2）	同城起重资费10元，续重3元/公斤；

（3）	寄往1区（江浙两省）的邮件，起重资费10元，续重4元；

（4）	寄往其他地区的邮件，起重资费统一为15元。而续重部分，不同区域价格不同：2区的续重5元/公斤，3区的续重6.5元/公斤，4区的续重10元/公斤。


编写程序，从键盘输入邮件的目的区域编码和重量，计算并输出运费，计算结果保留2位小数。

提示：续重部分不足一公斤，按1公斤计算。因此，如包裹重量2.3公斤：1公斤算起重，剩余的1.3公斤算续重，不足1公斤按1公斤计算，1.3公斤折合续重为2公斤。如果重量应大于0、区域编号不能超出0-4的范围。

#include <stdio.h>
int main()
{	
	int a ,w2,p1;
	float w1,p,p2;
	scanf("%d,%f",&a,&w1);
	w2 = (int)w1;
	if(w2!=w1) w2++;
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
exit:
		printf("Price: %5.2f\n",p);
	return 0;
}

18.数据区间判断（6分）

题目内容：

从键盘输入一个int型的正整数n（已知：0<n<10000），编写程序判断n落在哪个区间。如果用户输入的数据不在指定的范围里，程序输出 "error!"。例如，输入265，则该数属于区间 100-999。


#include <stdio.h>
int main()
{	
	int n;
	printf("Please enter the number:\n");
	scanf("%d",&n);
	if(n>=1000&&n<=9999)  {printf("%d: 1000-9999\n",n);}
	    else if(n>=100&&n<=999) { printf("%d: 100-999\n",n);}
		else if(n>=10&&n<=99) {printf("%d: 10-99\n",n);}
			else if(n>0&&n<=9) {printf("%d: 0-9\n",n);}
			    else {printf("error!\n");}
			return 0;
}

19.计算一元二次方程的根v2.0（4分）

题目内容：

根据下面给出的求根公式，计算并输出一元二次方程的两个实根，要求精确到小数点后4位。其中a，b，c的值由用户从键盘输入。如果用户输入的系数不满足求实根的要求，输出错误提示 "error!"。


#include <stdio.h>
#include <math.h>
int main(){
     float a ,b,c;
     double x1,x2,o;
     printf("Please enter the coefficients a,b,c:\n");
     scanf( "%f,%f,%f",&a,&b,&c);
     if((b*b-4*a*c)<0) printf("error!\n");
     else
    {
	 o = sqrt(b*b-4*a*c);
     x1 = - (b-o)/(2*a);
     x2 = - (b+o)/(2*a);
     printf("x1=%7.4f, x2=%7.4f\n",x1,x2);
     }
     return 0;
}

20.检测用户错误输入（4分）

题目内容：

根据scanf()的返回值判断scanf()是否成功读入了指定的数据项数，使程序在用户输入123a时，能输出如下运行结果：

123a↙

Input error!

#include <stdio.h>
    int main()
    {
		int a, b,n;
		n = scanf("%d %d",&a,&b);
		if(n==2)
		printf("a = %d, b = %d\n",a,b);
		else printf("Input error!");
		return 0 ;
	}

21.闰年判断（6分）

题目内容：

从键盘任意输入一个公元年份（大于等于1），判断它是否是闰年。若是闰年输出“Yes”，否则输出“No”。要求对输入数据进行合法性判断。

已知符合下列条件之一者是闰年：

（1）能被4整除，但不能被100整除；

（2）能被400整除。


#include <stdio.h>
    int main()
    {
		int y,n,t;
		n = scanf("%d",&y);
		if(n!=1||y<1)printf("Input error!\n");
		else if(y%400==0) printf("Yes\n");
		else if(y%4==0&&y%100!=0) printf("Yes\n");
		else printf("No\n");
		return 0 ;
	}

22.程序改错v1.0（7分）

题目内容：

下面代码的功能是将百分制成绩转换为5分制成绩，具体功能是：如果用户输入的是非法字符或者不在合理区间内的数据（例如输入的是a,或者102，或-45等），则程序输出 Input error!，否则将其转换为5分制输出。目前程序存在错误，请将其修改正确。并按照下面给出的运行示例检查程序。

#include<stdio.h>
       int main()
       {
           int score;
           char grade;
           printf("Please input score:\n");
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
            printf("grade: %c\n", grade);
		   }
            return 0;
    }

23.字符类型判断（4分）

题目内容：

从键盘键入任意一个字符，判断该字符是英文字母（不区分大、小写）、数字字符还是其它字符。

若键入字母，则屏幕显示 It is an English character.；若键入数字则屏幕显示It is a digit character. ；若输入其它字符，则屏幕显示：It is other character. 

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

24.判断一个整型数据有几位v2.0（4分）

题目内容：

从键盘输入一个整型数据(int型)，编写程序判断该整数共有几位，并输出包含各个数字的个数。例如，从键盘输入整数16644,该整数共有5位，其中有1个1,2个6,2个4。


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

25.奖金计算（6分）

题目内容：

企业发放的奖金根据利润提成。利润低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时，高于40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，
高于100万元时，超过100万元的部分按1%提成，从键盘输入当月利润i，求应发放奖金总数？

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

26.程序修改—1（4分）

题目内容：

修改下面这个程序使其快速计算1+2+3……+n的值，n从键盘输入。并按照下面给出的运行示例检查程序。

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

27.程序修改—2（4分）

题目内容：

修改下面这个用do-while语句实现的程序，改用while语句实现，并对比其优缺点。

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
          while (m != 0){
              printf("Input m:\n");
              scanf("%d", &m);
              sum = sum + m;
              printf("sum = %d\n", sum);
          }
          return 0;
      }

28.序改错-1（4分）

题目内容：

我国古代的《张丘建算经》中有这样一道著名的百鸡问题：“鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一。百钱买百鸡，问鸡翁、母、雏各几何？”
其意为：公鸡每只5元，母鸡每只3元，小鸡3只1元。用100元买100只鸡，问公鸡、母鸡和小鸡各能买多少只？
目前程序运行结果有误，请问为什么会比正确答案多出三个解？不仅要找出错误和修正错误，还要求利用以前学过的知识分析错误的原因。

#include <stdio.h>
      int main()
      {
          int x, y, z;
          for (x=0; x<=20; x++)
          {
              for (y=0; y<=33; y++)
              {
                  z = 100 - x - y;
                  if (5*x + 3*y + (float)z/3 == 100)
                  {
                      printf("x=%d, y=%d, z=%d\n", x, y, z);
                  }
              }
          }
          return 0;
      }
29.从键盘任意输入一个正整数，编程判断它是否是素数，若是素数，输出“Yes!”，否则输出“No！”。已知负数、0和1都不是素数。请找出下面程序的错误并改正之，同时按照给出的运行示例检查修改后的程序。

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

30.程序改错-3（4分）

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


#include <stdio.h>
      int main()
      {
        int x1, x2,i;
        do{
          printf("Input x1, x2:");
          i=scanf("%d,%d", &x1, &x2);
		  getchar();
        }while (x1*x2>0||(i!=2)||!x1||!x2);
        printf("x1=%d,x2=%d\n", x1, x2);
        return 0;
      }

31.6位密码输入检测（4分）

题目内容：

从键盘输入6位仅由数字0~9组成的密码。用户每输入一个密码并按回车键后，程序给出判断：
如果是数字，则原样输出该数字，并提示用户目前已经输入了几位密码，同时继续输入下一位密码；
否则，程序提示"error"，并让用户继续输入下一位密码。直到用户输入的密码全部是数字为止。

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
	int num=0;
	char i;
	while(num<6)
	{
		printf("Input your password:\n");
		scanf("%c",&i);
		//getchar();
		if(i>='0'&&i<='9') printf("%c, you have enter %d-bits number\n",i,++num);
		else printf("error\n");
	}
	return 0;
}

32.判断一个整型数据有几位v1.0（4分）

题目内容：

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


33.检测输入数据中奇数和偶数的个数（4分）

题目内容：

从键盘输入一系列正整数，输入-1表示输入结束（-1本身不是输入的数据）。编写程序判断输入数据中奇数和偶数的个数。如果用户输入的第一个数据就是-1，则程序输出"over!"。否则。用户每输入一个数据，输出该数据是奇数还是偶数，直到用户输入-1为止，分别统计用户输入数据中奇数和偶数的个数。


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

34.计算球的反弹高度（4分）

题目内容：

一个球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下并反弹......，求它在第5次和第10次落地时，分别共经过了多少米？第5次和第10次反弹分别是多高？要求计算结果保留到小数点后3位。用户从键盘输入想要计算的第n次（n<=15）。


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

35.猴子吃桃程序_扩展1（4分）

题目内容：

猴子第一天摘了若干个桃子，吃了一半，不过瘾，又多吃了1个。第二天早上将剩余的桃子又吃掉一半，并且又多吃了1个。此后每天都是吃掉前一天剩下的一半零一个。到第n天再想吃时，发现只剩下1个桃子，问第一天它摘了多少桃子？为了加强交互性，由用户输入不同的天数n进行递推，即假设第n天的桃子数为1。


程序的运行结果示例1：

Input days:

5↙

x=46


程序的运行结果示例2：

Input days:

10↙

x=1534


输入格式: "%d"


输出格式：

输入提示信息："Input days:\n"

输出："x=%d\n"

36.猴子吃桃程序_扩展2（4分）

题目内容：

猴子第一天摘了若干个桃子，吃了一半，不过瘾，又多吃了1个。第二天早上将剩余的桃子又吃掉一半，并且又多吃了1个。此后每天都是吃掉前一天剩下的一半零一个。到第n天再想吃时，发现只剩下1个桃子，问第一天它摘了多少桃子？为了加强交互性，由用户输入不同的天数n进行递推，即假设第n天的桃子数为1。同时还要增加对用户输入数据的合法性验证（如:不允许输入的天数是0和负数）


程序运行结果示例：

Input days:

0↙

Input days:

-5↙

Input days:

a↙

Input days:

3↙

x=10


输入格式: "%d"

输出格式：

输入提示信息："Input days:\n"

输出："x=%d\n"
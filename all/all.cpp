1.��Ŀ���ݣ�

��̲�����뾶r=5.3�İ�Բ�����ܳ����ð�Բ����ֱ��Χ�ɵİ�Բ���������ȡֵΪ3.14159��Ҫ��뾶r�ͱ������ú곣����ʾ��

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




2.���㳤���������3�֣�

��Ŀ���ݣ�

��̲������1.2����4.3����6.4�ĳ�����������Ҫ�󳤷���ĳ������߱�������const������ʾ��




#include  <stdio.h>
main()
{
    const double a = 1.2 , b = 4.3 , h = 6.4 ;
	printf("volume=%.3f\n",a*b*h);
	return 0;

}


3.�����������3�֣�

��Ŀ���ݣ�

�Ӽ�����������һ��3λ��������̼��㲢�����������������������ǰ�������ţ������磬����-123������Ը��ţ���123��������λ1��ʮλ2����λ3��Ȼ�����3*100+2*10+1 = 321�������321��

��ʾ��

1. �Ӽ����������ݿ���ʹ�ú���scanf()�����磬scanf("%d", &x); ��ʾ�Ӽ��������������������α���x�С�

2. ����ȡ����ֵ���� fabs()�����������ݵĸ��š�fabs(x)��ʾ�������x�ľ���ֵ��

3.ʹ����ѧ��������Ҫ�ڳ���ͷ���ϱ���Ԥ����ָ�� #include <math.h>


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


4.�����ֺܷ�ƽ���֣�3�֣�

��Ŀ���ݣ�

С����ѧ�ڹ���5�ſγ̣��ֱ���Ӣ����ġ���ѧ����ʷ�����֡�5�Ƶ����п��Գɼ��ֱ���86�֡�74�֡�92�֡�77�֡�82�֣���ĩ���Գɼ��ֱ���81�֡�87�֡�90�֡�62�֡�88�֡���֪���к���ĩ���Գɼ��ֱ�ռ�ܳɼ���30%��70%��������Ӧ�ı�����Ÿ��Ƴɼ����������С��5�ſγ̵��ֺܷ�ƽ���֡�Ҫ��ƽ�������������ʽ����2λС���ĸ�������ʽ�Ͳ���С����������ʽ��Ҫ���ܷ������2λС���ĸ�������ʽ��

��ʾ��

�������С����ƽ���ֵ�������ʽ����ʹ��ǿ������ת����


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


5.�������֮�ͣ�3�֣�

��Ŀ���ݣ�

�����ж��ڴ���������rateΪ2.25%����֪�����Ϊn�꣬����ΪcapitalԪ���Ա�̼��㲢���n���ı���֮��deposit��

��ʾ���Ӽ����������ݿ���ʹ�ú���scanf()��������Ϊscanf("%lf,%d,%lf", &rate, &n, &capital);


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

6.��λ���v1.0��3�֣�

��Ŀ���ݣ�

����һ��4λ����������n=4321����д��������Ϊ����2λ����������43��21�����㲢�����ֺ���������ļӡ������ˡ���������Ľ��������n=4321,���ֺ����������Ϊa,b����a=43,b=21������������Ҫ��ȷ��С�����2λ��


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

7.����/��������3�֣�

��Ŀ���ݣ�

��C�����У����������Ϊ��ֵ�����һ�����������ʱ�����������Ҳ��һ��������
��ĳЩ�����£�������Ҫ������������������磺��C��������(-11)%5=-1��������ʱ����ϣ���õ�����������-1������4�����д�������(-11)%5�ĸ���������������


#include <stdio.h>
int main(){
	int a = -11 , b =5 , y ;
	y = a % b ;
	printf("negative: %d\n",y);
	printf("positive: %d\n",y+5);
	return 0;
}

8.���Ԥ�⣨3�֣�

��Ŀ���ݣ�

��֪С�����к����ְֵ������175���ף�����������162���ס�С�죨Ů�����ְֵ������169���ף�����������153���ף�
�������湫ʽ��Ԥ�Ⲣ���С����С����Ŵ���ߣ������Ǻ������أ���

         ���Գ���ʱ���=(faHeight + moHeight)��0.54cm

         Ů�Գ���ʱ���=(faHeight��0.923 + moHeight)/2cm


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

9.��һԪ���η��̵ĸ���3�֣�

��Ŀ���ݣ�

������������������ʽ�����㲢���һԪ���η��̵�����ʵ����Ҫ��ȷ��С�����4λ��


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

10.������������ƽ���ͣ�3�֣�

��Ŀ���ݣ�

�Ӽ��̶�������ʵ������̼��㲢������ǵ�ƽ���ͣ�Ҫ��ʹ����ѧ����pow(x,y)����ƽ��ֵ������������2λС����

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

11.�������Ĳ�ּ��㣨3�֣�

��Ŀ���ݣ�

�Ӽ�������һ��4λ������������̼��㲢�����������������������ǰ�������ţ���
���磬����-1234�����Ը��ţ���1234�������ǧλ1����λ2��ʮλ3����λ4��Ȼ�����4*1000+3*100+2*10+1 = 4321�������4321
���ٽ��õ���������4321���Ϊ����2λ����������43��21�����㲢�����ֺ����������ƽ���͵Ľ����

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

12.���Ӣ������3�֣�

��Ŀ���ݣ�

�Ӽ�������ĳͬѧ��Ӣ������Сд���룬����ѧ����Ӣ����ֻ����3����ĸ����: tom����
��д��������Ļ�������ͬѧ��Ӣ������������ĸ��д����: Tom����
ͬʱ�����ɸ�Ӣ����������Ӣ���ַ���26��Ӣ����ĸ�е���š�

13.������ָ����3�֣�

��Ŀ���ݣ�

�Ӽ�������ĳ�˵���ߣ�������Ϊ��λ����174cm�������أ��Թ���Ϊ��λ����70���������ߣ�����Ϊ��λ����1.74m�������أ��Խ�Ϊ��λ����140��������Ļ�ϣ����������¹�ʽ���㲢�����ָ����Ҫ����������С�����2λ��

��������Ϊw������Ϊh�ף�����ָ���ļ��㹫ʽΪ��

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

14.������ʾ��3�֣�

��Ŀ���ݣ�

��дһ������, �����û�¼���������Ϣ���ҽ�����ʾ����. ����, �������ڵ���ʽΪ��/��/��(mm/dd/yy), ������ڵ���ʽΪ������(yy.mm.dd)��

#include <stdio.h>
int main(){
	int mm , dd , yy ;
	printf("Enter a date (mm/dd/yy):\n");
	scanf("%d/%d/%d", &mm , &dd , &yy);
	printf("You entered the date: %04d.%02d.%02d\n",yy,mm,dd);
	return 0;
}

15.��Ʒ��Ϣ��ʽ����3�֣�

��Ŀ���ݣ�

��дһ������, ���û�¼��Ĳ�Ʒ��Ϣ���и�ʽ����

����Ϊ��������н��ʾ����

Enter item number:

385�L

Enter unit price:

12.5�L

Enter purchase date (mm/dd/yy):

12/03/2015�L

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

16.��λ���v2.0��4�֣�

��Ŀ���ݣ�

�Ӽ���������һ��4λ��������n����д��������Ϊ����2λ��������a��b�����㲢�����ֺ���������ļӡ������ˡ�������������Ľ����
����n=-4321,���ֺ����������Ϊa,b����a=-43,b=-21������������Ҫ��ȷ��С�����2λ��
����ͳ���������Ҫ���ǳ���Ϊ0��������������ֺ�b=0,�������ʾ��Ϣ"The second operater is zero!"

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

17.��ݷ��ü��㣨4�֣�

��Ŀ���ݣ�

�Ϻ��е�ĳ��ݹ�˾����Ͷ��Ŀ�ĵؾ��빫˾��Զ������ȫ�����ֳ�5������

 

0��
	

1��
	

2��
	

3��
	

4��

ͬ��
	

�ٽ���ʡ
	

1500�����������
	

1500����2500����
	

2500��������

�Ϻ�
	

���գ��㽭
	

��������򣬺ӱ������������ϣ���΢�����������������������ϣ��������㶫��ɽ����
	

���֣����������࣬�Ĵ������죬�ຣ�����������ϣ����ϣ����ɹţ������������ݡ�
	

�½������ء�



��ݷѰ��ʼ��������㣬�����ط��á����ط��������ֹ��ɣ�

��1��	���أ����أ�1���ﰴ�����ʷѼ��㣨����1�����1������㣩���������ص����������������1�����1������㣩��ȡ���طѣ�

��2��	ͬ�������ʷ�10Ԫ������3Ԫ/���

��3��	����1����������ʡ�����ʼ��������ʷ�10Ԫ������4Ԫ��

��4��	���������������ʼ��������ʷ�ͳһΪ15Ԫ�������ز��֣���ͬ����۸�ͬ��2��������5Ԫ/���3��������6.5Ԫ/���4��������10Ԫ/���


��д���򣬴Ӽ��������ʼ���Ŀ�������������������㲢����˷ѣ�����������2λС����

��ʾ�����ز��ֲ���һ�����1������㡣��ˣ����������2.3���1���������أ�ʣ���1.3���������أ�����1���ﰴ1������㣬1.3�����ۺ�����Ϊ2����������Ӧ����0�������Ų��ܳ���0-4�ķ�Χ��

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

18.���������жϣ�6�֣�

��Ŀ���ݣ�

�Ӽ�������һ��int�͵�������n����֪��0<n<10000������д�����ж�n�����ĸ����䡣����û���������ݲ���ָ���ķ�Χ�������� "error!"�����磬����265��������������� 100-999��


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

19.����һԪ���η��̵ĸ�v2.0��4�֣�

��Ŀ���ݣ�

������������������ʽ�����㲢���һԪ���η��̵�����ʵ����Ҫ��ȷ��С�����4λ������a��b��c��ֵ���û��Ӽ������롣����û������ϵ����������ʵ����Ҫ�����������ʾ "error!"��


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

20.����û��������루4�֣�

��Ŀ���ݣ�

����scanf()�ķ���ֵ�ж�scanf()�Ƿ�ɹ�������ָ��������������ʹ�������û�����123aʱ��������������н����

123a�L

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

21.�����жϣ�6�֣�

��Ŀ���ݣ�

�Ӽ�����������һ����Ԫ��ݣ����ڵ���1�����ж����Ƿ������ꡣ�������������Yes�������������No����Ҫ����������ݽ��кϷ����жϡ�

��֪������������֮һ�������꣺

��1���ܱ�4�����������ܱ�100������

��2���ܱ�400������


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

22.����Ĵ�v1.0��7�֣�

��Ŀ���ݣ�

�������Ĺ����ǽ��ٷ��Ƴɼ�ת��Ϊ5���Ƴɼ������幦���ǣ�����û�������ǷǷ��ַ����߲��ں��������ڵ����ݣ������������a,����102����-45�ȣ����������� Input error!��������ת��Ϊ5���������Ŀǰ������ڴ����뽫���޸���ȷ���������������������ʾ��������

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

23.�ַ������жϣ�4�֣�

��Ŀ���ݣ�

�Ӽ��̼�������һ���ַ����жϸ��ַ���Ӣ����ĸ�������ִ�Сд���������ַ����������ַ���

��������ĸ������Ļ��ʾ It is an English character.����������������Ļ��ʾIt is a digit character. �������������ַ�������Ļ��ʾ��It is other character. 

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

24.�ж�һ�����������м�λv2.0��4�֣�

��Ŀ���ݣ�

�Ӽ�������һ����������(int��)����д�����жϸ��������м�λ������������������ֵĸ��������磬�Ӽ�����������16644,����������5λ��������1��1,2��6,2��4��


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

25.������㣨6�֣�

��Ŀ���ݣ�

��ҵ���ŵĽ������������ɡ�������ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ������40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������i����Ӧ���Ž���������

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

26.�����޸ġ�1��4�֣�

��Ŀ���ݣ�

�޸������������ʹ����ټ���1+2+3����+n��ֵ��n�Ӽ������롣�������������������ʾ��������

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

27.�����޸ġ�2��4�֣�

��Ŀ���ݣ�

�޸����������do-while���ʵ�ֵĳ��򣬸���while���ʵ�֣����Ա�����ȱ�㡣

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

28.��Ĵ�-1��4�֣�

��Ŀ���ݣ�

�ҹ��Ŵ��ġ������㾭����������һ�������İټ����⣺������һ��ֵǮ�壻��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ����ʼ��̡�ĸ���������Σ���
����Ϊ������ÿֻ5Ԫ��ĸ��ÿֻ3Ԫ��С��3ֻ1Ԫ����100Ԫ��100ֻ�����ʹ�����ĸ����С�����������ֻ��
Ŀǰ�������н����������Ϊʲô�����ȷ�𰸶�������⣿����Ҫ�ҳ�������������󣬻�Ҫ��������ǰѧ����֪ʶ���������ԭ��

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
29.�Ӽ�����������һ��������������ж����Ƿ������������������������Yes!�������������No��������֪������0��1���������������ҳ��������Ĵ��󲢸���֮��ͬʱ���ո���������ʾ������޸ĺ�ĳ���

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

30.����Ĵ�-3��4�֣�

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

31.6λ���������⣨4�֣�

��Ŀ���ݣ�

�Ӽ�������6λ��������0~9��ɵ����롣�û�ÿ����һ�����벢���س����󣬳�������жϣ�
��������֣���ԭ����������֣�����ʾ�û�Ŀǰ�Ѿ������˼�λ���룬ͬʱ����������һλ���룻
���򣬳�����ʾ"error"�������û�����������һλ���롣ֱ���û����������ȫ��������Ϊֹ��

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

32.�ж�һ�����������м�λv1.0��4�֣�

��Ŀ���ݣ�

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


33.�������������������ż���ĸ�����4�֣�

��Ŀ���ݣ�

�Ӽ�������һϵ��������������-1��ʾ���������-1��������������ݣ�����д�����ж�����������������ż���ĸ���������û�����ĵ�һ�����ݾ���-1����������"over!"�������û�ÿ����һ�����ݣ��������������������ż����ֱ���û�����-1Ϊֹ���ֱ�ͳ���û�����������������ż���ĸ�����


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

34.������ķ����߶ȣ�4�֣�

��Ŀ���ݣ�

һ�����100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬�����²�����......�������ڵ�5�κ͵�10�����ʱ���ֱ𹲾����˶����ף���5�κ͵�10�η����ֱ��Ƕ�ߣ�Ҫ�������������С�����3λ���û��Ӽ���������Ҫ����ĵ�n�Σ�n<=15����


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

35.���ӳ��ҳ���_��չ1��4�֣�

��Ŀ���ݣ�

���ӵ�һ��ժ�����ɸ����ӣ�����һ�룬����񫣬�ֶ����1�����ڶ������Ͻ�ʣ��������ֳԵ�һ�룬�����ֶ����1�����˺�ÿ�춼�ǳԵ�ǰһ��ʣ�µ�һ����һ��������n�������ʱ������ֻʣ��1�����ӣ��ʵ�һ����ժ�˶������ӣ�Ϊ�˼�ǿ�����ԣ����û����벻ͬ������n���е��ƣ��������n���������Ϊ1��


��������н��ʾ��1��

Input days:

5�L

x=46


��������н��ʾ��2��

Input days:

10�L

x=1534


�����ʽ: "%d"


�����ʽ��

������ʾ��Ϣ��"Input days:\n"

�����"x=%d\n"

36.���ӳ��ҳ���_��չ2��4�֣�

��Ŀ���ݣ�

���ӵ�һ��ժ�����ɸ����ӣ�����һ�룬����񫣬�ֶ����1�����ڶ������Ͻ�ʣ��������ֳԵ�һ�룬�����ֶ����1�����˺�ÿ�춼�ǳԵ�ǰһ��ʣ�µ�һ����һ��������n�������ʱ������ֻʣ��1�����ӣ��ʵ�һ����ժ�˶������ӣ�Ϊ�˼�ǿ�����ԣ����û����벻ͬ������n���е��ƣ��������n���������Ϊ1��ͬʱ��Ҫ���Ӷ��û��������ݵĺϷ�����֤����:�����������������0�͸�����


�������н��ʾ����

Input days:

0�L

Input days:

-5�L

Input days:

a�L

Input days:

3�L

x=10


�����ʽ: "%d"

�����ʽ��

������ʾ��Ϣ��"Input days:\n"

�����"x=%d\n"
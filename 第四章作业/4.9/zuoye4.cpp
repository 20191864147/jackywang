// zuoye4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int num,a,b,c,d,e,f;
	printf("请输入一个不多于5位的正整数");
	scanf("%d",&num);
	if(num>9999)
		f=5;
	else if(num>999)
		f=4;
	else if(num>99)
		f=3;
	else if(num>9)
		f=2;
	else if(num>0)
		f=1;
	printf("位数是%d\n",f);
    
	a=num/10000;
	b=(num-a*10000)/1000;
	c=(num-a*10000-b*1000)/100;
	d=(num-a*10000-b*1000-c*100)/10;
	e=(num-a*10000-b*1000-c*100-d*10);

	switch(f){
	case 5:
		printf("每一位数字是:%d%d%d%d%d\n",a,b,c,d,e);
		printf("逆序数字:%d%d%d%d%d\n",e,d,c,b,a);break;
	case 4:
		printf("每一位数字是:%d%d%d%d\n",b,c,d,e);
		printf("逆序数字:%d%d%d%d\n",e,d,c,b);break;
	case 3:
        printf("每一位数字是:%d%d%d\n",c,d,e);
		printf("逆序数字:%d%d%d\n",e,d,c);break;
	case 2:
		printf("每一位数字是:%d%d\n",d,e);
		printf("逆序数字:%d%d\n",e,d);break;
	case 1:
		printf("每一位数字是:%d\n",e);
		printf("逆序数字：%d\n",e);break;
	}
   return 0;
}


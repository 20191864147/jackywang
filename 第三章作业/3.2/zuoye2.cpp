// zuoye2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	float p0=1000,r1=0.03,r2=0.021,r3=0.0275,r4=0.015,r5=0.0035,p1,p2,p3,p4,p5;
	p1=p0*(1+5*r1);
	p2=p0*(1+2*r2)*(1+3*r3);
	p3=p0*(1+3*r3)*(1+2*r2);
	p4=p0*pow(1+r4,5);
	p5=p0*pow(1+r5/4,4*5);
	printf("p1=%f\n",p1);
		printf("p2=%f\n",p2);
		printf("p3=%f\n",p3);
		printf("p4=%f\n",p4);
		printf("p5=%f\n",p5);
 return 0;
}


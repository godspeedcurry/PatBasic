#include <stdio.h>
#include <math.h>
const double pi=3.14159265;
int main(){
	double r1,p1,r2,p2;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	double a,b,c,d;
	a=r1*cos(p1);
	b=r1*sin(p1);
	c=r2*cos(p2);
	d=r2*sin(p2);

	double temp=a*d+b*c;
	double tt=a*c-b*d;
	if(fabs(a*d+b*c)<0.005) temp=0;
	if(fabs(tt)<0.005) tt=0;

	if(temp<0){
		printf("%.2lf-%.2lfi\n",tt,-(temp));
	}
	// else if(a*d+b*c==0)printf("%.2lf\n",a*c-b*d);
	else {
		printf("%.2lf+%.2lfi\n",tt,(temp));
	}


	return 0;
}

//辣鸡题目
//-0.004 应显示0.00 而不能显示为-0.00
#include<iostream>
const double pi=3.14;
using namespace std;

int area(int);
int area(int,int);
float area(float);

void display(int k)
{
	cout<<"\n\n\n The area is"<<k;
}

int main()
{
	int a=4, c=6, d=5;
	float r=4.6, s=4.4, t=2.5;
	
	area(a);//callingarea(int p)
	area(c, d);
	area(r);
	
}

int area(int p)
{
	int x;
	x=p*p;
	display(x);
	
}
int area (int q, int r)
{
	int x;
	x=q*r;
	display(x);
}

float area(float m)
{
	int x;
	x=pi*m*m;
	display(x);
}

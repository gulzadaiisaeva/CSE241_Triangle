#include "triangle.h"

void swap_corners(Triangle t)
{
    
	int temp;
	int a=t.get_a();
	int b=t.get_b();
	int c=t.get_c();
	temp=a;
        a=b;
	b=c;
	c=temp;
	cout << "After swaping:\na= " << a << endl<< "b= "<< b <<endl << "c= "<< c << endl;;
    return;
}
bool isLarger(const Triangle& triangle1, const Triangle& triangle2)
{
	 return(triangle1.get_a( ) > triangle2.get_a( ) &&
			triangle1.get_b( ) > triangle2.get_b( ) &&
			triangle1.get_c( ) > triangle2.get_c( ) );

}
bool Triangle::isvalid ()
{


    if((a+b>c) && (b+c>a) && (c+a>b))
	{
		return 0;
	}

    else {
        cerr << "Triangle isnt valid!" << endl;
        exit(0);
		 }
}

Triangle::Triangle()
{
    a=1.0;
    b=1.0;
    c=1.0;
}

Triangle::Triangle(double sides)
{
    set_corners(sides,sides,sides);
}

Triangle::Triangle( double a,double b)
{
	do{
    set_a(a);
    set_b(b);
    c=1.0;
	} while (isvalid());
}

Triangle::Triangle (double a, double b, double c)
{
    set_corners(a,b,c);
}

 void Triangle::set_a (double _a)
 {
     a=_a;
 }
 
 void Triangle::set_b (double _b)
 {
        b=_b;
 }
 
 void Triangle::set_c (double _c)
 {
     c=_c;
 }
 
 void Triangle::set_corners(double _a,double _b,double _c)
 {
     do
    {
        a=_a;
        b=_b;
        c=_c;
    } while(isvalid());
 }
 
double Triangle::get_a() const
{
     return a;
}

double Triangle::get_b() const
{
     return b;
}
  
double Triangle::get_c() const
{
     return c;
}
 
void Triangle::input()
{
    cout << "Enter the sides of triangle" << endl;
    do
    {
    cout << "Side a=  " ; cin >>a;
    cout << "Side b=  " ; cin >>b;
    cout << "Side c=  " ; cin >>c;
    } while (isvalid());
    
}

void Triangle::output() const
{
    cout << "Triangle " <<endl;
    cout << "Side a= " << a << endl;
    cout << "Side b= " << b <<endl;
    cout << "Side c= " << c << endl;
}

double  Triangle::angleA() const
{
       double  radianA=acos(((b*b)+c*c-a*a)/(2*c*b));
       double cornerA=radianA*180/3.14;
       return cornerA;
}
double Triangle::angleB() const
{
        double radianB=acos(((a*a)+c*c-b*b)/(2*c*a));
        double cornerB=radianB*180/3.14;
        return cornerB;
}
double Triangle::angleC() const
{
        double radianC=acos(((b*b)+a*a-c*c)/(2*a*b));
        double cornerC=radianC*180/3.14;
        return  cornerC;
}

bool Triangle::rightAngle() 
{
	double a=floor(angleA());
	double b=floor(angleB());
	double c=floor(angleC());
	if ( a==90 || b==90 || c==90){
		cout << "A Right Angled Triangle" << endl;
		return 0;}
	else
		cout << "Not A Right Angled Triangle" << endl;
}		
double Triangle::calc_perimeter() const
{
	double per = a + b + c;
	cout << "Perimeter of triangle = " << per << endl;
	return per;
}

double Triangle::calc_area() const
{
    double p=(a+b+c)/2;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Area of triangle = " << s << endl;
    return s;
}

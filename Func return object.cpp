#include<iostream>
using namespace std;
class complex
{
	private :
		float x,y;
		public:
			void setdata(float real,float imag)
			{
				x=real;
				y=imag;
			}
			friend complex sum(complex,complex);
			void show(complex);
};
void complex::show(complex c)
{
	cout<<"Real part = "<<c.x<<endl;
	cout<<"Imaginary part = "<<c.y<<endl;
}
 complex sum(complex a1,complex a2)
 {
 	complex temp;
 	temp.x= a1.x + a2.x;
 	temp.y= a1.y + a2.y;
 	return(temp);
 }
 
 main()
 {
 	complex A,B,C;
 	A.setdata(2.5,3.5);
 	A.show(A);
 	B.setdata(3.5,6.7);
 	B.show(B);
 	C=sum(A,B);
 	C.show(C);
 }

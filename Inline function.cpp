#include<iostream>
inline float mul(float x, float y)
{
	return(x*y);
}
inline float div(float x,float y)
{
	return(x/y);
}
main()
{
	std::cout<<mul(10.5,12.5)<<"\n";
	std::cout<<div(4.5,2.5)<<"\n";
}

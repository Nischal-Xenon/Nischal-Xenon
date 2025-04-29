#include<iostream>
using namespace std;
class CLASS10B
{
	public:
		int l,b,base,h,p1;
		float c;
	//circle programs
    int circle_i()
	{
		int r;
		cout<<endl<<"Enter radius:";
		cin>>r;
		return r;
	}
	float circle_p(int r)
	{
		c=2*3.14*r;
		return 3.14*r*r;
	}
	void circle_o(float o)
	{
		cout<<"The circumference of circle is:"<<c<<endl;
		cout<<"The area of circle is:"<<o<<endl;
	}
	//rectangle programs
	void rectangle_i()
	{
		cout<<endl<<"Enter length and breadth:";
		cin>>l>>b;
	}
	int rectangle_p()
	{
		p1=l*2+b*2;
		return l*b;
	}
	void rectangle_o(int o)
	{
		cout<<"The perimeter of rectangle is:"<<p1<<endl;
		cout<<"The area of rectangle is:"<<o<<endl;
	}	
	//square programs
	int square_i()
	{
		int s_l;
		cout<<endl<<"Enter length:";
		cin>>s_l;
		return s_l;
	}
	int square_p(int s_l)
	{
		p1=4*s_l;
		return s_l*s_l;
	}
	void square_o(int o)
	{
		cout<<"The perimeter of square is:"<<p1<<endl;
		cout<<"The area of square is:"<<o<<endl;
	}	
	//triangle programs
	void triangle_i()
	{
		cout<<endl<<"Enter base and height:";
		cin>>base>>h;
	}
	int triangle_p()
	{
		return 0.5*base*h;
	}
	void triangle_o(int o)
	{
		cout<<"The area of triangle is:"<<o<<endl;
	}	
};
int main()
{
	CLASS10B Z;
	int i=1;
	while(i!=0)
	{
		cout<<"\nEnter:-"<<endl
		<<"0.End Program"<<endl
		<<"1.Circle"<<endl
		<<"2.Rectangle"<<endl
		<<"3.Square"<<endl
		<<"4.Triangle"<<endl
		<<endl<<"Enter value:";
		cin>>i;
		switch(i)
		{
			case 0:
				break;
			case 1: 
				Z.circle_o(Z.circle_p(Z.circle_i()));
				//int in=Z.circle_i();
				//int out=Z.circle_p(in);
				//Z.circle_o(out);
				break;
			case 2:
				Z.rectangle_i();
				Z.rectangle_o(Z.rectangle_p());
				//int o=Z.rectangle_p();
				//Z.rectangle_o(o);
				break;
			case 3:
				Z.square_o(Z.square_p(Z.square_i()));
				//int in=Z.square_i();
				//int out=Z.square_p(in);
				//Z.square_o(out);
				break;
			case 4:
				Z.triangle_i();
				Z.triangle_o(Z.triangle_p());
				//int out=Z.triangle_p();
				//Z.triangle_o(out);
				break;
			default:	cout<<endl<<"Please valid input"<<endl;		
		}
	}
	return 0;
}

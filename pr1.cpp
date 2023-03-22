#include<iostream>
#include<string.h>
using namespace std;
class mother 
{
	public:
	void display()
	{
	
	cout << "hello my Daughter"	;
	}
};
class Daughter : public mother
{
	public:
	void display()
	{
		
	
	cout << "hyy mamma";	
}
};
		
main()
{
	Daughter d1;
	d1.Daughter::mother;
	d1.display();	
}


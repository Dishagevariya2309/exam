#include<iostream>
#include<string.h>
using namespace std;
class clg ;
class High_school 
{
	public:
	int id;
	char name[100];
	int roll;
	int std;
	int age;
	int cont;
	char school_name[100];
	char add[100];
	void setData()
	{
		cout<<"Enter idL:-";
		cin>>id;
		cout <<"Enter name:-";
		cin>>name;
		cout<<"Enter roll no:-";
		cin>>roll;
		cout<<"Enter std:-";
		cin>>std;
		cout<<"Enter age:-";
		cin>>age;
		cout<<"Enter contact no.";
		cin>>cont;
		cout<<"Enter stu_edu_institute_name ";
		cin>>school_name;
		cout<<" Enter add";
		cin>>add;
	}
	void getData()
	{
		cout<<"id=" <<id<<" "<<"name="<<name<<"    "<<"roll="<<roll<< "  "<<"std="<<std<< " "<<"age="<<age<< "  "<<"cont="<<cont<<"stu_edu_institute_name="<<school_name<<" "<<"address="<<add<<endl;
		=
	}
};
class clg 
{
	public:
	int id;
	char name[100];
	int roll;
	int std;
	int age;
	int cont;
	char stu_edu_institute_name[100];
	char add[100];
	void setData()
	{
		cout<<"Enter idL:-";
		cin>>id;
		cout <<"Enter name:-";
		cin>>name;
		cout<<"Enter roll no:-";
		cin>>roll;
		cout<<"Enter std:-";
		cin>>std;
		cout<<"Enter age:-";
		cin>>age;
		cout<<"Enter contact no.";
		cin>>cont;
		cout<<"Enter stu_edu_institute_name ";
		cin>>stu_edu_institute_name;
		cout<<" Enter add";
		cin>>add;
	}
	void getData()
	{
		cout<<"id=" <<id<<" "<<"name="<<name<<"    "<<"roll="<<roll<< "  "<<"std="<<std<< " "<<"age="<<age<< "  "<<"cont="<<cont<<"stu_edu_institute_name="<<stu_edu_institute_name<<" "<<"address="<<add<<endl;
		
	}
};

main()
{
	High_school h1;
	h1.setData();
	h1.getData();
	clg c1;
	c1.setData();
	c1.getData();
	return 0;
}

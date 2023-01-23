#include <iostream>
#include<string>
using namespace std;
class student
{
private:
	string name,DOB,blood_grp,addr,year-class,mob;
	int div;
	int *rollno;
	
public:
	friend class faculty;
	
	student()
	{rollno=new int;
	
	*rollno=div=-1;
	name=blood_grp=DOB=addr=year_class=mob="";

	}
	~student()
	{
		delete rollno;
		
    }
    void add_data()
    {
    	cout<<"\nEnter Student Information:";
    	
    	cout<<"\nEnter Name:"<<endl;
    	cin.ignore();
    	getline(cin,name);
    	cout<<"Enter roll_no:";
    	    cin>>*rollno;
    	cout<<"Enter Year(SE/TE/BE):";
    	    cin>>year_class;
    	cout<<"Enter Division(1/2/3/4/5):";
    	    cin>>div;
    	cout<<"Enter DOB:";
    	    cin>>DOB;
    	cout<<"Enter Blood group:";
    	    cin>>blood_grp;
    	cout<<"Enter Mobile no:";
    	    cin>>mob;
    	cout<<"Enter Address:";
    	    cin>>addr;
    }
    
    void display()
    {
    	cout<<"\n--------------------------------------------";
    	cout<<"\nName           :"<<name;
    	cout<<"\nRoll no        :"<<*rollno;
    	cout<<"\nYear(SE/TE/BE) :"<<year_class;
	}
    	    
    	
	
	
	
	

}
	


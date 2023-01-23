#include<iostream>
#define max 20
using namespace std;

class Account{
	private:
		int accno;
		char name[10];
		int bal;
	public:
		void accept();
		void display();
		int getAccno();
		int getAccBal();
		void setAccBal(int b);
};
void Account::accept(){
	cout<<"\nEnter Account No :";
	cin>>accno;
	cout<<"\nEnter customer Name :";
	cin>>name;
	cout<<"\nEnter balance :";
	cin>>bal;
    }
void Account::display(){
	cout<<"\nAccount No :"<<accno;
	cout<<"\nCustomer Name :"<<name;
	cout<<"\nAccount Balance :"<<bal;
    

	cout<<"\n----------------------------------------------"<<endl;
	cout<<"\nAccount No\t\t\tCustomer Name\t\t\tAccount Balance";
	cout<<"\n-----------------------------------------------"<<endl;
	cout<<accno<<"\t"<<name<<"\t"<<bal;
	}

int Account::getAccno(){
	return accno;
   }

int Account::getAccBal(){
	return bal;
}

void Account::setAccBal(int b){
	bal=b;
}


int main(){
	int n,ch,i,ano,flag=0;
	int amt,bal,finalbal;
	Account arr[max];
	
	do
	{
	cout<<"\n1-Create\n2-Display\n3-Search\n4-sorting";
	cout<<"\nEnter your choice :";
	cin>>ch;

	switch(ch){
		case 1:
			cout<<"How many object do you want";
           	cin>>n;
           	for(i=0;i<n;i++){
           		arr[i].accept();
			   }
           	break;
        
		case 2:
			cout<<"\n-----------------------------------------"<<endl;
			cout<<"\nAccount Details are.....";
			cout<<"\n------------------------------------------"<<endl;
			for(i=0;i<n;i++){
			     arr[i].display();
			}
			break;
			
		case 3:
			cout<<"Enter the element to be search";
			cin>>ano;
			for(i=0;i<n;i++){
			   if(ano==arr[i].getAccno()){
			   	flag=1;
			   	break;
			   }
			}
		if(flag==1)	{
			cout<<"Element is found....";
			arr[i].display();
			cout<<"\n1-Withdrawl\n2-Deposit";
			cout<<"\nEnter your choice :";
			cin>>ch;
			
			if(ch==1){
				cout<<"Enter amount to withdraw :";
				cin>>amt;
				bal=arr[i].getAccBal();
				finalbal=bal-amt;
				arr[i].setAccBal(finalbal);
				cout<<"\nAccount balance is :"<<finalbal;
				cout<<"\nTransaction Completed";
			    }
			else if(ch==2){
				cout<<"Enter amount to deposit :";
				cin>>amt;
				bal=arr[i].getAccBal();
				finalbal=bal+amt;
				arr[i].setAccBal(finalbal);
				cout<<"\nAccount balance is :"<<finalbal;
				cout<<"\nDeposition is Completed";
				
				
			}
	   	}
		    else
		    {
			cout<<"Element is not found....";
		    }
    	}
	    cout<<"\nDo you want to continue press 1";
	    cin>>ch;
    }while(ch==1);
     cout<<"--------------------------Thank You--------------------";
	
	return 0;
	
}

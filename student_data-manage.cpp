#include<iostream>
#include <windows.h>
using namespace std;
struct record
{
	int roll;
	long long int phone;
	char name[30],blood_group[4],gender[6];
};
int main()
{
	int i,a,s,t;
	cout<<"How many students in class:";
	cin>>i;
	struct record z[i] = {};
		do{
			int r;
			cout<<"Enter your roll no:";
			cin>>r;
			if (r>0 && r<=i)
        	{
				z[r-1].roll=r;
				cout<<"Enter your name:";
				cin>>z[r-1].name;
				cout<<"Enter your phone no:";
				cin>>z[r-1].phone;
				cout<<"Enter your blood-group:";
				cin>>z[r-1].blood_group;
				cout<<"Enter your gender:";
				cin>>z[r-1].gender; 
				cout<<endl<<"Enter \n0) to stop entering value\n 1) to enter next value "<<endl;
				cin>>a;
			}
			else
				cout<<"Roll No should be between 1-"<<i<<endl<<endl;
		}while(a!=0);
		
		do{
			cout<<"Enter:-"<<endl<<"0)To print all student data"<<endl
			<<"1)To print one student data"<<endl<<"2)To stop program"<<endl;
			cin>>t;
			switch(t)
			{
				case 0:
					for(int j=0;j<i;j++)
					{
						if(z[j].roll!=0)
						{
							cout<<"Roll no : "<<z[j].roll<<endl;
							cout<<"Name : "<<z[j].name<<endl;
							Sleep(7);
							cout<<"Phone no : "<<z[j].phone<<endl;
							Sleep(700);
							cout<<"Blood-group : "<<z[j].blood_group<<endl;
							Sleep(700);
							cout<<"Gender : "<<z[j].gender<<endl<<endl;
							Sleep(700);
						}
						else
						{
							cout<<"Roll no : "<<j+1<<endl;
							cout<<"Name : ";
						for(int x=0;x<8;x++)
						{
							cout<<".";
							Sleep(700);
							cout<<" ";
						}
							cout<<"Data not found....."<<endl;
							Sleep(700);
							cout<<"Phone no : "<<"Data not found....."<<endl;
							Sleep(700);
							cout<<"Blood-group : "<<"Data not found....."<<endl;
							Sleep(700);
							cout<<"Gender : "<<"Data not found....."<<endl<<endl;
							Sleep(700);
						}
					}
				break;
				case 1:
					cout<<"Enter between 1-"<<i<<" roll no:";
					cin>>s;
					if(z[s-1].roll!=0)
					{
						cout<<"Roll no : "<<z[s-1].roll<<endl;
						Sleep(700);
						cout<<"Name : "<<z[s-1].name<<endl;
						Sleep(700);
						cout<<"Phone no : "<<z[s-1].phone<<endl;
						Sleep(700);
						cout<<"Blood-group : "<<z[s-1].blood_group<<endl;					
						Sleep(700);
						cout<<"Gender : "<<z[s-1].gender<<endl<<endl;
						Sleep(700);
					}
					else
					{
						cout<<"Roll no : "<<s<<endl;
						cout<<"Name : ";
						for(int x=0;x<8;x++)
						{
							cout<<".";
							Sleep(700);
							cout<<" ";
						}
						cout<<"Data not found....."<<endl;
						Sleep(700);
						cout<<"Phone no : "<<"Data not found....."<<endl;
						Sleep(700);
						cout<<"Blood-group : "<<"Data not found....."<<endl;
						Sleep(700);
						cout<<"Gender : "<<"Data not found....."<<endl<<endl;
						Sleep(700);
					}			
				break;
				case 2:
					break;
				default: cout<<"Enter between 0-2";
			}
		}while(t!=2);
    return 0;
}

//			HEADER FILES INCLUDED IN THE PROJECT
#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;

//			CLASS CREATED 'ONLINE FOOD MANAGEMENT

class online_food__mgmt
{
//			DECLARATION OF CLASS VARIABLES
	public:
	int order_id, order_serving, delivery_type, order_category, order_product, i, j, price;
	char order_person_name[50], contact_no[15], order_location[100],order_delivery_time[15], typ[10] ,productf[20], order_cat[50], spicy[10];
	string check, cond, y;

//			FUNCTION FOR FLUSHING GARBAGE VALUES

	void garbage()
	{
	    string temp;
	    getline(cin, temp);
	}
//			FUNCTION FOR CUSTOMERS BASIC BIO DETAILS LIKE NAME, PHONE NUMBER AND ADDRESS
	void basic()
	{
		garbage();
ss:
		cout<<"Enter Customer Name :";
		cin.getline(order_person_name,50);
		check=charvalid(order_person_name);
		if(check=="a"){goto ss;}
		if(strlen(order_person_name)<2 || strlen(order_person_name)>25){ cout<<"Not valid:"<<endl;goto bb;}

bb:		cout<<"\nEnter their contact number :";
		cin.getline(contact_no,50);
		check=numvalid(contact_no);
		if(check=="a"){goto bb;}
		if(strlen(contact_no)<4 || strlen(contact_no)>10){ cout<<"Not valid:"<<endl;goto bb;}

cc:		cout<<"\nEnter their delivery type(1.hand picked | 2.deliver by delivery agent) :";
		cin>>cond;
		y=numvalid(cond);
		if(y.compare("a")==0){cout<<"Wrong input\n";goto cc;}
		delivery_type= atoi(cond.c_str());
		


		if(delivery_type==1 || delivery_type==2){}else{cout<<"Enter 1 or 2"<<endl;goto cc;}
		garbage();

		if(delivery_type==2)
		{
			cout<<"\nEnter their delivery Location: ";
			cin.getline(order_location,100);
		}
	}

//			FUNCTION FOR INPUT BASIC INFO FOR MENU FROM THE CUSTOMERS

	void part2()
	{
ff:		cout<<"\nEnter category(1.Veg | 2.Non-veg) Enter 1 or 2 :";
		cin>>cond;
		y=numvalid(cond);
		if(y.compare("a")==0){cout<<"Wrong input\n";goto ff;}
		order_category= atoi(cond.c_str());

		if(order_category==1 || order_category==2){}else{cout<<"Enter 1 or 2"<<endl;goto ff;}

		garbage();

		cout<<"\nEnter dilevery time or pick time (please specify AM or PM) :";
		cin.getline(order_delivery_time,15);
	}
	
//			FUNCTION FOR INPUT OF MENU ITEM WITH FLAVOUR
	void product()
	{
		system("clear");
		cout.width(20);cout.fill('-');cout<<"";cout<<"MENU";cout.width(20);cout.fill('-');cout<<""<<endl;
		if(order_category == 1)
		{
			cout<<"\t1. Pizza\t\tRs.159"<<endl;
			cout<<"\t2. Burger\t\tRs.60"<<endl;
			cout<<"\t3. Chinese\t\tRs.89"<<endl;
			cout<<"\t4. Pav Bhaji\t\tRs.59"<<endl;
			cout<<"\t5. Rice\t\t\tRs.79"<<endl;
			cout<<"\t6. French Fries\t\tRs.49"<<endl;
			cout.width(44);cout.fill('-');cout<<""<<endl;
dd:			cout<<"Enter your choice:";
			cin>>cond;
			y=numvalid(cond);
			if(y.compare("a")==0){cout<<"Wrong input\n";goto dd;}
			order_product= atoi(cond.c_str());

			if(order_product==1 || order_product==2 || order_product==3 || order_product==4 || order_product==5 || order_product==6){}
			else{cout<<"Enter valid digits"<<endl;goto dd;}

			if(order_product == 1 || order_product == 2 || order_product== 6)
			{
ii:				cout<<"Extra cheese (Y/N) :";
				cin>>typ[0];
				if(typ[0]=='y' || typ[0]=='Y' || typ[0]=='n' || typ[0]=='N'){}else{cout<<"Enter y or n"<<endl;goto ii;}

jj:				cout<<"Extra Spicy (Y/N) :";
				cin>>typ[1];
				if(typ[1]=='y' || typ[1]=='Y' || typ[1]=='n' || typ[1]=='N'){}else{cout<<"Enter y or n"<<endl;goto jj;}
			}
			if(order_product == 3 || order_product == 4 || order_product == 5)
			{
kk:				cout<<"Extra Spicy (Y/N) :";
				cin>>typ[1];
				if(typ[1]=='y' || typ[1]=='Y' || typ[1]=='n' || typ[1]=='N'){}else{cout<<"Enter y or n"<<endl;goto kk;}
			}
		}
		else
		{
			cout<<"\t1. Chicken Pizza\t\tRs.199"<<endl;
			cout<<"\t2. Chicken Burger\t\tRs.79"<<endl;
			cout<<"\t3. Non-veg Chinese\t\tRs.149"<<endl;
			cout<<"\t4. Chicken Rice\t\t\tRs.139"<<endl;
			cout<<"\t5. HamBurger\t\t\tRs.99"<<endl;
			cout<<"\t6. Tacos\t\t\tRs.79"<<endl;
			cout.width(44);cout.fill('-');cout<<""<<endl;
ee:			cout<<"Enter your choice:";
			cin>>cond;
			y=numvalid(cond);
			if(y.compare("a")==0){cout<<"Wrong input\n";goto dd;}
			order_product= atoi(cond.c_str());

			if(order_product==1 || order_product==2 || order_product==3 || order_product==4 || order_product==5 || order_product==6){}
			else{cout<<"Enter valid digits"<<endl;goto ee;}

			if(order_product == 1 || order_product == 2)
			{
ll:				cout<<"\nExtra cheese (Y/N) :";
				cin>>typ[0];
				if(typ[0]=='y' || typ[0]=='Y' || typ[0]=='n' || typ[0]=='N'){}else{cout<<"Enter y or n"<<endl;goto ll;}

mm:				cout<<"\nExtra Spicy (Y/N) :";
				cin>>typ[1];
				if(typ[1]=='y' || typ[1]=='Y' || typ[1]=='n' || typ[1]=='N'){}else{cout<<"Enter y or n"<<endl;goto mm;}
			}
			if(order_product == 3 || order_product == 4 || order_product == 5 || order_product == 6)
			{
nn:				cout<<"\nExtra Spicy (Y/N) :";
				cin>>typ[1];
				if(typ[1]=='y' || typ[1]=='Y' || typ[1]=='n' || typ[1]=='N'){}else{cout<<"Enter y or n"<<endl;goto nn;}
			}
		}
		order_id=j;
	}

//			FUNCTION FOR MATCHING USER MENU INPUTS WITH RESPECTED STRINGS

	void product1()
	{
		if(typ[1]=='y' || typ[1]=='Y')
		{
			strcpy(spicy,"Extra Spicy");
		}
		if(typ[1]=='n' || typ[1]=='N')
		{
			strcpy(spicy,"Regular");
		}

		if(order_category == 1)
		{
			strcpy(order_cat,"VEG");
			if(order_product==1)
			{
				price=159;
				strcpy(productf,"Pizza");
			}
			else if(order_product==2)
			{
				price=60;
				strcpy(productf,"Burger");
			}
			else if(order_product==3)
			{
				price=89;
				strcpy(productf,"Chinese");
			}
			else if(order_product==4)
			{
				price=59;
				strcpy(productf,"Pav Bhaji");
			}
			else if(order_product==5)
			{
				price=79;
				strcpy(productf,"Rice");
			}
			else if(order_product==6)
			{
				price=49;
				strcpy(productf,"French_Fries");
			}
		}
		else
		{
			strcpy(order_cat,"NON-VEG");
			if(order_product==1)
			{
				price=199;
				strcpy(productf,"Chicken_pizza");
			}
			else if(order_product==2)
			{
				price=79;
				strcpy(productf,"Chicken Burger");
			}
			else if(order_product==3)
			{
				price=149;
				strcpy(productf,"Non_veg_Chinese");
			}
			else if(order_product==4)
			{
				price=139;
				strcpy(productf,"Chicken_rice");
			}
			else if(order_product==5)
			{
				price=99;
				strcpy(productf,"HamBurger");
			}
			else if(order_product==6)
			{
				price=79;
				strcpy(productf,"Tacos");
			}
		}
	}

//			FUNCTION FOR DISPLAYING THE OUTPUT OF THE ORDERS

	void dis()
	{
		ofstream ob("project12345.txt",ios::out|ios::app);
		if(delivery_type==2)
		{
			cout<<" ";
			cout.fill(' ');
			cout.width(15);
			cout<<left<<order_id;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<order_person_name;
			cout.fill(' ');
			cout.width(18);
			cout<<left<<productf;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<order_location;
			cout.fill(' ');
			cout.width(17);
			cout<<left<<order_delivery_time;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<order_cat;
			cout.fill(' ');
			cout.width(25);
			cout<<left<<spicy;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<price<<endl;
		}
		else
		{
			cout<<" ";
			cout.fill(' ');
			cout.width(15);
			cout<<left<<order_id;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<order_person_name;
			cout.fill(' ');
			cout.width(18);
			cout<<left<<productf;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<"Pick-Up";
			cout.fill(' ');
			cout.width(17);
			cout<<left<<order_delivery_time;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<order_cat;
			cout.fill(' ');
			cout.width(25);
			cout<<left<<spicy;
			cout.fill(' ');
			cout.width(20);
			cout<<left<<price<<endl;
		}
		ob.close();
	}

//			FUNCTION FOR PRINTING DATA HEADINGS

	void dis1()
	{
			cout<<" ";
			cout.fill(' ');
			cout.width(15);
			cout<<left<<"order_id";
			cout.fill(' ');
			cout.width(20);
			cout<<left<<"Person_name";
			cout.fill(' ');
			cout.width(18);
			cout<<left<<"Ordered_product";
			cout.fill(' ');
			cout.width(20);
			cout<<left<<"order_Location";
			cout.fill(' ');
			cout.width(17);
			cout<<left<<"delivery_time";
			cout.fill(' ');
			cout.width(20);
			cout<<left<<"Category";
			cout.fill(' ');
			cout.width(25);
			cout<<left<<"Flavour";
			cout.fill(' ');
			cout.width(20);
			cout<<left<<"Bill RS."<<endl;
	}

//			FUNCTION FOR PRINTING DATA INTO THE FILE

	void filetx()
	{

//		FSTREAM OBJECT CREATED HERE	---------------------
		ofstream ob("project1.txt",ios::out|ios::app);
		if(delivery_type==2)
		{
			ob<<" ";
			ob.fill(' ');
			ob.width(15);
			ob<<left<<order_id;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<order_person_name;
			ob.fill(' ');
			ob.width(18);
			ob<<left<<productf;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<order_location;
			ob.fill(' ');
			ob.width(17);
			ob<<left<<order_delivery_time;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<order_cat;
			ob.fill(' ');
			ob.width(25);
			ob<<left<<spicy;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<price<<endl;
		}
		else
		{
			ob<<" ";
			ob.fill(' ');
			ob.width(15);
			ob<<left<<order_id;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<order_person_name;
			ob.fill(' ');
			ob.width(18);
			ob<<left<<productf;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<"pick up";
			ob.fill(' ');
			ob.width(17);
			ob<<left<<order_delivery_time;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<order_cat;
			ob.fill(' ');
			ob.width(25);
			ob<<left<<spicy;
			ob.fill(' ');
			ob.width(20);
			ob<<left<<price<<endl;
		}
//		FSTREAM OBJECT CLOSED 	----------------
		ob.close();
	}
//			FUNCTION FOR CALLING LOCATION VALUE FOR GIVEN CASES
	string call_loc()
	{
		return order_location;
	}

//			FUNCTION FOR VALIDATION OF CHARACTER STRING
	string charvalid(string s) 
	{
		int k,i;
		k=s.size();
		for(i=0;i<k;i++)
		{
			if(s[i]>=48 && s[i]<=57 || s[i]>=33 && s[i]<=47)
			{
				cout<<"please enter only character values"<<endl;
				return "a";
				break;
			}
		}
	return "b";
	}

//			FUNCTION FOR VALIDATION OF NUMERIC STRING	------------------
	string numvalid(string s) 
	{
		int k,i;
		k=s.size();
		for(i=0;i<k;i++)
		{
			if(s[i] >= 65 && s[i] <= 122 || s[i]>=33 && s[i]<=47)
			{
				cout<<"please enter only numberic values"<<endl;
				return "a";
				break;
			}
		}
	return "b";
	}


};

//			FUNCTION FOR VALIDATION OF NUMERIC VALUES	------------------
string numvalid(string s) 
	{
		int k,i;
		k=s.size();
		for(i=0;i<k;i++)
		{
			if(s[i] >= 65 && s[i] <= 122 || s[i]>=33 && s[i]<=47)
			{
				cout<<"please enter only numberic values"<<endl;
				return "a";
				break;
			}
		}
	return "b";
	}
//*****************************/ MAIN FUNCTION /***************************************
int main()
{
//*****************************/INT MAIN VARIABLE DECLARATION/*************************
	int i, main_var, last_num=0, num;
	string d, location, cat, cond, y;
	char temp[10], ch;
	online_food__mgmt ob[10];

main_menu:system("clear");
	
//-------------- MAIN MENU --------------------------------------------------------------
	cout<<"\n\n\t\tMain Menu"<<endl<<endl<<endl;
	cout<<"\n\t\t01. Enter new Orders."<<endl<<endl;
	cout<<"\n\t\t02. Print all orders till now in file."<<endl<<endl;
	cout<<"\n\t\t03. Search location for \"extra spicy\"."<<endl<<endl;
	cout<<"\n\t\t04. Search order by type \"veg\" or \"nonveg\"."<<endl<<endl;
	cout<<"\n\t\t05. View all orders."<<endl<<endl;
	cout<<"\n\t\t06. To read from file."<<endl<<endl;
	cout<<"\n\t\t07. To exit."<<endl<<endl;
	cout<<"Select your option :";
	cin>>cond;
	y=numvalid(cond);
	if(y.compare("a")==0){goto main_menu;}
	main_var= atoi(cond.c_str());
	if(main_var > 7){goto main_menu;}
	
	system("clear");

//		MAIN MENU CONDITON 1		------------------
	if(main_var==1)
	{
		cout<<"Press enter to continue:\n";
	zz:	cout<<"Enter how many orders you want to enter:";
		cin>>cond;
		y=numvalid(cond);
		if(y.compare("a")==0){goto zz;}
		num= atoi(cond.c_str());
		for(i=last_num;i<num;i++)
		{	
		system("clear");
			ob[i].basic();
			ob[i].part2();
			ob[i].product();
			ob[i].product1();
			ob[i].order_id=i+1;
			last_num++;
		}
		goto main_menu;
	}

//		MAIN MENU CONDITON 2
	else if(main_var==2)
	{
		if(last_num==0)
		{
			cout<<"No entries:"<<endl;
			cin.getline(temp,10);cin.getline(temp,10);
			goto main_menu;
		}
		for(i=0;i<last_num;i++)
		{
			ob[i].filetx();
		}
		cout<<"Enter to go to main_menu";
		cin.getline(temp,10);	cin.getline(temp,10);
		goto main_menu;	
	}

//		MAIN MENU CONDITON 3		-------------
	else if(main_var==3)
	{
		if(last_num==0)
		{
			cout<<"No entries:"<<endl;
			cin.getline(temp,10);cin.getline(temp,10);
			goto main_menu;
		}
		cout<<"\nEnter Location to seach for delivery of extra spicy:";
		cin>>location;
		ob[0].dis1();
		for(i=0;i<last_num;i++)
		{
			d=ob[i].call_loc();
			if((ob[i].typ[1]=='y' || ob[i].typ[1]=='Y') && location.compare(d)==0 )
			{
				ob[i].dis();
			}
		}
	cout<<"Enter to go to main_menu";
	cin.getline(temp,10);	cin.getline(temp,10);
	goto main_menu;
	}

//		MAIN MENU CONDITON 4		--------------------
	else if(main_var==4)
	{
		if(last_num==0)
		{
			cout<<"No entries:"<<endl;
			cin.getline(temp,10);cin.getline(temp,10);
			goto main_menu;
		}
		cout<<"\n\nEnter category VEG or NON-VEG to display order:";
		cin>>cat;
		cout<<endl<<endl;
		ob[0].dis1();
		for(i=0;i<last_num;i++)
		{
			if(cat.compare("Non veg")==0 || cat.compare("Non-veg")==0 || cat.compare("Nonveg")==0 || cat.compare("nonveg")==0 || 
			cat.compare("non-veg")==0 || cat.compare("non veg")==0)
			{
				if(ob[i].order_category==2)
				{
					ob[i].dis();
				}
			}
			else if(cat.compare("veg")==0 || cat.compare("VEG")==0 || cat.compare("Veg")==0)
			{
				if(ob[i].order_category==1)
				{
					ob[i].dis();
				}
			}
		}
	cout<<"Enter to go to main_menu";
	cin.getline(temp,10);	cin.getline(temp,10);
	goto main_menu;
	}

//		MAIN MENU CONDITON 5		-------------------
	if(main_var==5)
	{
		if(last_num==0)
		{
			cout<<"No entries:"<<endl;
			cin.getline(temp,10);cin.getline(temp,10);
			goto main_menu;
		}
		ob[0].dis1();
		for(i=0;i<last_num;i++)
		{
			ob[i].dis();
		}
	cout<<"Enter to go to main_menu";
	cin.getline(temp,10);	cin.getline(temp,10);
	goto main_menu;
	}


//		MAIN MENU CONDITON 6		------------------
	if(main_var==6)
	{
		ifstream ob2("project1.txt",ios::in);
		while(ob2.get(ch))
		{
			cout<<ch;
		}
		ob2.close();
		cout<<"Enter to go to main_menu";
		cin.getline(temp,10);	cin.getline(temp,10);
		goto main_menu;	
	}
	return 0;
}
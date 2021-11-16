#include<iostream>
#include<istream>
#include<fstream>
#include<string>
#include<ctime>
#include<stdlib.h>


using namespace std;

class variable{
	public: 
		
    int task, taskforcb,n,Age,day,month,year,curda,curmo,curye;
    unsigned long long mobile,mobile1,password,password1,back,date,birthdate,menu,y;
    long long int aadhar;
    char Name[50];
    char Surname[50];

};
class Covid:public variable
{
     public:	
         void menu()
         {
        
    	cout<<"\t\t\t\tWELCOME TO THE MAIN PAGE. ";
    	
    	cout<<"\n1. REGISTRATION.\n";
    	cout<<"2. LOGIN.\n";
    	
    	cout<<"\nCHOOSE THE TASK:-\n ";
    	cin>>n;
    	
    	switch(n)
		{
    	case 1:
    	registration();
    	break;
    	
    	case 2:
    	login();
    	break;
        }	
	}
	void display(){

	cout<<"1. Booking "<<endl;
	cout<<"2. Certificate "<<endl;
	
	cout<<"choose your task"<<endl;
	cin>>taskforcb;
	
	switch(taskforcb){
		case 1:
		booking();
		break;
		
		case 2:
		system("cls");
		certificate();
		
		system("Color F");
		break;
	}
}

void registration()
{	
system ("cls");

    ofstream infile;
	infile.open("textfile.txt");
	cout<<"\n\t\t\t\tWELCOME TO THE REGISTRATION PAGE.\n\n"<<endl;
    cout<<"\t\t\tFOR REGISTRATION PLEASE FILL THE FOLLOWING DETAILS\t\t\n\n"<<endl;
    
    cout<<"\t\tPlease Register with Mobile And Password Digits"<<endl;
 			
			 cout<<"\n\t\t\tEnter Your Mobile => ";
			 cin>>mobile;
			 infile<<mobile<<endl;
			 
			 cout<<"\t\t\tEnter Password in Digit Form => ";
			 cin>>password;
			 infile<<password<<endl;
			 
			 cout<<"\t\t\tEnter Your First Name => ";
			 cin>>Name;
			 infile<<Name<<" ";
			 
			 cout<<"\t\t\tEnter Your Last Name => ";
			 cin>>Surname;
			 infile<<Surname<<endl;
			 
			 cout<<"\t\t\tEnter Your Age => ";
			 cin>>Age;
			 infile<<Age<<endl;
			 
			 cout<<"\n"<<endl;
			 cout<<"\t\t\tEnter Your Date Of Birth  => \n"<<endl;
		
			 cout<<"\t\t\tEnter date=> ";
			 cin>>day;
			 infile<<day<<endl;
			 cout<<"\t\t\tEnter month => ";
			 cin>>month;
			 infile<<month<<endl;
			 cout<<"\t\t\tEnter The Year => ";
			 cin>>year; 
			 infile << year<<endl;
			 cout<<"\n"<<endl;
			infile.close();
			 
			 ofstream outfilethree;
			 outfilethree.open("textfileth.txt");
			 cout<<"\t\t\t Enter AADHAR => ";
			 cin>>aadhar;
			 outfilethree<<aadhar<<endl;
			 
	 
			system("cls");
			 
			cout <<"\t\t\t\tYOU HAVE REGISTERED SUCCESSFULLY!!!\n\n "<<endl;
          
          ifstream outfile("textfile.txt" );
         
          cout<<"\t\t\t\t\t Your Details \n\n"<<endl;
          
          outfile>>mobile;
          cout<<"\t\t\t Your Mobile Number =>"<<mobile<<endl;
          
           outfile>>password;
          cout<<"\t\t\t Your Password => "<<password<<endl;
          
          outfile>>Name>>Surname;
          cout<<"\t\t\t Your Name => "<<Name<<" "<<Surname<<endl;
          
          outfile>>Age;
          cout<<"\t\t\t Age => "<<Age<<endl;
          
          outfile>>day>>month>>year;
          cout<<"\t\t\t Birth Date => "<< day <<"/"<<month <<"/"<<year <<endl;
          outfile.close();
          
          ifstream outfilethf("textfileth.txt");
          outfilethf>>aadhar;
		  cout<<"\t\t\t Your Aadhar => "<<aadhar<<endl;
		  
		  
		  
		  
		printf("\n\n");
		cout<<"\t\t\t!!Please Note Password Carefully!!\n\n"<<endl;
	 
	 	cout<<"If you want to change any details Enter 1 OR Enter 0 to jump login page"<<endl;
	    cin>>back; 
	    
	       if(back==0)
		   {
	       	system("cls");
		     login();
		     
		}
		    else{
		    registration();
	       }
 }
 
void login(){
	ifstream input("textfile.txt");
	 
	 cout<<"\t\t\t Login With Mobile And Password\n"<<endl;
	 
	 cout<<"\t\t\t Enter Your Mobile Number => ";
     cin>>mobile1;
	 
	 cout<<"\t\t\t Enter Your Password => ";
	 cin>>password1;
	 
	 if(input>>mobile && input>>password && mobile==mobile1 && password==password1){
	 	 cout<<"\t\t\t\n\nLogin successfully"<<endl;
	 	 	system("Color A");
	 	 
	 	 display();
	 }
	 else{
	 	
	 	cout<<"\tIncorrect Mobile Number or Password !!"<<endl;
	 	cout<<"\t\t\t\t\tOR\n\t\t You have not Registered Yourself.\n";
	 	cout<<"Press 1 For Registration otherwise 0.";
	 	cin>>y;
	 	system("Color E");
	 	
	 	switch(y)
	 		{
	 			case 0:
	 				login();
	 				break;
	 				
	 			case 1:
	 				registration();
	 				break;
			 }
		 }
		 
	 	input.close();
}

void booking()
	{   system("Color E");
	     time_t now=time(0);
         char* date_time = ctime(&now);
         cout<<"Current Date And Time is:- "<<date_time<<endl;
		int m,x;
		 cout<<"\t\t\tWELCOME TO THE BOOKING PAGE.\n";
		 cout<<"\nFOR BOOKING: PLEASE FILL THE FOLLOWING DETAILS:-\n";
		 
		 ofstream onfile;
		 onfile.open("textfiletwo.txt");
		 
		 cout<<"Enter Current Date => ";
		  
		  cout<<"\n Enter The Date => "<<endl;
		  cin>> curda;
		  onfile<< curda<<endl;
		 
		 cout<<"\n Enter month=> "<<endl;
		 cin>>curmo;
		 onfile<< curmo<<endl;
		 
		 cout<<"\nEnter The Year => "<<endl;
		 cin>>curye; 
	     onfile<< curye<<endl;
		 
		 onfile.close();
		 
		 cout<<"\n\tSelect the City you are in Madhya Pradesh:-\n1.Indore\n2.Bhopal\n3.Ujjain.";
		 cout<<"\n4.Gwalior.\n5.Jabalpur.\n6.Khargone.\n7.Mandsaur.\n8.Dewas.\n9.Neemuch.\n10.Ratlam.\n";
		 
		 cout<<"Enter The City Number :- \n";
		 cin>>m;
		 
		 
		 switch(m)
		 {
		 	case 1:
		 		cout<<"\n\nPlaces Available In Indore For Vaccination:-\n";
		 		cout<<"1.APOLLO HOSPITAL.\n2.BOMBAY HOSPITAL.\n3.C.H.L. HOSPITAL.\n4.ADITYA HOSPITAL.\n5.UNIQUE HOSPITAL.";
		 		cin>>x;
		 		break;
		 	
		 	case 2:
		 		cout<<"Places Available In Bhopal For Vaccination:-\n";
		 		cout<<"1.Vaccine Centre,Peer Gate Area.\n2.Lotus Life Care Hospital.\n3.Dulaar Hospital\n4.Miracles Hospital\n5.Hajela Hospital.";
		 		cin>>x;
		 		break;
		 	
			 case 3:
			    cout<<"Places Available In Ujjain For Vaccination:-\n";
				cout<<"1.Community Hall,Shastri Nagar.\n2.Ujjain District Civil Hospital.\n3.Charak Hospital\n4.Rami Mali Samaj Dharamshala.\n5.Community Hall.";
				cin>>x;
			
			case 4:
			    cout<<"Places Available In Gwalior For Vaccination:-\n";
			    cout<<"1.Garg Clinic.\n2.UPHC Government Hospital.\n3.Bohdapur UPHC\n4.ITM Hospital\n5.Government City Hospital.";
		 		cin>>x;
				break;
				
			case 5:
		 		cout<<"Places Available In Jabalpur For Vaccination:-\n";
		 		cout<<"1.Bombay Hospital And Research Centre.\n2.Manav Vaccines.\n3.Pandey Hospital Pvt Ltd.\n4.Agrawal Eye and child care Hospital.\n5.Jandar Hospital.";
		 		cin>>x;
		 		break;
				 
			case 6:
		 		cout<<"Places Available In Khargone For Vaccination:-\n";
		 		cout<<"1.District Government Hospital.\n2.Ranshree Hospital\n3.Sharda Hospital.\n4.Viraj Hospital.\n5.Shrinath Clinic.";
		 		cin>>x;
		 		break;
			
			case 7:
		 		cout<<"Places Available In Mandsaur For Vaccination:-\n";
		 		cout<<"1.Civil Hospital,Mandsaur.\n2.Shree Sidhi Vinayak Multi Speciality Hospital.\n3.Ajay Hospital.\n4.Government Hospital\n5.A.R.T. Centre District Hospital.";
		 		cin>>x;
		 		break;
			
			case 8:
		 		cout<<"Places Available In Dewas For Vaccination:-\n";
		 		cout<<"1.Apex Care Hospital.\n2.Community Health Centre.\n3.Sunrise Hospital.\n4.Universal Hospital And Health Centre.\n5.Astha Hospital.";
		 		cin>>x;
		 		break;
			
			case 9:
		 		cout<<"Places Available In Neemuch For Vaccination:-\n";
		 		cout<<"1.Pradhan Nursing Hospital.\n2.Civil Hospital,Neemuch.\n3.District Government Hospital,Neemuch\n4.Chordia Hospital.\n5.C.R.P.F. Hospital";
		 		cin>>x;
		 		break;
			
			case 10:
		 		cout<<"Places Available In Ratlam For Vaccination:-\n";
		 		cout<<"1.Padmavati Hospital.\n2.Choudhary Hosital And Research Centre.\n3.CHL Jain Diwakar Hospital.\n4.GD Hospital.\n5.Indubhai Parekh Memorial Hospital.";
		 		cin>>x;
		 		break;		
		 		
		 }
		
		  system("Color A");
		 cout<<"\t\t\tBooked Succesfully\n";
		
		 cout<<"\nPlease Note The Date Of Vaccination.\n";
		 
		 
		  ifstream iffiletwo;
		 iffiletwo.open("textfiletwo.txt");
	
	     iffiletwo>>curda>>curmo>>curye;
	     for (int i=1;i<=28;i++)
	     curda=rand()%100;
		 cout<<"\n\t\t\tDate of Vaccination is:- "<<curda<<" /"<<curmo+1<<" /"<< curye<<endl;
		 cout<<"\nIf Already Booked Ignore it And direct Get Certificate !!!!!"<<endl;
		 cout<<"\n\nOther Than The Above Places You Can Also Visit Nearby Nagar Nigam Place\n\n";
		 	
		 display(); 
	}
	    
	void certificate()
	{
	       cout<<"\t\t\tWELCOME TO THE CERTIFICATE PAGE.";
	       
		   cout<<"\n\nCertificate For COVID-19 Vaccination\n\n";

		   ifstream outfileth("textfileth.txt");
		   
		   long long int aadhar1;
		   cout<<"Enter AAdhar Number => ";
		   cin>>aadhar1;
		   
		   if(outfileth>>aadhar && aadhar1 == aadhar)
		   {
		   	cout <<"aadhar fetch successfully !!\n"<<endl;
		   	
		    cout<<"ID Verified:- "<< aadhar1<<endl;
		    
		    ifstream outfiletwo("textfile.txt");
		  
		   
		   outfiletwo>>Name;
		   outfiletwo>>Surname;
		   
		   cout<<"\n\t\tBENEFICIARY DETAILS ";
		   
		   outfiletwo>>Name;
		   outfiletwo>>Surname;
		   cout<<"Beneficiary Name:- "<<Name<<" "<<Surname<<endl;
		   
		   outfiletwo >>Age;
		   cout<<"Age:- "<<Age<<endl;
		   
		   
		   
		   outfiletwo.close();
		   }
		   else{
		   	cout<<"\n Aadhar is Not Matching !!!!!!!!!\n"<<endl;
		   	int choice;
		   	cout<<"Enter Your Choice => \n";
		   	cout<<" Press 1 for Login "<<endl;
		   	cout<<"Press 2 for Register "<<endl;
		   	cin>>choice;
		   	if(choice==1){
		   		    system("cls");
		   			Covid reg;
		   			reg.registration();
			   }
			else if(choice==2){
				Covid reg;
				system("cls");
				reg.login();
			}
		   }
		   
		   outfileth.close();
		
		   cout<<"\n\tVACCINATION DETAILS\n ";
		   cout<<"\nVaccine Name:- COVISHIELD";
}
};
//Main function
int main(){
	time_t now=time(0);
    char* date_time = ctime(&now); 
    cout<<"Current Date And Time is:- "<<date_time<<endl;
	Covid tasking;     
	tasking.menu();
	return 0;
}

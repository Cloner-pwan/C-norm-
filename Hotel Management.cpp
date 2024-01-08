#include <iostream>
#include <fstream>
#include <windows.h>
#include <iostream>
using namespace std;

	
	




void single_married () 
{
	int single_married;
    cin >> single_married;
    if (single_married == 1) { // this condition used for the single_married function 
    	cout << "The guest is single" << endl;
    	
	} else if (single_married == 2) { 
	    cout << "The guest is married " << endl ;
	string P_firstname, P_lastname;
	    string P_fullname = P_firstname + " " + P_lastname; 
	int P_age;
	string P_phonenumber;
	    cout << "Enter the firstname of the guest's partner ";
            cin >> P_firstname;
        cout << "Enter the lastname of the guest's partner ";   
		    cin >> P_lastname; 
	    cout << "Enter the age of the guest's partner ";
	        cin >> P_age;
	    cout << "Enter the Phone number of the guest's partner ";
	        cin >> P_phonenumber;
   ofstream myfile;
myfile.open("Guest information\\", ios::out);
myfile.open("Guest information\\" + P_firstname + "_" + P_lastname + ".doc", ios::out);
myfile << "Partner information\n" << "Fullname: " <<  P_firstname + "_" + P_lastname << endl 
<< "Age: " << P_age << endl << "Phone number: " << P_phonenumber << endl;
	
	
}
}
int main () {
	
  cout << "Choose on of these options\n Type the option number\n";
  cout << "1 = Register a new guest\n";

int options;
    switch (options) 
{
    case 1: 	
	"Register a new guest";	
}
cin >> options;


if (options == 1 ) {
	string firstname, lastname;
	    string fullname = firstname + " " + lastname; 
	int age;
	string phonenumber;
	int roomnumber;
	string marriage;
	string check_in_time;
	string check_in_day;
	string check_out_day;
	string check_out_time;
	    cout << "Enter the firstname of the guest ";
            cin >> firstname;
        cout << "Enter the lastname of the guest ";   
		    cin >> lastname; 
	    cout << "Enter the age of the guest ";
	        cin >> age;
	    cout << "Enter the Phone number of the guest ";
	        cin >> phonenumber; 
	    
		cout << "Is the guest married or single ? \n";
		 cout << "1 = single \n 2 = Married \n";
	      int single_married;
    cin >> single_married;
    if (single_married == 1) { // this condition used for the single_married function 
    	cout << "The guest is single" << endl;
    	
	} else if (single_married == 2) { 
	    cout << "The guest is married " << endl ;
	string P_firstname, P_lastname;
	    string P_fullname = P_firstname + " " + P_lastname; 
	int P_age;
	string P_phonenumber;
	    cout << "Enter the firstname of the guest's partner ";
            cin >> P_firstname;
        cout << "Enter the lastname of the guest's partner ";   
		    cin >> P_lastname; 
	    cout << "Enter the age of the guest's partner ";
	        cin >> P_age;
	    cout << "Enter the Phone number of the guest's partner ";
	        cin >> P_phonenumber;
   ofstream myfile;
myfile.open("Guest information\\", ios::out);
myfile.open("Guest information\\" + P_firstname + "_" + P_lastname + ".doc", ios::out);
myfile << "Partner information\n" << "Fullname: " <<  P_firstname + "_" + P_lastname << endl 
<< "Age: " << P_age << endl << "Phone number: " << P_phonenumber << endl << "Partners name: "
<< firstname + " " + lastname << endl;
	
	
}
	        cout << "Enter the guest room number ";
	            cin >> roomnumber;
	    cout << "Enter the check in time ";
	        cin >> check_in_time;
	    cout << "Enter the check in day ";
	        cin >> check_in_day;    
	    cout << "Enter the check out day ";
	        cin >> check_out_day;
        cout << "Enter the check out time ";
        cin >> check_out_time;
    cout << firstname + " " + lastname << " Registerd succesfully\n";
	cout << "Registration accomplished\n";
ofstream myfile;
myfile.open("Guest information\\", ios::out);
myfile.open("Guest information\\" + firstname + "_" + lastname + ".doc", ios::out);
myfile <<"Fullname: " << firstname + " " + lastname << endl << "Age: " << age << endl << "Phone number: " << phonenumber << endl << "check in: " << check_in_day + " " + check_in_time << endl 
<< "Check out: " << check_out_day + " " + check_out_time << endl << "Room number: " << roomnumber << endl << "Martial status: " << single_married << endl << "\n1 means single and 2 means married" << endl;  


main();

  



} else {
	cout << "You picked the wrong option\n";
	main ();
}

}





	





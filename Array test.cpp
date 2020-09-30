#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{	int  no;
	char Choice;
	
	int Q[3],M[3],F[3];
	do {
		cout<<"==================================="<<endl;
		cout<<"               MENU             "<<endl; 
		cout<<"==================================="<<endl;
		cout << " 1. Input student records " << endl;
		cout << " 2. View all student records " << endl;
		cout << " 3. Exit " << endl;
		cout <<"Select menu :";
		cin >>Choice;
	
		

		if (Choice == '1')
		{	cout<<"Input Number of Student: ";
			cin>>no;

			int *score = new int[no];
			for(int i=0;i<no;i++)
			{   cout<<"Number"<< i+1 <<endl;
			cout<<"Input Quiz  : ";
				cin>>Q[i];
				cout<<"Input Midterm  : ";
				cin>>M[i];
				cout<<"Input Final  : ";
				cin>>F[i];
		}
			
		}
		else if (Choice == '2'){
            cout << "--------------------------------" << endl ;
			cout << "StdID   Quiz   Midterm  Final" <<endl ;
			cout << "--------------------------------" << endl ;
		for(int i = 0;i<no;i++)
		{ 
			cout << i+1 <<setw(9)<<Q[i]<<setw(9)<<M[i]<<setw(9)<<F[i]<<endl;
		}
		
		}
		else if (Choice == '3') ;
		else{
			cout << "not process.\n"<< endl;
		
		}
	}while (Choice != '3');
	cout << "\n...Exit Program...\n";
	
	return 0 ;
}

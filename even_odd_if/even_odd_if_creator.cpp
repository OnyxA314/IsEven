#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
	ofstream myFile ("is_even_if.cpp");
	
	int max_number_check;

	cout <<"What is the maximum number you want to check (remember bigger number = longer time): ";
	cin >> max_number_check;
	
	cout << "#include <iostream>\n";	//#include <iostream>		//so I can print to the screen
	myFile << "#include <iostream>\n";

	cout << "using namespace std;\n";	//using namespace std; 		//so I don't have to do std:: 
	myFile << "using namespace std;\n\n";


	cout << "int main (void)\n{\n" << endl; 	//int main (void) {
	myFile << "int main (void)\n{\n" << endl;

	cout << "\tfor (int i = 0; i < " << max_number_check << "; i++)\n";		//for (int i = 0; i < X; i++) //X is number inputed by user
	myFile << "\tfor (int i = 0; i < " << max_number_check << "; i++)\n";
	
	cout <<"\t{\n"; // { 		//opening { for the for loop
	myFile << "\t{\n";


	for (int i = 0; i < max_number_check; i++) //loop to create the actual lines of code
	{	
		
		if (i % 2 == 0)
		{
			cout << "\t\tif (i == " << i << ")\n\t\t{\n\t\t\t cout << i << \" is even\" << endl;\n\t\t}" << endl; //is even line of code
			myFile << "\t\tif (i == " << i << ")\n\t\t{\n\t\t\t cout << i << \" is even\" << endl;\n\t\t}" << endl;
		}
		else
		{
			cout << "\t\tif (i == " << i << ")\n\t\t{\n\t\t\t cout << i << \" is odd\" << endl;\n\t\t}" << endl;	//is odd line of code
			myFile << "\t\tif (i == " << i << ")\n\t\t{\n\t\t\t cout << i << \" is odd\" << endl;\n\t\t}" << endl;
		}
	}

	cout << "\n\t}\n";		//}		//closing } for the for loop
	myFile << "\n\t}\n"; 

	cout << "\treturn 0;\n"; //return 0 statement
	myFile <<"\treturn 0;\n";

	cout << "}\n"; //}		//closing } for main
	myFile << "}\n";

	return 0;
}

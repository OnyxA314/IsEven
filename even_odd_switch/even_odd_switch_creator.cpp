#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
	ofstream myFile ("is_even_switch.cpp");
	
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

	cout << "\t\tswitch (i)\n";
	cout << "\t\t{\n";
	myFile << "\t\tswitch (i)\n";
	myFile << "\t\t{\n";


	for (int i = 0; i < max_number_check; i++) //loop to create the actual lines of code
	{	

			if ( i % 2 == 0)
			{
				cout << "\t\t\tcase " << i << ":\n";
				cout << "\t\t\t\tcout << \"" << i << " is even\\n\";\n";
				cout << "\t\t\t\tbreak;\n";
			
				myFile << "\t\t\tcase " << i << ":\n";
				myFile << "\t\t\t\tcout << \""<< i << " is even\\n\";\n";
				myFile << "\t\t\t\tbreak;\n";
			}
		
			else
			{
				cout << "\t\t\tcase " << i << ":\n";
				cout << "\t\t\t\tcout << \"" << i << " << is odd\\n\";\n";
				cout << "\t\t\t\tbreak;\n";

				myFile << "\t\t\tcase " << i << ":\n";
				myFile << "\t\t\t\tcout << \"" << i << " is odd\\n\";\n";
				myFile << "\t\t\t\tbreak;\n";
			}
	}

	
	cout << "\t\t}\n";		//} for closing the switch
	myFile << "\t\t}\n";

	cout << "\n\t}\n";		//}		//closing } for the for loop
	myFile << "\n\t}\n"; 

	cout << "\treturn 0;\n"; //return 0 statement
	myFile <<"\treturn 0;\n";

	cout << "}\n"; //}		//closing } for main
	myFile << "}\n";

	return 0;
}

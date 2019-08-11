#include<iostream>
#include<string>
using namespace std;
int main()
{
	string number ;
	do 
	{
		string str = " " ;
		cout << ">> Progam Change Number to Text <<" << endl;
		cout <<	"Enter Integer number (0 for Exit) : " ;
		cin >> number ;

		if (number != "0") 
		{
			for (int i = 0 ; i < number.length() ; i++ )
			{
				if (number.at(i) == '0') str += "Zero ";
				else if(number.at(i) == '1') str += "One ";
				else if (number.at(i) == '2') str += "Two ";
				else if (number.at(i) == '3') str += "Three ";
				else if (number.at(i) == '4') str += "Four ";
				else if (number.at(i) == '5') str += "Five ";
				else if (number.at(i) == '6') str += "Six ";
				else if (number.at(i) == '7') str += "Seven ";
				else if (number.at(i) == '8') str += "Eight ";
				else if (number.at(i) == '9') str += "Nine ";
			}
			cout << "Text :" << str << endl << endl;
		}
	}while(number != "0");
		cout << "Exit Program " << endl << endl;
	
	return(0);
}
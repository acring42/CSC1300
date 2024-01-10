#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	string input;

	inputFile.open("data.txt");
	if(inputFile.is_open())
	{
		while(getline(inputFile, input))
		{
			cout << input << endl;
		}
	inputFile.close();
	}
	else
		cout << "Error opening the file.\n";
	
	return 0;
}
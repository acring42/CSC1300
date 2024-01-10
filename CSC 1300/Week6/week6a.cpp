#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream outputFile;
	
	int randomNum, userGuess;
	int total = 0;
	
	srand(time(0));

	outputFile.open("data.txt");
	for(int x=0; x<10; x++)
	{
		randomNum = rand()%(77-7+1)+7;
		outputFile << randomNum;
		outputFile << endl;
		total += randomNum;
	}
		
	outputFile << "\n\nThe total of all the random numbers is " << total << endl;
	outputFile.close();
	return 0;
}
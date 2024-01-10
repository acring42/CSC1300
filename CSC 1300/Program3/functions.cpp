/************************************************************
 *	File Name:		functions.cpp                           *
 *	Author:    		Austin Ring                             *
 *	Date Modified:  10/15/2020                              *
 *	Purpose:  		Functions for the Hangman game			*
 ************************************************************/
#include "hangman.h"
/*	FUNCTION:  printStage
	This function prints out the diagram representing each
	stage of the game.  There are seven different diagrams.
*/
void printStage(int stage)
{
	switch(stage)
	{	
		case 0:   	cout << "                    \n";
					cout << "     +-----+        \n";
					cout << "     |     |        \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "  --------------    \n";
					break;
		
		case 1:   	cout << "                    \n";
					cout << "     +-----+        \n";
					cout << "     |     |        \n";
					cout << "     |     O        \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "  --------------    \n";
					break;	
		case 2:   	cout << "                    \n";
					cout << "     +-----+        \n";
					cout << "     |     |        \n";
					cout << "     |     O        \n";
					cout << "     |     |        \n";
					cout << "     |     |        \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "  --------------    \n";
					break;	
		case 3:   	cout << "                    \n";
					cout << "     +-----+        \n";
					cout << "     |     |        \n";
					cout << "     |     O        \n";
					cout << "     |     |\\      \n";
					cout << "     |     |        \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "  --------------    \n";
					break;	
		case 4:   	cout << "                    \n";
					cout << "     +-----+        \n";
					cout << "     |     |        \n";
					cout << "     |     O        \n";
					cout << "     |    /|\\      \n";
					cout << "     |     |        \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "  --------------    \n";
					break;	
		case 5:   	cout << "                    \n";
					cout << "     +-----+        \n";
					cout << "     |     |        \n";
					cout << "     |     O        \n";
					cout << "     |    /|\\      \n";
					cout << "     |     |        \n";
					cout << "     |      \\      \n";
					cout << "     |              \n";
					cout << "     |              \n";
					cout << "  --------------    \n";
					break;	
		case 6:   	cout << "                    \n";
					cout << "     +-----+        \n";
					cout << "     |     |        \n";
					cout << "     |     O        \n";
					cout << "     |    /|\\      \n";
					cout << "     |     |        \n";
					cout << "     |    / \\      \n";
					cout << "     |              \n";
					cout << "     |   DEAD!      \n";
					cout << "  --------------    \n";
					break;	
	}
	cout << "\n\n";
}
/*	FUNCTION:  printWord
	This function prints out the letters that have
	been correctly guessed in their correct positions 
	and underscores for where remaining letters.
*/
void printWord(char a[], char b[]){
	int wordSize = strlen(a);
	cout << "\nWord: ";
	for (int i=0; i<wordSize; i++){
		cout << b[i] << " ";
	}
	cout << "\n";
}
/*	FUNCTION:  printLettersGuessed
	This function prints out the letters that have
	already been guessed.
*/
void printLettersGuessed(bool a[], char b[]){
	int arrayLength = strlen(b);
	cout << "\nLETTERS YOU HAVE ALREADY GUESSED: ";
	for (int i=0; i<arrayLength; i++){
    	if (a[i] == true){
    	    cout << b[i] << " ";
    	}
	}
	cout << "\n";
}
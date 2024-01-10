/************************************************************
 *	File Name:		hangman.h                               *
 *	Author:         Austin Ring                             *
 *	Date Modified:  10/15/2020                              *
 *	Purpose:        Header file for Hangman game		    *
 ************************************************************/
#ifndef _HANGMAN_H
#define _HANGMAN_H

/*  Now we include the other headers we need */
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

/*  Now we include all the function prototypes */
void printStage(int);
void printWord(char[], char[]);
void printLettersGuessed(bool[], char[]);


#endif
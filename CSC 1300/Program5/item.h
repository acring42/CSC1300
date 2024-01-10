/************************************************************
 *	File Name:		item.h                                  *
 *	Author:         Austin Ring                             *
 *	Date Modified:  11/19/2020                              *
 *	Purpose:        Factory Inventory Program               *
 ************************************************************/
#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

struct Money{
    float rawPrice, salePrice, profit;
};

struct Item{
    string name, description, *nameStores, createDate;
    int numStores;
    Money cost;
};

#endif
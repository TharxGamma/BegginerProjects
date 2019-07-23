#include <stdio.h>
#include <iostream>
#include "MarcDrawMan.h"

#define SIZEX 100 //SIZEX and SIZEY is set and defined to be used later
#define SIZEY 30

char Canvas[SIZEX][SIZEY] ; // Declare a char 2d array and set SIZEX and SIZEY


void Refresh();
void DrawMan();
void PrintMyMan();
void SetLocation(int, int);


int main() // Main duh
{

	Man men[10];
	men[0].Refresh();
	men[0].SetLocation(5, 5);
	men[0].DrawMan();
	men[0].PrintMyMan();
	return 0;
}




#include <stdio.h>
#include <stdlib.h>



int PawnMoveWhite (int y, int x, int y1, int x1, char (*A)[10], int hod)
{
	if (A[y][x] == 'p')
	{	
		if ((abs(y1-y) == 2) && (y == 7))
			if ((A[y1][x1] == ' ') && (x == x1) && (y1 < y)){
	        	printf("Possible move");
		      	A[y1][x1] = A[y][x];
		    	A[y][x] = ' ';
		       	hod++;
			 }

		if (abs(y1-y) == 1)
			if ((A[y1][x1] == ' ') && (x == x1) && (abs(y1-y) <= 2) && (y1 < y)){
		       	printf("Possible move");
	        	A[y1][x1] = A[y][x];
	        	A[y][x] = ' ';
		      	hod++;
	        	}
	}
return hod;
}

int PawnMoveBlack (int y, int x, int y1, int x1, char (*A)[10], int hod)
{

	if (A[y][x] == 'P')
	{	
		if ((abs(y1-y) == 2) && (y == 2))
			if ((A[y1][x1] == ' ') && (x == x1) && (y < y1)){
		       	printf("Possible move");
	        	A[y1][x1] = A[y][x];
	        	A[y][x] = ' ';
		       	hod++;
			}
		if (abs(y1-y) == 1)
			if ((A[y1][x1] == ' ') && (x == x1) && (abs(y1-y) <= 2) && (y < y1)){
	        	printf("Possible move");
			A[y1][x1] = A[y][x];
	        	A[y][x] = ' ';
	        	hod++;
		      	}
	}
return hod;
}

int PawnMove (int y, int x, int y1, int x1, char (*A)[10], int hod)
{
	
	if ((A[y][x] == 'p') && (((hod%2) == 0)||(hod == 0)))
	{
		hod = PawnMoveWhite(y, x, y1, x1, A, hod);
		
	}

	 if ((A[y][x] == 'P') && (((hod%2) == 1)||(hod == 1)))
	{
		hod = PawnMoveBlack(y, x, y1, x1, A, hod);	
		
	}
	return hod;
}

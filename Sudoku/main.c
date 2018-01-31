#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include "../Headers/Headers.h"
#include "../Branches/Cursor.c"
#include "../Branches/Screen.c"
#include "../Branches/Solver.c"
#include "../Branches/Loading.c"
int main()
{
    system("cls");
    frontScreen();
    solve_Sudoku();
}






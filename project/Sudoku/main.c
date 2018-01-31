#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../Headers/Headers.h"
#include "../Branches/Cursor.c"
#include "../Branches/Screen.c"
#include "../Branches/Solver.c"
#include "../Branches/Loading.c"
int main()
{
    system("cls");
    showLoading("Loading,please wait",2);
    solve_Sudoku();
}






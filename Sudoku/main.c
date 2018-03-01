#include <stdio.h>
#include <windows.h>
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
    system("pause");
    return 0;
}






    void solve_Sudoku()
    {
        system ("cls");
        int sudoku[9][9];
        setScreen();
        getInput(sudoku);
        system("cls");
        if (solveSudoku(sudoku)==true);
        {
            setScreen();
            displaySolution(sudoku);
        }
    }
    
    bool solveSudoku(int sudoku[9][9])
    {
    int row=0;
    int col=0;

    if (!CheckEmptyCell(sudoku, &row, &col))
        return true;
    for (int num = 1; num <= 9; num++)
    {
        if (CheckConflict(sudoku, row, col, num))
        {
            sudoku[row][col] = num;
            if (solveSudoku(sudoku))
                return true;
            sudoku[row][col] = EMPTY;
        }
    }
    return false;
    }



bool CheckEmptyCell(int sudoku[9][9],int* row,int* col)
{

    for (*row = 0; *row < 9; (*row)++){
        for (*col = 0; *col < 9; (*col)++){
            if (sudoku[*row][*col] == EMPTY){
                return true;
            }
        }
    }
    return false;
}

bool CheckRow(int sudoku[9][9], int row, int num)
{
    for (int col = 0; col < 9; col++)
    {    
        if (sudoku[row][col] == num)
        {
            return true;
        }
    }
    return false;
}

bool CheckCol(int sudoku[9][9], int col, int num)
{
    for (int row = 0; row < 9; row++)
    {
        if (sudoku[row][col] == num)
        {
            return true;
        }
    }
    return false;
}

bool CheckBox(int sudoku[9][9], int boxRow, int boxCol, int num)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (sudoku[row+boxRow][col+boxCol] == num)
            {
                return true;
            }
        }
    }
    return false;
}


bool CheckConflict(int sudoku[9][9], int row, int col, int num)
{
    return !CheckRow(sudoku, row, num) &&
           !CheckCol(sudoku, col, num) &&
           !CheckBox(sudoku, row - row%3 , col - col%3, num);
}



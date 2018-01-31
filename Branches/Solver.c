    void solve_Sudoku()
    {
        system ("cls");
        int sudoku[9][9];
        setScreen();
        getInput(sudoku);
        system("cls");
        if (solveSudoku(sudoku)==true)
        {
            setScreen();
            displaySolution(sudoku);
        }
        else
        {
            printf("No solution exists");
        }
    }

    bool solveSudoku(int sudoku[9][9])
    {
    int row=0;
    int col=0;

    if (CheckEmptyCell(sudoku, &row, &col))          //if no cell is left to be filled then sudoku is solved!!
        return true;
    for (int num = 1; num <= 9; num++)                //else start filling with numbers from 1 to 9
    {
        if (CheckConflict(sudoku, row, col, num))     //if there is no conflict then fill that cell with the number
        {
            sudoku[row][col] = num;
            if (solveSudoku(sudoku))                  //using recursion check if sudoku is solved
                return true;
            sudoku[row][col] = EMPTY;                 //if not solved, put the value of that cell 0 and try again for another number
        }
    }
    return false;
    }



bool CheckEmptyCell(int sudoku[9][9],int* row,int* col)//this simply checks if any cell is empty
{

    for (*row = 0; *row < 9; (*row)++){
        for (*col = 0; *col < 9; (*col)++){
            if (sudoku[*row][*col] == EMPTY){
                return false;
            }
        }
    }
    return true;
}

bool CheckRow(int sudoku[9][9], int row, int num)      //checks row if the number is repeated or not
{
    for (int col = 0; col < 9; col++)
    {
        if (sudoku[row][col] == num)
        {
            return false;
        }
    }
    return true;
}

bool CheckCol(int sudoku[9][9], int col, int num)      //checks column
{
    for (int row = 0; row < 9; row++)
    {
        if (sudoku[row][col] == num)
        {
            return false;
        }
    }
    return true;
}

bool CheckBox(int sudoku[9][9], int boxRow, int boxCol, int num)  //checks box
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (sudoku[row+boxRow][col+boxCol] == num)
            {
                return false;
            }
        }
    }
    return true;
}


bool CheckConflict(int sudoku[9][9], int row, int col, int num) //checks conflict
{
    return CheckRow(sudoku, row, num) &&
           CheckCol(sudoku, col, num) &&
           CheckBox(sudoku, row - row%3 , col - col%3, num);
}



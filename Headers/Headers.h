#define EMPTY 0
COORD coord={0,0};
typedef int bool;
enum {false,true};
void gotoxy(int ,int );
void setCursor(int ,int );
void frontScreen();
void setScreen();
void setTab(int );
void getInput(int a[9][9],int b[9][9]);
void displaySolution(int a[9][9],int b[9][9]);
void showLoading(char s[],int n);
void solve_Sudoku();
void checkForColor(int ,int, int, int b[9][9] );
void setColor(int value);
bool solveSudoku(int a[9][9]);
bool checkEmptyCell(int sudoku[9][9],int* ,int* );
bool checkRow(int sudoku[9][9], int row, int num);
bool checkCol(int sudoku[9][9], int col, int num);
bool checkBox(int sudoku[9][9],int boxRow,int boxCol, int num);
bool checkConflict(int sudoku[9][9], int row, int col, int num);




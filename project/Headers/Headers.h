void gotoxy(int ,int );
void setCursor(int ,int );
void setScreen();
void setTab(int );
void getInput(int a[9][9]);
COORD coord={0,0};
typedef int bool;
enum {false,true};
bool solveSudoku(int a[9][9]);
bool CheckEmptyCell(int sudoku[9][9],int* ,int* );
bool CheckRow(int sudoku[9][9], int row, int num);
bool CheckCol(int sudoku[9][9], int col, int num);
bool CheckBox(int sudoku[9][9], int boxRow, int boxCol, int num);
bool CheckConflict(int sudoku[9][9], int row, int col, int num);
void displaySolution(int a[9][9]);
void showLoading(char s[],int n);
void solve_Sudoku();
#define EMPTY 0

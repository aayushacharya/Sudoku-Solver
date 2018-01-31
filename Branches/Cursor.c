
void gotoxy(int x, int y)       //gotoxy not available in Codeblocks so defining ourselves
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



void setCursor(int x,int y)     //have a more descriptive name for setting cursor
{
    gotoxy(x,y);
}

void gotoxy(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



void setCursor(int x,int y)
{
    gotoxy(x,y);
}
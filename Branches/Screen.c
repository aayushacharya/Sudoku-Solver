
void setTab(int a)             //sets number of tabs
{
    int i;
    for (i=0;i<a;i++)
    {
        printf(" \t");
    }
}

void setScreen()                //displays sudoku grid
{

    setTab(4);
    printf("SUDOKU SOLVER:: \n");
    setTab(3);
    printf("__________________________________\n");
    int c=0;
    for(;c<9;c++)
    {
        setTab(3);
        printf("||  |  |  ||   |  |  ||   |  |  ||\n");
        setTab(3);
        printf("||__|__|__|| __|__|__|| __|__|__||\n");
        if (c==2 || c==5)
        {
            setTab(3);
            printf("__________________________________\n");
        }

    }

}

void getInput(int a[9][9], int b[9][9])                      //gets sudoku input
{
    int i,j,p,q;
    q=3;
    for (i=0;i<9;i++)
    {
        p=27;
        for (j=0;j<9;j++)
        {
            setCursor(p+j*2,q+i);
            if (j==2 || j==5 )
                p+=2;
            scanf("%d",&a[i][j]);
            checkForColor(a[i][j],i,j,b);
            p++;

        }
        q++;
        if (i==2 || i==5)
            q++;

    }


}

void displaySolution(int a[9][9],int b[9][9])               //displays solution
{
    showLoading("Solving",3);
    system("cls");
    setScreen();
    int i,j,p,q;
    q=3;
    for (i=0;i<9;i++)
    {
        p=27;
        for (j=0;j<9;j++)
        {
            setCursor(p+j*2,q+i);
            if (j==2 || j==5 )
                p+=2;
            if (b[i][j]==a[i][j])
            {
                setColor(12);                                //coloured output for input numbers
                printf("%d",a[i][j]);
            }
            else
            {
            setColor(15);                                   //white ouput for solved colors
            printf("%d",a[i][j]);
            }
            setColor(7);                                   //changing it back to white
            p++;
        }
        q++;
        if (i==2 || i==5)
            q++;

    }

}


void frontScreen()                      //displays welcome screen
{
    setTab(3);
    printf("WELCOME TO SUDOKU SOlVER\n");
    setTab(2);
    printf("        -----------------------------\n\n");
    printf("How to solve:\n");
    printf("1. Sudoku consists of a 9X9 grid.\n2. You have to fill the numbers from 1 to 9 so that:\n   a)No row should contain the same number\n   b)No column should contain the same number\n   c)No 3X3 box should contain the same numbers.\n\n");
    setTab(1);
    printf("NOTE: For empty cells put 0 then enter\n\n");
    printf("To continue press y to end press n ");
    char c=getch();
    if (c=='n')
    {
        exit(1);
    }
    else if(c=='y')
    {
        showLoading("Loading,please wait",2);
    }

}

void checkForColor(int num,int row, int col,int b[9][9])
{
    
    if(num != EMPTY)
    {
        b[row][col]=num;    
    }

}

void setColor(int value)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

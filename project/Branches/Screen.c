
void setTab(int a)
{
    int i;
    for (i=0;i<a;i++)
    {
        printf(" \t");
    }
}

void setScreen()
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

void getInput(int a[9][9])
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
            p++;
        }
        q++;
        if (i==2 || i==5)
            q++;

    }


}


void displaySolution(int a[9][9])
{
    showLoading("SOLVING",4);
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
            printf("%d",a[i][j]);
            p++;
        }
        q++;
        if (i==2 || i==5)
            q++;

    }

}

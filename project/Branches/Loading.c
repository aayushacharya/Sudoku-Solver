void showLoading(char s[],int n)
{
    system("cls");
    setCursor(25,8);
    printf("%s",s);
    int i=0;
    while(i<3)
    {
        sleep(n);
        printf(".");
        i++;
    }
}
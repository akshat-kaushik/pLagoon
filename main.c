#include<stdio.h>
#include"utils/function.h"
#include"UI-UX/welcome.h"

int main()
{
    welcome();
    char dirname[MAX];
    printf("ENTER PATH : ");
    gets(dirname);
    protocal();
    int nit;
    scanf("%d",&nit);
    lister(dirname,nit);
    printf("Total Lines of Code : %d <$>",total());

    return 0;
}
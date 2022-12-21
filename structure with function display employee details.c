#include<stdio.h>
#include<conio.h>

struct branch
{
    long income, exp, sav;
    char name[50];
}br;

void show (struct branch *brn);

main()
{

    printf("Enter Branch Name :");
    scanf("%s", br.name);
    printf("Enter Income :");
    scanf("%ld", &br.income);
    printf("Enter Expendeture :");
    scanf("%ld", &br.exp);
    br.sav=br.income-br.exp;
    show(&br);
    getch();
}

void show(struct branch *brn)
    {

        printf("\n BRANCH NAME  :%s", brn->name);
        printf("\n TOTAL INCOME  :%ld", brn->income);
        printf("\n TOTAL EXPENDETURE  :%ld", brn->exp);
        printf("\n SAVINGS  :%ld",brn->sav);
    }

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int list();
void deposit();
void last();
void transfar();
void withdrwal();
void checkdetails();
int totalamount=1000,amount,amo,tr,totalDeposit=0,Totalwith=0;
int totaltr=0;
int acc;
char a[50];
void main(){
    printf("Enter Account Holder Name");
    gets(a);
    printf("Enter Account Number");
    scanf("%d",&acc);
    while (1)
    {
        clrscr();
        switch (list())
        {
        case 1:
            deposit();
            totalDeposit+=amount;            
            break;
        case 2:
            withdrwal();
            if (amo<=totalamount)
            {
                totaltr+=tr;
            }
            break;
        case 3:
        transfar();
        if (tr<=totalamount)
        totaltr+=tr;
        break;
        case 4:
        checkdetails();
        getch();
        case 5:
        clrscr();
        last();
        exit(0);
        break;
        default:
        printf("Invalid Input");
            break;
        }
    }
    
}    
int list(){
    int ch;
    printf("\n1 Deposit Amount:");
    printf("\n2 Withdrwal Amount:");
    printf("\n3 Transfaramount:");
    printf("\n4 Check Details");
    printf("\n5 Exit");
    printf("\n6 Enter Valid Input For Your Choice:");
    scanf("%d",&ch);
    return(ch);
}
void deposit(){
    printf("\nEnter Deposit Amount");
    scanf("%d",&amount);
    totalamount+=amount;
}
void withdrwal(){
    printf("\nEnter Withdrwal amount");
    scanf("%d",&amo);
    if (amo<= totalamount )
    {
        totalamount=amo;
    }
    else{
        printf("\n Insaficiant Balance To withdrwal");
    }
    
}    

void transfar(){
    printf("\nEnter Transfer Ammount");
    scanf("%d",&tr);
    if (tr<=totalamount)
    {
       totalamount-=tr;
    }
    else{
        printf("\nLess amount transfer cannot Possible");
    }
    
}
void checkdetails(){
    printf("\nTotal amount%d",totalamount);
    printf("\nTotal deposit Amount%d",totalDeposit);
    printf("\nTotal Transfred Amount%d",totaltr);
}
void last(){
    printf("\n-----------------------------------\n");
    printf("\n Your name=%s",a);
    printf("\n Account No=%d",acc);
    printf("\nTotal Amount=%d",totalamount);
    printf("\nTotal Deposit Amount=%d",totalDeposit);
    printf("\nTotal Withdrwal Amount=%d",totaltr);
    printf("\n \n---------Bank of C-----------");
}
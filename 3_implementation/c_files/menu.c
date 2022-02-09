#include"phone.h"

void menu()
{
    system("cls");
printf("\t\t**********WELCOME TO PHONEBOOK*************");

printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete\t\n\n");
printf("\n\t\Please Enter the Number you Want to Choose");
switch(getch())
{
    case '1':

                add();
    break;
   case '2': list();
    break;
    case '3': exit(0);
    break;
    case '4': update();
    break;
    case '5': search();
    break;
    case '6': delete();
    break;
    default:
                system("cls");
                printf("\nEnter 1 to 6 only");
                printf("\n Enter any key");
                getch();

menu();
}
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include"phone.h"

void add()
{
        system("cls");
        FILE *files;
        struct phone x;
        files=fopen("project","ab+");
        printf("\n Enter Name: ");
        gt(x.name);
        printf("\nEnter the Address: ");
        gt(x.add);
        printf("\nEnter Father Name: ");
        gt(x.f_name);
        printf("\nEnter Mother Name: ");
        gt(x.m_name);
        printf("\nEnter phone Number.:");
        scanf("%ld",&x.ph_no);
        printf("Enter Gender:");
        gt(x.gender);
        printf("\nEnter Email Address:");
         gt(x.email);
        printf("\nEnter Pin Code:");
        gt(x.postal);
        fwrite(&x,sizeof(x),1,files);

      fflush(stdin);
        printf("\nNew Record Has Been Successfully Saved");

fclose(files);

    printf("\n\nEnter any key");

	 getch();
    system("cls");
    menu();
}

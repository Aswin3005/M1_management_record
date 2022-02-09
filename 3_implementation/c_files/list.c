#include"phone.h"

void list()
{
    struct phonebook x;
    FILE *files;
files=fopen("project","rb");
if(files==NULL)
{
printf("\nfile opening error in listing :");

exit(1);
}
while(fread(&x,sizeof(x),1,files)==1)
{
     printf("\n\n\n YOUR RECORD INFORMATION IS\n\n ");
        printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobile no=%ld\nSex=%s\nE-mail=%s\nCitizen no=%s",x.name,x.add,x.f_name,x.m_name,x.ph_no,x.gender,x.email,x.postal);

	 getch();
	 system("cls");
}
fclose(files);
 printf("\n Enter any key");
 getch();
    system("cls");
menu();
}

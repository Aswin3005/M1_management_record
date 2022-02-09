
#include"phone.h"

void search()
{
    struct phonebook x;
FILE *files;
char name[100];

files=fopen("project","rb");
if(files==NULL)
{
    printf("\n error in opening\a\a\a\a");
    exit(1);

}
printf("\nEnter the Name of Person you want to Search\n");
gt(name);
while(fread(&x,sizeof(x),1,files)==1)
{
    if(strcmp(x.name,name)==0)
    {
        printf("\n\tDetail Information About %s",name);
        printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nCitision no:%s",x.name,x.add,x.f_name,x.m_name,x.ph_no,x.gender,x.email,x.postal);
    }
        else
        printf("file not found");

}
 fclose(files);
  printf("\n Enter any key");

	 getch();
    system("cls");
menu();
}

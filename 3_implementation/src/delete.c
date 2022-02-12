#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include"phone.h"


void delete()
{
    struct phone x;
    FILE *files,*file_temp;
	int fl;
	char name[100];
	files=fopen("project","rb");
	if(files==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.");

		}
	else
	{
		file_temp=fopen("temp","wb+");
		if(file_temp==NULL)

            printf("file opening error");
		else

        {


		printf("Enter CONTACT'S NAME:");
		gt(name);

		fflush(stdin);
		while(fread(&x,sizeof(x),1,files)==1)
		{
			if(strcmp(x.name,name)!=0)
				fwrite(&x,sizeof(x),1,file_temp);
			if(strcmp(x.name,name)==0)
                fl=1;
		}
	fclose(files);
	fclose(file_temp);
	if(fl!=1)
	{
		printf("NO CONACT'S RECORD TO DELETE.");
		remove("temp.txt");
	}
		else
		{
			remove("project");
			rename("temp.txt","project");
			printf("RECORD DELETED SUCCESSFULLY.");

		}
	}
}
 printf("\n Enter any key");

	 getch();
    system("cls");
menu();
}

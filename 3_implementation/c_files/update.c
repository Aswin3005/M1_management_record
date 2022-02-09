#include"phone.h"

void update()
{
    int b;
    FILE *files;
    int fl=0;
    struct phonebook x,y;
	char  name[50];
	files=fopen("project","rb+");
	if(files==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.");
			exit(1);


		}
	else
	{
	    system("cls");
		printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
            gt(name);
            while(fread(&x,sizeof(x),1,files)==1)
            {
                if(strcmp(name,x.name)==0)
                {



                    printf("\n Enter Name:");
                    gt(y.name);
                    printf("\nEnter the Address:");
                    gt(y.add);
                    printf("\nEnter Father Name:");
                    gt(y.f_name);
                    printf("\nEnter Mother Name:");
                    gt(y.m_name);
                    printf("\nEnter Contact Number:");
                    scanf("%ld",&y.ph_no);
                    printf("\nEnter Gender:");
                    gt(y.gender);
                    printf("\nEnter Email Address:");
                    gt(y.email);
                    printf("\nEnter Postal Code\n");
                    gt(y.postal);
                    fseek(files,-sizeof(x),SEEK_CUR);
                    fwrite(&y,sizeof(x),1,files);
                    fl=1;
                    break;



                }
                fflush(stdin);


            }
            if(fl==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(files);
	}
	 printf("\n Enter any key");
	 getch();
    system("cls");
	menu();

}

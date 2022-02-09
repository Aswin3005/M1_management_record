#include"phone.h"

void gt(char *name)
{

   int l=0,k;
    char o,cha;
    do
    {
        o=getch();
                if(o!=8&&o!=13)
                {
                    *(name+l)=o;
                        putch(o);
                        l++;
                }
                if(o==8)
                {
                    if(l>0)
                    {
                        l--;
                    }
                   // printf("h");
                    system("cls");
                    for(k=0;k<l;k++)
                    {
                        cha=*(name+k);
                        putch(cha);

                    }

                }
    }while(o!=13);
      *(name+l)='\0';
}


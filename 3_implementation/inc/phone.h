#ifndef PHONE_H_INCLUDED
#define PHONE_H_INCLUDED

struct phone
{
    char name[35];
    char add[50];
     char f_name[35];
     char m_name[30];
    long int ph_no;
    char gender[8];
    char email[100];
    char postal[20];

    };


void menu();
void gt();
void add();
void list();
void update();
void delete();
void search();


#endif // PHONE_H_INCLUDED

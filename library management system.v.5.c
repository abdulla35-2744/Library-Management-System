#include<stdio.h>
///Declaring structure in library system
struct librarysystem{
    char library_book_name1[100][25];
    int student_id[10];
    int number;
    char book_name[10];

};

int main(){

    struct librarysystem books;
 ///Declaring ten library book name in library management system.
///Declaring  array String type variable
    char library_book_name1[100][25]={"Computer Fundamental","Programming content","Introduction of SWE","Statistics","Mathematics","Physics","English","Computer Material","History","General Knowledge"};
///Declaring a variable from users as input.
     int student_id[10];
    char book_name[10];
    printf("Log in to Library system: ");
    scanf("%d",&books.student_id);
///Declaring another variable from users as input.
    int number;
    int counter;
    printf("How many Book Do You Want: ");
    scanf("%d",&books.number);

///Using Loop for counting how many time it repeat.
   for(counter=0; counter<=number-1; counter++){

       printf("Enter Book name That You Want:%d ",counter+1);
       scanf("%s",books.book_name);
///String comparing function.and use conditional statement.
///This conditional statement for 10 library book name.
       if(strcmp(books.book_name,library_book_name1[counter])==0)
    {

    printf("This Book Is Available\nBook ID:123\nSelf:7\n");
    }
///Ten time different printing..
    if(counter==1)
    {
        printf("This Book Is Available\nBook ID:321\nself:4\n");
    }

    if(counter==2)
    {
        printf("This Book Is Available\nBook ID:312\nSelf:1\n");

    }

    if(counter==3)
    {
        printf("This Book Is Available\nBook ID:456\nSelf:9\n");
    }

    if(counter==4)
    {
        printf("This Book Is Available\nBook ID:654\nSelf:3\n");

    }
    if(counter==5)
    {
        printf("This Book Is Available\nBook ID:564\nSelf:6\n");
    }

    if(counter==6)
    {
        printf("This Book Is Available\nBook ID:987\nSelf:2\n");

    }

    if(counter==7)
    {
        printf("This Book Is Available\nBook ID:789\nSelf:10\n");
    }

    if(counter==8)
    {
        printf("This Book Is Available\nBook ID:897\nSelf:12\n");
    }


    if(counter==9)
    {
        printf("This Book Is Available\nBook ID:900\nSelf:12");
    }


   }





}







#include<stdio.h>
#include<stdlib.h>
///Declaring structure in library system
struct librarysystem{
    char library_book_name1[100][25];
    int student_id[10];
    char book_name[10];

};
///Declaring two function for library system
void librarysystem1();
void librarysystem2();

///First Function
void librarysystem1()
{

    struct librarysystem books;
///Declaring ten library book name in library management system.
///Declaring  array String type variable
    char library_book_name1[100][25]={"Computer Fundamental","Programming content","Introduction of SWE","Statistics","Mathematics","Physics","English","Computer Material","History","General Knowledge"};
///Declaring a variable from users as input.
     int student_id[10];
    char book_name[10];
    printf("Log in to Library system: ");
    scanf("%d",&books.student_id);
    int counter;
     printf("Enter Book name That You Want:" );
    scanf("%s",books.book_name);

///Using Loop for counting how many time it repeat.

   for(counter=0; counter<=10; counter++){
///String comparing function.and use conditional statement.
///This conditional statement for 10 library book name.

       if(strcmp(books.book_name,library_book_name1[counter])==0)
    {
       if(counter==0)
       printf("This Book Is Available\nBook ID:123\nSelf:7\n");



    if(counter==1)

        printf("This Book Is Available\nBook ID:321\nself:4\n");


    if(counter==2)

        printf("This Book Is Available\nBook ID:312\nSelf:1\n");
  int counter=0;
    int counter1=0;



    if(counter==3)

        printf("This Book Is Available\nBook ID:456\nSelf:9\n");


    if(counter==4)

        printf("This Book Is Available\nBook ID:654\nSelf:3\n");


    if(counter==5)

        printf("This Book Is Available\nBook ID:564\nSelf:6\n");


    if(counter==6)

        printf("This Book Is Available\nBook ID:987\nSelf:2\n");



    if(counter==7)

        printf("This Book Is Available\nBook ID:789\nSelf:10\n");


    if(counter==8)

        printf("This Book Is Available\nBook ID:897\nSelf:12\n");



    if(counter==9)

        printf("This Book Is Available\nBook ID:900\nSelf:12");



      }
    }
}


///second time using function..
void librarysystem2()
{

    struct librarysystem books;
///Declaring ten library book name in library management system.
///Declaring  array String type variable
    char library_book_name1[100][25]={"Computer Fundamental","Programming content","Introduction of SWE","Statistics","Mathematics","Physics","English","Computer Material","History","General Knowledge"};




    int counter;

    scanf("%s",books.book_name);
///Using Loop for counting how many time it repeat.
     for(counter=0; counter<=10; counter++){
///String comparing function.and use conditional statement.
///This conditional statement for 10 library book name.

       if(strcmp(books.book_name,library_book_name1[counter])==0)
    {
       if(counter==0)
       printf("This Book Is Available\nBook ID:123\nSelf:7\n");



    if(counter==1)

        printf("This Book Is Available\nBook ID:321\nself:4\n");


    if(counter==2)

        printf("This Book Is Available\nBook ID:312\nSelf:1\n");



    if(counter==3)

        printf("This Book Is Available\nBook ID:456\nSelf:9\n");


    if(counter==4)

        printf("This Book Is Available\nBook ID:654\nSelf:3\n");


    if(counter==5)

        printf("This Book Is Available\nBook ID:564\nSelf:6\n");


    if(counter==6)

        printf("This Book Is Available\nBook ID:987\nSelf:2\n");



    if(counter==7)

        printf("This Book Is Available\nBook ID:789\nSelf:10\n");


    if(counter==8)

        printf("This Book Is Available\nBook ID:897\nSelf:12\n");



    if(counter==9)

        printf("This Book Is Available\nBook ID:900\nSelf:12");



      }
    }



}

int main(){
///call first function
    librarysystem1();
    printf("If You Want More Book Enter Book Name:");
///call second function..
        librarysystem2();

}














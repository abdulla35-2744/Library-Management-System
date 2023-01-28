#include<stdio.h>

int main(){

    ///Declaring ten library book name in library management system.
    ///Declaring String type variable

    char library_book_name1[25]={"Computer Fundamental"};
    char library_book_name2[22]={"Programming content"};
    char library_book_name3[30]={"Introduction of SWE"};
    char library_book_name4[15]={"Statistics"};
    char library_book_name5[15]={"Mathematics"};
    char library_book_name6[10]={"Physics"};
    char library_book_name7[10]={"English"};
    char library_book_name8[20]={"Computer Material"};
    char library_book_name9[15]={"History"};
    char library_book_name10[30]={"General Knowledge"};
///Declaring a variable from users as input.
    int Student_ID;
    char book_name[10];
    printf("Log in to Library system: ");
    scanf("%d",&Student_ID);

    printf("Enter Book name That You Want: ");
    scanf("%s",book_name);

///String comparing function.and use conditional statement.
///This conditional statement for 10 library book name.

       if(strcmp(book_name,library_book_name1)==0)
    {
        printf("This Book Is Available\nBook ID:123\nSelf:7\n");
    }

    else if(strcmp(book_name,library_book_name2)==0)
    {
        printf("This Book Is Available\nBook ID:321\nself:4\n");
    }

    else if(strcmp(book_name,library_book_name3)==0)
    {
        printf("This Book Is Available\nBook ID:312\nSelf:1\n");

    }

    else if(strcmp(book_name,library_book_name4)==0)
    {
        printf("This Book Is Available\nBook ID:456\nSelf:9\n");
    }

    else if(strcmp(book_name,library_book_name5)==0)
    {
        printf("This Book Is Available\nBook ID:654\nSelf:3\n");

    }
    else if(strcmp(book_name,library_book_name6)==0)
    {
        printf("This Book Is Available\nBook ID:564\nSelf:6\n");
    }

    else if(strcmp(book_name,library_book_name7)==0)
    {
        printf("This Book Is Available\nBook ID:987\nSelf:2\n");

    }

    else if(strcmp(book_name,library_book_name8)==0)
    {
        printf("This Book Is Available\nBook ID:789\nSelf:10\n");
    }

    else if(strcmp(book_name,library_book_name9)==0)
    {
        printf("This Book Is Available\nBook ID:897\nSelf:12\n");
    }


    else if(strcmp(book_name,library_book_name10)==0)
    {
        printf("This Book Is Available\nBook ID:900\nSelf:12");
    }

    else
    {
        printf("Sorry This Book Is Not Available\n");
    }

    printf("If You Want More Book Enter This Name: ");
    scanf("%s",book_name);

///Another comparing string which work is as previous we did it same repeat.
       if(strcmp(book_name,library_book_name1)==0)
    {
        printf("This Book Is Available\nBook ID:123\nSelf:7\n");
    }

    else if(strcmp(book_name,library_book_name2)==0)
    {
        printf("This Book Is Available\nBook ID:321\nself:4\n");
    }

    else if(strcmp(book_name,library_book_name3)==0)
    {
        printf("This Book Is Available\nBook ID:312\nSelf:1\n");

    }

    else if(strcmp(book_name,library_book_name4)==0)
    {
        printf("This Book Is Available\nBook ID:456\nSelf:9\n");
    }

    else if(strcmp(book_name,library_book_name5)==0)
    {
        printf("This Book Is Available\nBook ID:654\nSelf:3\n");

    }
    else if(strcmp(book_name,library_book_name6)==0)
    {
        printf("This Book Is Available\nBook ID:564\nSelf:6\n");
    }

    else if(strcmp(book_name,library_book_name7)==0)
    {
        printf("This Book Is Available\nBook ID:987\nSelf:2\n");

    }

    else if(strcmp(book_name,library_book_name8)==0)
    {
        printf("This Book Is Available\nBook ID:789\nSelf:10\n");
    }

    else if(strcmp(book_name,library_book_name9)==0)
    {
        printf("This Book Is Available\nBook ID:897\nSelf:12\n");
    }


    else if(strcmp(book_name,library_book_name10)==0)
    {
        printf("This Book Is Available\nBook ID:900\nSelf:12");
    }
    else
    {
        printf("Sorry This Book Is Not Available\n");
    }


}





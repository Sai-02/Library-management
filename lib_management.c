#include <stdio.h>
#include <stdlib.h>

/*Description: a program  to do management of books in library
e.g., adding books , issuing books, reissuing books etc.*/

struct student_profile
{
    char name[70];
    char roll_no[70];
    int year;
    int book_1;
    int book_2;
    int book_3;
    int book_4;
    int num_books;

}


 void func(int);
int main()
{
    char check;
    int st_no;
    printf("press Y if running this program for first time.....\n otherwise press any key");
    scanf("%c", &check);
    if (check == 'y' || check == 'Y')
    {

        printf("Enter the number of students in college");
        scanf("%d", &st_no);
        void func(st_no);
    }
    void func(st_no);
    return 0;
}

void func(int n)
{

    
}
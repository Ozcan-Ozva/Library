#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    int number_of_book;
    char name_of_book[20];
    int sale_of_book;
    char state_of_book[10];

};

struct students
{
    int number_of_student;
    char name_of_student[20];
    int number_of_book_who_take;
    char state_of_student[10];
    char did_he_pay[10];
    //char name_of_taken_book[20];

};

/*void enter_books (char * file_name )
{
    file_name = fopen("library.txt","w");
    char c = 'y';
    struct book x ;
    while(c!= 'n')
    {
        printf(" enter the number of new book \n");
        scanf("%d",&x.number_of_book);
        fflush(stdin);
        printf(" enter the sale of new book \n");
        scanf("%d",&x.sale_of_book);
        fflush(stdin);
        printf(" enter the name of new book \n");
        scanf("%s",&x.name_of_book);
        fflush(stdin);
        printf(" enter the state of new book \n");
        scanf("%s",&x.state_of_book);
        fflush(stdin);
        fprintf(file_name,"number : %d      name : %s      sale : %d        state : %s \n",x.number_of_book,x.name_of_book,x.sale_of_book,x.state_of_book);
        printf(" do you want to add another book ?? \n");
        printf(" yes use y \t no use n \n");
        scanf("%c",&c);
    }
    fclose(file_name);

}

void add_books (char * file_name)
{
    char c = 'y';
    struct book z ;
    file_name = fopen("library.txt","a");
    while(c!='n')
    {
        printf(" enter the number of new book \n ");
        scanf("%d",&z.number_of_book);
        fflush(stdin);
        printf(" enter the name of new book \n ");
        scanf("%s",&z.name_of_book);
        fflush(stdin);
        printf(" enter the sale of new book \n ");
        scanf("%d",&z.sale_of_book);
        fflush(stdin);
        printf(" enter the state of new book \n ");
        scanf("%s",&z.state_of_book);
        fflush(stdin);
        fprintf(file_name,"number : %d      name : %s      sale : %d        state : %s \n",z.number_of_book,z.name_of_book,z.sale_of_book,z.state_of_book);
        printf(" do you want to add another book ?? \n");
        printf(" yes use y \t no use n \n");
        scanf("%c",&c);

    }
    fclose(file_name);
}

int main()
{
    FILE * library;
    library = fopen("library.txt","r");
    int number,sale,aii=0;
    char state[100],name[100];
    for(aii=0;aii<4;aii++)
    {
        fscanf(library,"number : %d      name : %s      sale : %d        state : %s\n",&number,name,&sale,state);
        printf("%d   %s    %d   %s\n",number,name,sale,state);
    }
    int what_you_want_do,n,i=0,j=0;
    char c = 'y',s;
    struct book z;
    int bb=0;
    char show[100][100],copp[100];

    /*while(!feof(library))
    {
        fgets(copp,100,library);
        n=strlen(copp);
        strcpy(show[i],copp);
        show[i][n-1]='\0';
        i++;
        j++;
    }

    for(i=0;i<j-1;i++)
    {
        puts(show[i]);
    }


    while(!feof(library))
    {
        s=getc(library);
        putchar(s);

    }
    printf(" \n ");
    while(what_you_want_do!=0)
    {
        printf(" what you want doing ? \n ");
        printf(" if you choice 1 you will add your books \n ");
        printf(" 1. insert your books \n ");
        printf(" 2. adding your books \n");

        scanf("%d",&what_you_want_do);
        switch (what_you_want_do)
        {
        case 1:
            printf(" you will add your books now \n");
            enter_books(library);
            break;
        case 2:
            printf(" adding your books \n ");
            add_books(library);
            break;

        default:
            bb=1;

        }
        if(bb)break;
    }
    */


void new_book (char *file_name )
{
    FILE * file_ptr;
    file_ptr = fopen(file_name,"a");
    char c='y';
    struct book x;
    while (c!='n')
    {
        printf(" enter the number of new book \n");
        scanf("%d",&x.number_of_book);
        printf(" enter the sale of new book \n");
        scanf("%d",&x.sale_of_book);
        printf(" enter the name of new book \n");
        scanf("%s",&x.name_of_book);
        printf(" enter the state of new book \n");
        scanf("%s",&x.state_of_book);
        fflush(stdin);
        fprintf(file_ptr,"number : %d      name : %s      sale : %d        state : %s \n",x.number_of_book,x.name_of_book,x.sale_of_book,x.state_of_book);
        printf(" do you want to add another book ?? \n");
        printf(" yes use y \t no use n \n");
        scanf("%c",&c);

    }
    fclose(file_ptr);

}

void search_book (char * file_name , int search_do)
{
    FILE * file_ptr;
    struct book boooks[30];
    int i=0,temp=0;
    file_ptr= fopen(file_name,"r");
    while(!feof(file_ptr))
    {

        fscanf(file_ptr,"number : %d      name : %s      sale : %d        state : %s ",&boooks[i].number_of_book,&boooks[i].name_of_book,&boooks[i].sale_of_book,&boooks[i].state_of_book);
        i++;
        temp++;
    }

    for(i=0;i<temp;i++)
    {
        if(search_do == boooks[i].number_of_book )
        {
            printf(" the name of book you search on is : %s ",boooks[i].name_of_book);
        }
    }
    fclose(file_ptr);

}

void search_state (char * file_name )
{
    FILE * file_ptr;
    file_ptr = fopen(file_name,"r");
    struct book boooks[30];
    int i=0,temp=0;
    char bb[4]={'y','e','s'};
    while(!feof(file_ptr))
    {

        fscanf(file_ptr,"number : %d      name : %s      sale : %d        state : %s ",&boooks[i].number_of_book,&boooks[i].name_of_book,&boooks[i].sale_of_book,&boooks[i].state_of_book);
        printf(" %d %s %d %s \n",boooks[i].number_of_book,boooks[i].name_of_book,boooks[i].sale_of_book,boooks[i].state_of_book);
        i++;
        temp++;
    }
    for(i=0;i<temp;i++)
    {
        if(strcmp(boooks[i].state_of_book,bb)==0)
        {
            printf(" the name of book is taken : %s \n",boooks[i].name_of_book);
        }
    }
    fclose(file_ptr);

}

void change_state_of_book (char * file_name,int change_state)
{
    struct book boooks[30];
    int i=0,temp=0;
    char bb[4]={'y','e','s'},nn[4]={'n','o','n'};
    FILE *  file_ptr;
    file_ptr = fopen(file_name,"r");
    while(!feof(file_ptr))
    {
        fscanf(file_ptr,"number : %d      name : %s      sale : %d        state : %s ",&boooks[i].number_of_book,&boooks[i].name_of_book,&boooks[i].sale_of_book,&boooks[i].state_of_book);
        printf("%d  %s   %d  %s \n",boooks[i].number_of_book,boooks[i].name_of_book,boooks[i].sale_of_book,boooks[i].state_of_book);
        i++;
        temp++;
    }

    if(strcmp(boooks[change_state-1].state_of_book,nn)==0)
    {
        printf(" it is non it will be yes \n ");
        strcpy(boooks[change_state-1].state_of_book,bb);
    }
    else
    {
        printf(" it is yes it will be non \n ");
        strcpy(boooks[change_state-1].state_of_book,nn);
    }
    fclose(file_ptr);

    file_ptr = fopen(file_name,"w");
    for(i=0;i<temp;i++)
    {
        fprintf(file_ptr,"number : %d      name : %s      sale : %d        state : %s \n",boooks[i].number_of_book,boooks[i].name_of_book,boooks[i].sale_of_book,boooks[i].state_of_book);

    }
    fclose(file_ptr);

}

void insert_student (char * file_name )
{
    FILE * file_ptr;
    FILE * file_ptr2;
    file_ptr = fopen(file_name,"a");
    struct students y;
    char c = 'y';
    while (c!='n')
    {
        printf(" enter the number of student \n");
        scanf("%d",&y.number_of_student);
        printf(" enter the name of student \n");
        scanf("%s",&y.name_of_student);
        printf(" enter the number of book who the student take \n");
        scanf("%d",&y.number_of_book_who_take);
        printf(" enter the state of student \n");
        scanf("%s",&y.state_of_student);
        printf(" did he pay ?? \n ");
        scanf("%s",&y.did_he_pay);
        fflush(stdin);
        fprintf(file_ptr,"number of student : %d      name of student : %s      number of book take : %d        state of student : %s   pay : %s \n",y.number_of_student,y.name_of_student,y.number_of_book_who_take,y.state_of_student,y.did_he_pay);
        printf(" do you want to add another student ?? \n");
        printf(" yes use y \t no use n \n");
        scanf("%c",&c);

    }
    fclose(file_ptr);
    change_state_of_book("library.txt",y.number_of_book_who_take);

}

void search_student ( char * file_name )
{
    FILE * file_ptr;
    file_ptr = fopen(file_name,"r");
    struct students student[30];
    int i=0,temp=0;
    char bb[4]={'y','e','s'};
    while (!feof(file_ptr))
    {
        fscanf(file_ptr,"number of student : %d      name of student : %s      number of book take : %d        state of student : %s   pay : %s ",&student[i].number_of_student,&student[i].name_of_student,&student[i].number_of_book_who_take,&student[i].state_of_student,&student[i].did_he_pay);
        i++;
        temp++;
    }
    for(i=0;i<temp;i++)
    {
        if(strcmp(student[i].state_of_student,bb)==0 )
        {
            printf("\n the number : %d\n the name : %s\n number of book took : %d\n the state : %s\n did he pay : %s\n \n ",student[i].number_of_student,student[i].name_of_student,student[i].number_of_book_who_take,student[i].state_of_student,student[i].did_he_pay);
            search_book("library.txt",student[i].number_of_book_who_take);
        }
    }
    fclose(file_ptr);

}

void who_dont_pay (char * file_name )
{
    FILE * file_ptr;
    file_ptr = fopen(file_name,"r");
    int i=0,j=0,temp=0,temp1=0;
    int not_pay[30];
    struct students student[30];
    char bb[4]={'y','e','s'};
    char no[4]={'n','o'};
    while (!feof(file_ptr))
    {
        fscanf(file_ptr,"number of student : %d      name of student : %s      number of book take : %d        state of student : %s   pay : %s ",&student[i].number_of_student,&student[i].name_of_student,&student[i].number_of_book_who_take,&student[i].state_of_student,&student[i].did_he_pay);
        i++;
        temp++;
    }
    for(i=0;i<temp;i++)
    {
        if(strcmp(student[i].state_of_student,bb)==0)
        {
            if(strcmp(student[i].did_he_pay,no)==0)
            {
            not_pay[j]=student[i].number_of_student;
            j++;
            temp1++;
            }
        }

    }

    for(j=0;j<temp1;j++)
    {
        printf("the number of student who do not pay is : %d \n",not_pay[j]);
    }
    fclose(file_ptr);

}

int main()
{
    struct book x,boooks[30];
    struct students y,student[30];
    int i=0, what_do,search_do,temp=0,change_state;
    int not_pay[30],j=0,temp1=0;
    char no[4]={'n','o'};
    char c='y',t,bb[4]={'y','e','s'},nn[4]={'n','o','n'};
    FILE * library;
    FILE * studentss;
    library = fopen("library.txt","r");

    while (!feof(library))
    {
        t=getc(library);
        putchar(t);

    }
    fclose(library);

    while(what_do!=10)
    {
        printf("\n\n what you want do ? \n");
        printf(" 1. show the file \n ");
        printf(" 2. enter new book \n");
        printf(" 3. search of number \n ");
        printf(" 4. show the taken book \n  ");
        printf(" 5. change the state \n ");
        printf(" 6. show file student \n ");
        printf(" 7. insert new student \n ");
        printf(" 8. show the student who taken a book from library \n");
        printf(" 9. who do not pay :(  \n");
        printf(" to go out enter number 0 \n");
        scanf("%d",&what_do);
        switch (what_do)
        {
        case 1:
            library = fopen("library.txt","r");

            while (!feof(library))
              {
                  t=getc(library);
                  putchar(t);

              }
            fclose(library);
            break;

        case 2:
            new_book("library.txt");
            break;

        case 3:
            printf(" enter the number of book you want to search on : ");
            scanf("%d",&search_do);
            search_book("library.txt",search_do);
            break;

        case 4:
            search_state("library.txt");
            break;

        case 5:
            printf(" enter the book you want to change his state : ");
            scanf("%d",&change_state);
            change_state_of_book("library.txt",change_state);
            break;
        case 6:
            studentss = fopen("students.txt","r");
            while(!feof(studentss))
            {
                t=getc(studentss);
                putchar(t);
            }
            fclose(studentss);
            break;
        case 7:
            insert_student("students.txt");
            break;
        case 8:
            search_student("students.txt");
            break;
        case 9:
            who_dont_pay("students.txt");
            break;
        default :
            what_do = 10;
        }

    }



    return 0;
}


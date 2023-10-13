#include<stdio.h>
#include<string.h>
//this header using for take string values
struct Book{ //structure use
    char title[100];
    char author[100];//variable and datatypes
    float price;
};
/*struct ability to encapsulate multiple data types
you can passing information between many function
Its scalers store diiferent types of data(like
integers,floats,strings)in a single variable for Book
*/
void addBook(struct Book books[],int *count)//take int as pointer argument;Its take count address int*count use number of book track in the array
{
    printf("Enter book title: ");//output
    scanf("%s",books[*count].title);//*count bound of the book array.the address.how many book title we can take
    printf("Enter author name: ");
    scanf("%s",books[*count].author);//input
    printf("Enter book price: ");
    scanf("%f",&books[*count].price);//{book[*count] array pointer use pointer which address value

    (*count)++;
    //after count main address will be increase

}
void displayBooks(struct Book books[],int count) //take int count for count how many have books
{
    if(count==0){ //if count is 0 no book have their
            //condition use
        printf("No books in the store.\n");
        return;
    }
    printf("List of books:\n");
    for(int i=0;i<count;i++){
        printf("Title:%s\n",books[i].title);
        printf("Author:%s|n",books[i].author);
        printf("Price: $%.2f\n",books[i].price);//in here take books arrays value.first declare input n=4;take variabe count start with 0
        printf("\n");

    }
}
void searchBook(struct Book books[],int count,char searchTerm[]){
  int found=0;
  for(int i=0;i<count;i++){
    if(strcmp(books[i].title ,searchTerm)==0|| strcmp(books[i].author,searchTerm==0))//string using
        //or operation use
        //strcmp using for comparing two string
        //also helps it find out which value we string have in here or not
    {
        printf("Title: %s\n",books[i].title);
        printf("Author.%s\n",books[i].author);
        printf("Price:$%.2f\n",books[i].price);
        printf("\n");
        found=1;
    }
  }


if(!found){
    printf("Book not found.\n");//found =0 that mean its false .Have not any books in here
}
}
int main(){
    struct Book books[1]; //main function
    int count=0;
    int choice;
    char searchTerm[1];//take values

    while(1)//for loop and without loop statement we cannot declear switch
    {
        printf("Book Shop menu:\n ");
        printf("1.Add a book\n");
        printf("2.Display all books\n");
        printf("3.Search for a book\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){//we using it when we have a single expression to be evaluated multiple possible values
        case 1:
            addBook(books,&count);//if it find out case 1 then it break not go next case
            break;
        case 2:
            displayBooks(books,count);
            break;
        case 3:
            printf("Enter a book title or author to search: ");
            scanf("%s",searchTerm);
            searchBook(books,count,searchTerm);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice,Please try again:\n");
        }
    }
}

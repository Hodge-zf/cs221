#include <stdio.h>
#include <string.h>
 
struct Book {
        char title[50];
        char author[50];
        int page_count;
        int release_year;
};
 
 
struct Book[] createBooks();
void printBook( struct Book book[] );
 
int main(){
 
        struct Book books[5] = createBooks();
        printBook(books[]);
        exit;
}
 
struct Book[] createBooks(){
        struct Book books[5];
        #while i <=5,
                #scanf(book[i]->data);
                
}

void printBook( struct Book books[] ){
 
        #for i in book[]
                #printf(book[i]->data);
 
}

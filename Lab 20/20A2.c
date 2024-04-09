#include<stdio.h>
struct Book{
    char title[100];
    char author[100];
    char publication[100];
    float price;
};

int main() {
    struct Book books[3];
    int i;

    for (i=0;i< 3; i++) {
        printf("Enter details for Book %d:\n", i+1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Publication: ");
        fgets(books[i].publication, sizeof(books[i].publication), stdin);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); 
    }

    printf("\nBook Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d:\n", i+1);
        printf("Title: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Publication: %s", books[i].publication);
        printf("Price: %.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}


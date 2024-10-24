//c structures
# include<stdio.h>
#include<string.h>
struct book{
char title[30];
char author[30];
int pub_year;
char ISBN[13];
float price;
}book1;

int main(){
printf("Enter the title for the book:\n");
fgets(book1.title, sizeof(book1.title), stdin);
printf("Enter the name of the author:\n");
fgets(book1.author, sizeof(book1.author), stdin);
printf("Enter the year of publication:\n");
scanf("%d",&book1.pub_year);
printf("Enter the ISBN:\n");
scanf("%s",book1.ISBN);
printf("Enter the price of the book:\n");
scanf("%f",&book1.price);

printf("TITLE:%s\n",book1.title);
printf("AUTHOR:%s\n",book1.author);
printf("PUBLICATION YEAR:%d\n",book1.pub_year);
printf("ISBN:%s\n",book1.ISBN);
printf("PRICE:%.2f\n",book1.price);
return 0;
}
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
strcpy(book1.title," Introduction to c programming");
strcpy(book1.author,"John Smith");
book1.pub_year=2022;
strcpy(book1.ISBN,"9780131103627");
book1.price=49.99;

printf("TITLE:%s\n",book1.title);
printf("AUTHOR:%s\n",book1.author);
printf("PUBLICATION YEAR:%d\n",book1.pub_year);
printf("ISBN:%s\n",book1.ISBN);
printf("PRICE:%.2f\n",book1.price);
return 0;
}
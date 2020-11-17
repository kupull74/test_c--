#include <iostream>
#include <string.h>
using namespace std;

struct Book
{
    char title[50], author[50];
    string subject;
    int book_id;
};
int main()
{
    struct Book Book1; // Declare Book1 of type Book
    strcpy(Book1.title, "Learn C++ Programming");
    Book1.subject = "C++ Programming";
    strcpy(Book1.author, "Chand Miyan");
    Book1.book_id = 6495407;
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    //struct Book Book2; // Declare Book2 of type Book
                       // 해 보기
    return 0;
}
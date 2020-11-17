#include <iostream>
#include <string.h>
using namespace std;

struct Books
{
    struct Book BookList[5];
    string category;
    void print_booklist()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << i << ". " << BookList[i].title << endl;
        }
    };
};
enum categories
{
    COMPUTERS,
    ARTS,
    BUSINES,
};
int main()
{
    struct Books BestSell; // Declare Books of type Book
    BestSell.category = categories::COMPUTERS;
    //... // BestSell.BookList[0] 해 보기
    //strcpy(BestSell.BookList[1].title, "Telecom Billing");
    //strcpy(BestSell.BookList[1].author, "Yakit Singha");
    //BestSell.print_booklist();
    return 0;
}
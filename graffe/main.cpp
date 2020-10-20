#include <iostream>

using namespace std;

class Book {
    public:
            string title;
            string author;
            int pages;

    Book(string aTitle, string aAuthor, int aPages){

        title = aTitle;
        author = aAuthor;
        pages = aPages;

    }
    Book(){
        title = "no title";
        author = "no author";
        pages = 0;
    }

};





int main()
{
    Book book1("Eragon", "Christopher Paolini", 340);

    Book book2;

cout << book2.title << endl;


    return 0;
}

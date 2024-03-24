#include <iostream>
using namespace std;

struct Book {
    string isbn, title, author, publisher;
    int year;
};

int main(){
    Book books[5];
    books[0].isbn="9788131791677";
    books[0].title="Computer Fundamentals and Programming in C";
    books[0].author="Reema Thareja";
    books[0].publisher="Oxford University Press";
    books[0].year=2015;

    books[1].isbn="9789352608758";
    books[1].title="Programming in C";
    books[1].author="Balaguruswamy";
    books[1].publisher="McGraw Hill Education";
    books[1].year=2017;

    books[2].isbn="9788131769584";
    books[2].title="Data Structures Using C";
    books[2].author="D.S. Malik";
    books[2].publisher="Cengage Learning";
    books[2].year=2014;

    books[3].isbn="9788121924047";
    books[3].title="Operating System Concepts";
    books[3].author="Abraham Silberschatz";
    books[3].publisher="Wiley India";
    books[3].year=2010;

    books[4].isbn="9789352602834";
    books[4].title="Computer Networks";
    books[4].author="Andrew S. Tanenbaum";
    books[4].publisher="Pearson Education";
    books[4].year=2018;

    string search;
    cout<<"Enter the ISBN of the book: ";
    cin>>search;

    bool found=false;
    for(int i=0;i<5;i++) {
        if (books[i].isbn==search) {
            cout<<"Book found:\n";
            cout<<"Title: "<<books[i].title<<"\n";
            cout<<"Author: "<<books[i].author<<"\n";
            cout<<"Publisher: "<<books[i].publisher<<"\n";
            cout<<"Year: "<<books[i].year<<"\n";
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"Book not found in the library.\n";
    }
    return 0;
}


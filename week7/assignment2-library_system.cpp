#include <iostream>
#include <vector>

using namespace std;

class Author {
private:
    string name;
    int birthYear;

public: 
    Author(string name, int birthYear) : name(name), birthYear(birthYear) {}

    string getName() const { return name; }
    int getBirthYear() const { return birthYear; }
};
class Book {
private:
    string title;
    int publicationYear;
    int ISBN;
    Author author;

public: 
    Book(string title, int publicationYear, int ISBN, Author author) : title(title), publicationYear(publicationYear), ISBN(ISBN), author(author) {}

    string getTitle() const { return title; }
    int getPublicationYear() const { return publicationYear; }
    int getISBN() const { return ISBN; }
    Author getAuthor() const { return author; }

    void display(){
        cout << '"' << title << '"' << " (" << publicationYear << ")" << endl;
        cout << "Author: " << author.getName() << " (born " << author.getBirthYear() << ")" << endl;
        cout << "ISBN: " << ISBN << endl;
        
    }
};

class Library {
private:
    string name;
    string address;
    vector<Book> bookCollection;

public:
    Library(string name, string address) : name(name), address(address) {}
    string getName() const { return name; }
    string getAdress() const { return address; }

    void addBook(const Book& book) {
        bookCollection.push_back(book);
    }
    void displayCatalog() {
        cout << "\nCATALOG:" << endl;
        if (bookCollection.empty()) {
            cout << "No books in the collection yet." << endl;
        } else {
            for (auto& book : bookCollection) {
                book.display();
                cout << endl;
                
            }
        }
    }
};


int main() {
    cout << "LIBRARY MANAGEMENT SYSTEM" << endl;
    cout << "-------------------------" << endl;

    Author author1("Phineas", 2000);
    Author author2("Perry the Platipus", 2001);
    Author author3("Doof", 2002);
    Author author4("Ferb", 2003);

    Book book1("Cat in the Hat", 1990, 987654321, author1);
    Book book2("The Lorax", 1991, 23458765765, author2);
    Book book3("Grinch", 1992, 19283764928347, author3);
    Book book4("Green Eggs & Ham", 1993, 10294845665, author4);

    Library library("Gotham City Library", "123 Main Street, Gotham");
    cout << "\nLibrary: " << library.getName() << endl;
    cout << "Address: " << library.getAdress() << endl;

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);

    library.displayCatalog();

    return 0;
}
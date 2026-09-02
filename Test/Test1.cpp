# include <iostream>
using namespace std;
class Book {
private:
    string name;
    int id;
    float price;
public:
    int pages;
    Book(string n, int i, float r, int p) {
        name = n;
        id = i;
        price = r;
        pages = p;
    }
    void putdata() {
        cout << "Book Name: " << name << endl;
        cout << "Book ID: " << id << endl;
        cout << "Book Price: ₹" << price << endl;
        cout << "Number of Pages: " << pages << endl;
    }
};

int main() {
    Book book1("Luky", 101, 299.99, 180);
    Book book2("Good", 102, 399.99, 281);
    Book book3("Bad", 103, 499.99, 350);
    Book book4("Happy", 104, 599.99, 400);
    book1.putdata();
    cout << endl;

    book2.putdata();
    cout << endl;

    book3.putdata();
    cout << endl;

    book4.putdata();
    cout << endl;

    int total_pages = 0;
    total_pages = book1.pages + book2.pages + book3.pages + book4.pages;
    cout << "Total Pages: " << total_pages << endl;
    return 0;
}
// Program to Create mini library system

#include <iostream>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
};

Book b[100];
int n = 0;

void addBook()
{
    cout << "Enter Book ID: ";
    cin >> b[n].id;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b[n].title);

    cout << "Enter Author Name: ";
    getline(cin, b[n].author);

    n++;

    cout << "Book Added Successfully.\n";
}

void displayBooks()
{
    if (n == 0)
    {
        cout << "No Books Available.\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID : " << b[i].id << endl;
        cout << "Title   : " << b[i].title << endl;
        cout << "Author  : " << b[i].author << endl;
    }
}

void searchBook()
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            cout << "Book Found\n";
            cout << "Title  : " << b[i].title << endl;
            cout << "Author : " << b[i].author << endl;
            return;
        }
    }

    cout << "Book Not Found.\n";
}

void deleteBook()
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            for (int j = i; j < n - 1; j++)
            {
                b[j] = b[j + 1];
            }

            n--;

            cout << "Book Deleted Successfully.\n";
            return;
        }
    }

    cout << "Book Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;

        case 2:
            displayBooks();
            break;

        case 3:
            searchBook();
            break;

        case 4:
            deleteBook();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 5);

    return 0;
}
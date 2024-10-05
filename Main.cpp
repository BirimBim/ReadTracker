#include <iostream>
#include <fstream>
#include "Header.hpp"
#include <string>


using namespace std;

int main (){
    //intro
    int choice;
    cout << "Welcome to Read Tracker would you like to:\n";
    cout << "1. STREAK UP!\n";
    cout << "2. View your library\n";
    cout << "3. Log in a new book\n";
    cin >> choice;
    cin.ignore();
    bookS book;
    switch (choice) {
        case 1:
            //ask for what book, and how many pages of that book was read
            //divide the book by how many pages was read and add that to
            //completion variable
            break;
            
        case 2:
            seeLibrary();
            break;
        case 3: 
            
            cout << "\nInsert the name of the book: ";
            getline(cin, book.name);
            transform(book.name.begin(), book.name.end(), book.name.begin(), ::tolower);
            cout << "\nInsert the amout of pages your book has: ";
            cin >> book.pageAmount;
            cout << "\nInsert the amount of days you would like to finish this book on: ";
            cin >> book.deadLine;
            saveBook(book);
            break;
        default:
            cout << "Please enter a valid number";
    }
    
}
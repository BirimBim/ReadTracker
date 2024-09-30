#include <iostream>
#include <fstream>
#include "Header.hpp"

using namespace std;

int main (){
    //intro
    int choice;
    cout << "Welcome to Read Tracker would you like to:\n";
    cout << "1. STREAK UP!";
    cout << "2. View your library\n";
    cout << "3. Log in a new book\n";
    cin >> choice;
    bookS book;
    switch (choice) {
        case 1:
            break;
            
        case 2:
            break;
            
        case 3: 
            
            cout << "Insert the name of the book: ";
            cin >> book.name;
            cout << book.name;
            cout << "\nInsert the amout of pages your book has: ";
            cin >> book.pageAmount;
            saveBook(book);
            break;
        default:
            cout << "Please enter a valid number";
    }
    
}
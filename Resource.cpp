#include <iostream>
#include <fstream>
#include <iterator>
#include <sstream>
#include <string>
#include "Header.hpp"
#include <typeinfo>

using namespace std;

void seeLibrary(){
    string content;
    
    ifstream library("library.txt");
    if(library.is_open()){
        content.assign((istreambuf_iterator<char>(library)),istreambuf_iterator<char>());
        for (size_t i = 0; i < content.size(); i++){
            cout << content[i];
            }
    }
    else{
        cout << "could not open file sowy";
    }
    library.close();
}

void logBook(fstream *library, bookS book){
    book.pagesPerDay = book.pageAmount/book.deadLine;
    *library << endl << "Book: " << book.name <<  endl;
    *library << "Pages: " << book.pageAmount << endl;
    *library << "To finish this book in " << book.deadLine << " days, you will need to read " << book.pagesPerDay << " pages everyday" << endl;
    *library << "Tip: put a sticky note on every " << book.pagesPerDay << " pages so you can see how much you have to read that day!(it really does make it easeier)"<<endl;
}

void saveBook(bookS book){
    bool fileExist;
    
    fstream library("library.txt", ios::app);
    
    if(library.is_open()){
        logBook(&library, book);
    }
    else{
        cout << "Library doesn't exist, creating it for you right now!";
        library.open("library.txt", ios::out);
        cout << "Library succesfully created!";
    }
    library.close();
}


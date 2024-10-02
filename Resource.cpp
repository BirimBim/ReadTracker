#include <iostream>
#include <fstream>
#include <string>
#include "Header.hpp"

using namespace std;

int streakUp(bookS book, fstream library){
    
    return 0;
}

void saveBook(bookS book){
    bool fileExist;
    
    fstream library("library.txt", ios::in | ios::app);
    
    if(library.is_open()){
        library << endl << "@" << book.name << endl << "!" << book.pageAmount << endl << "#" << book.completion;
        library.close();
    }
    else{
        cout << "Library doesn't exist, creating it for you right now!";
        library.open("library.txt", ios::out);
        library << "@" << book.name << "!" << book.pageAmount << "#" << book.completion;
    }
}

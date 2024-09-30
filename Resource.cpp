#include <iostream>
#include <fstream>
#include "Header.hpp"

using namespace std;

void saveBook(bookS book){
    bool fileExist;
    
    fstream library("library.txt", ios::in | ios::app);
    
    if(library.is_open()){
        
        library << "book.name";
    }
    else{
        cout << "file doesnt exist... creating it rn";
        library.open("library.txt", ios::out);
        library << "cu";
    }
}

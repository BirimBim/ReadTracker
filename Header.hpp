#include <string>
using namespace std;

struct bookS{
    string name;
    int pageAmount;
    int deadLine;
    int pagesPerDay;
};

void seeLibrary();

void saveBook(bookS book);

int streakUp(bookS book);
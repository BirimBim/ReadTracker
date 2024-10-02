#include <string>
using namespace std;

struct bookS{
    string name;
    int pageAmount;
    int completion;
};

void saveBook(bookS book);

int streakUp(bookS book);
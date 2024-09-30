#include <string>

struct bookS{
    std::string name;
    int pageAmount;
    int completion;
};

void saveBook(bookS book);


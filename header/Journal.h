#ifndef JOURNAL_H
#define JOURNAL_H

#include <vector>
#include "../header/Page.h"

class Journal {
    private:
        std::vector<Page> pages;
        unsigned numPages;
    public:
        Journal() : numPages(0) {}
        void outputPage(unsigned);
        void addPage(Page p);
};

#endif //JOURNAL_H

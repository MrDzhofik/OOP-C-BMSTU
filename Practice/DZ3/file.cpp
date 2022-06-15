#include "file.h"
BookFile::BookFile()
{
    library=new QFile("library.txt");
    library->open(QFile::ReadWrite);
}

BookFile::~BookFile()
{
    library->close();
}

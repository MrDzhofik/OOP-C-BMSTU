#ifndef FILE_H
#define FILE_H
#include <QFile>
struct book
{
    QString auth;
    QString name;
    QString pub;
    int year;
    int cnum;
};
class BookFile
{
public:
    QFile *library;
    BookFile();
    ~BookFile();
};

#endif // FILE_H

#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <QString>
#include <QDataStream>

typedef struct{
    QString name;
    QString provider;
    float quantity;
    float price;
} Product;

#endif // STRUCTURE_H

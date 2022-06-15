#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>
using namespace::std;

int main()
{
    const int maxunitnum = 3;
    setlocale(0, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    class tourunit
    {
    protected:
        string name;
        int cost;
        bool mandatory;
    public:
        void Init(string n, int c, bool m) { name = n; cost = c; mandatory = m; };
        void show() {
            cout << "Название услуги: " << get_name() << "\nЦена услуги: " << get_cost()<< "\n";
            if (is_mandatory()) cout << "Услуга является обязательной";
            else cout << "Услуга не является обязательной";
        };
        string get_name() { return name; };
        int get_cost() { return cost; };
        bool is_mandatory() { return mandatory; };
    };
    class tour
    {
    protected:
        string name;
        int  tnum;
        tourunit mas[maxunitnum];
    public:
        void Init(string n, int tn, tourunit m[maxunitnum]) { name = n; tnum=tn; for(int i=0;i< maxunitnum;i++) mas[i] = m[i]; };
        void show() {
            cout << "Название тура: " << get_name() << "\nЧисло туристов: " << get_tnum() << "\nВключенные услуги: "<< "\n";
            for (int i = 0; i < maxunitnum; i++) cout << "    " << get_mas(i).get_name() << "\n";
            cout << "Стоимость полного пакета: " << allcost() << "\n";
            cout << "Стоимость базового пакета: " << mandatorycost() << "\n";
        };
        string get_name() { return name; };
        int get_tnum() { return tnum; };
        tourunit get_mas(int i) { return mas[i]; }
        int allcost() {
            int sum = 0;
            for (int i = 0; i < maxunitnum; i++) sum += get_mas(i).get_cost();
            return sum;
        };
        int mandatorycost() {
            int sum = 0;
            for (int i = 0; i < maxunitnum; i++) if(get_mas(i).is_mandatory()) sum += get_mas(i).get_cost();
            return sum;
        };
    };
    tourunit TU, masTU[maxunitnum];
    tour T;
    string Tname, TUname;
    int TUcost, Tnum;
    bool m;
    cout << "Введите название тура: ";
    cin >> Tname;
    cin.ignore(2, '\n');
    cout << "Введите количество туристов: ";
    cin >> Tnum;
    for (int i = 0; i < maxunitnum; i++) {
        cout << "\nВведите название услуги: ";
        cin >> TUname;
        cout << "Введите цену услуги: ";
        cin >> TUcost;
        cout << "Обязательна ли услуга? (1-обязательна, 0-не обязательна): ";
        cin >> m;
        masTU[i].Init(TUname, TUcost, m);
    }
    T.Init(Tname, Tnum, masTU);
    cout << "\n\n";
    T.show();
}

// for_checking.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include "stdio.h"
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int  *b, s, n;
//    //int low = 5, high = 10, a;
//    int g = 10;
//    const int *cp = &g;
//    int const *cpp = &g;
//    void *uk;
//    b = &s;
//    a = &n;
//    cp = a;
//    cpp = b;
//    *b += 8;
//    n = 12;
//    g += 1;
//    a = &n;
//    uk = a;
//    b = &s;
//    printf_s("%d, %d, %d, %d, %d", s, n, *a, *cp, *cpp);
    //do {
    //    cout << "Enter a in [" << low << ", " << high << "]\n";
    //    cin >> a;
    //} while (a<low || a>high);

//}

#/*include <iostream>
using namespace std;
int main() {*/
    //int arr[5] = { 1, 2, 3, 4, 5 };
    //for (int& x : arr) {
    //    x *= 2;
    //}
    //for (auto x : arr)
    //    cout << x << ' ';
    //for (const auto& x : arr)
    //    cout << x << ' ';
    //return 0;
#include <iostream>
using namespace std;
//class A {
//private:
//    int x;
//public:
//    A(int a) { x = a; cout << "A(int) // x=" << x << endl; }
//    void f() { cout << "f() // x=" << x << endl; }
//    void f() const { cout << "f() const // x=" << x << endl; }
//};
//int main() {
//    A a1(1);
//    a1.f();
//    A const a2(2);
//    a2.f();
//    return 0;
//}
//}

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//struct a { int a; bool b; int c; };
//int main()
//{
//    a str = { 100,true,255 };
//    str.a = 10;
//    str.b = true;
//    cout << str.c << '\n';
//    str.c = str.a;
//    if (str.b)
//        cout << str.c;
//}

//#include <stdio.h>
//namespace ALPHA {          // ALPHA – имя пространства имен
//    long doubleLD;      // объявление переменной
//    float f(float y) { return y; }   // описание функции
//}
//int add(int n, int m) { return n + m; }
//int sub(int n, int m) { return n - m; }
//int mult(int n, int m, int s) { return n * m * s; };
//int main()
//{
//    ALPHA::f(3.14);

    //int (*func)(int, int, int);
    //int (*ptr)(int, int);
    //int a = 6, b = 2, c = 4, d;
    //ptr = add;
    //printf("%d\n", a = ptr(a, b)); // a+b
    //ptr = sub;
    //printf("%d\n", a = ptr(a, b)); // a-b
    //func = mult;
    //printf("%d\n", d = func(a, b, c));
    //return 0;
//}


//
//class СBook {
//public: 
//    char Name[30];
//    int Pages;
//    char* getName() { // метод по умолчанию inline, так
//        return Name; // как его тело описано в классе
//    }
//    int getPages(); // тело будет описано в book.сpp
//};
//void main()
//{
    /*int m[] = { 1,2,3,4 };
    int* mp[] = { m + 3, m + 2, m + 1, m };*/
//    СBook A = { "J.London. V.1",366 };
//    СBook C[] = { {"J.London. V.3",367},{"J.London. V.4",321},{"J.London. V.5",356} };
//    cout << A.Name << A.Pages << endl;
//}


//namespace Emil {
//    char* name, surname;
//    int age = 18, height = 178, weight = 60;
//}
//
//namespace Dzhafarov {
//    using namespace Emil;
//}
//
//int main() {
//    cout << Emil::age << endl;
//    cout << Dzhafarov::height;
//}


//class Line {
//protected:
//    int length;
//public:
//    Line() {
//        length = 0;
//    }
//    Line(int l) {
//        length = l;
//    }
//    void Print() {
//        cout << "Length:" << length << endl;
//    }
//};
//
//class Figure: public Line{
//protected:
//    int number_of_line;
//    int perimeter;
//public:
//    Figure(int l, int nol): Line(l) {
//        number_of_line = nol;
//        perimeter = 0;
//    }
//    int len(){
//        perimeter = number_of_line * length;
//        return perimeter;
//    }
//};
//
//
//int main() {
//    Line l(5);
//    l.Print();
//    Figure f(5, 4);
//    cout << "Perimeter:" << f.len() << endl;
//}


//class Kolbasa {
//protected:
//    int quantity;
//public:
//    Kolbasa(int q): quantity(q){}
//};
//
//class Bread {
//protected:
//    int quantity;
//public:
//    Bread(int q): quantity(q){}
//};
//
//class Buter : public Bread, public Kolbasa {
//public:
//    int number_of_buter;
//    Buter(int k, int b): Bread(b), Kolbasa(k) { // Если написать просто quantity = b, то компилятор выдаст ошибку: quantity не является однозначным
//        number_of_buter = (k > b ? b : k);
//    }
//    void Print() {
//        cout << number_of_buter;
//    }
//};
//
//int main() {
//    Buter Vkusno_i_tochka(5, 7);
//    Vkusno_i_tochka.Print();
//}



//class Line {
//private: 
//    int Makc;
//protected:
//    int length;
//public:
//    int chat;
//    Line() {
//        length = 0;
//    }
//    Line(int l) {
//        length = l;
//    }
//};
//
//class Figure : public Line {
//    Makc // не видно
//    length  // protected
//    chat // public
//};
//
//class Figure : protected Line {
//    Makc // не видно
//        length  // protected
//        chat // protected
//};
//
//class Figure : private Line {
//    Makc // не видно
//        length  // private
//        chat // private
//};
//
//#include "locale.h"
//
//class Line {
//protected:
//    int length;
//public:
//    Line(int l) {
//        cout << "Инициализирующий конструктор Line с параметрами" << endl;
//        length = l;
//    }
//    Line() {
//        cout << "Инициализирующий конструктор Line без параметров" << endl;
//        length = 0;
//    }
//    ~Line() {
//        cout << "Destructor Line" << endl;
//    }
//};
//
//class Figure : public Line {
//public:
//    Figure(int l) : Line(l) {
//        cout << "Инициализирующий конструктор Figure с параметрами" << endl;
//    }
//    Figure() {
//        cout << "Инициализирующий конструктор Figure без параметров" << endl;
//    }
//    ~Figure() {
//        cout << "Destructor Figure" << endl;
//    }
//    Figure(int l, int h) {
//        cout << "Неинициализирующий конструктор Figure" << endl;
//    }
//};
//
//
//int main() {
//    setlocale(0, "rus");
//    cout << "Первая переменная:" << endl;
//    Figure *first = new Figure(4);
//    delete first;
//    cout << "Вторая переменная:" << endl;
//    Figure* second = new Figure();
//    delete second;
//    cout << "Третья переменная:" << endl;
//    Figure* third = new Figure(2, 4);
//    delete third;
//}


//class Pen {
//public:
//    int quantity;
//public:
//    Pen(int q) {
//        cout << "Constructor Pen" << endl;
//        quantity = q;
//    }
//    Pen() {
//        cout << "Pen" << endl;
//        quantity = 0;
//    }
//};
//
//class Pencil {
//public:
//    int quantity;
//public:
//    Pencil(int l) {
//        cout << "Constructor Pencil" << endl;
//        quantity = l;
//    }
//    Pencil() {
//        cout << "Pencil" << endl;
//        quantity = 0;
//    }
//};
//
//
//class Penal {
//public:
//    Pen pen;
//    Pencil pencil;
//    int quantity;
//public:
//    Penal(Pen r, Pencil k) {
//        pen = r;
//        pencil = k;
//        quantity = r.quantity + k.quantity;
//    }
//};
//
//
//int main() {
//    Pen ruchka(8);
//    Pencil karandash(5);
//    Penal penal(ruchka, karandash);
//    cout << "Pen: ";
//    cout << penal.pen.quantity << endl;
//    cout << "Pencil: ";
//    cout << penal.pencil.quantity << endl;
//    cout << "All: ";
//    cout << penal.quantity;
//}


//class Pen {
//public:
//    int quantity;
//public:
//    Pen(int q) {
//        cout << "Constructor Pen" << endl;
//        quantity = q;
//    }
//    Pen() {
//        cout << "Pen" << endl;
//        quantity = 0;
//    }
//};
//
//class Pencil {
//public:
//    int quantity;
//public:
//    Pencil(int l) {
//        cout << "Constructor Pencil" << endl;
//        quantity = l;
//    }
//    Pencil() {
//        cout << "Pencil" << endl;
//        quantity = 0;
//    }
//};
//
//
//class Penal {
//public:
//    Pen *pen;
//    Pencil *pencil;
//    int quantity;
//public:
//    Penal(Pen r, Pencil k) {
//        pen = new Pen(r.quantity);
//        pencil = new Pencil(k.quantity);
//        quantity = r.quantity + k.quantity;
//    }
//    Penal() {
//        cout << "No pens?" << endl;
//        quantity = 0;
//        pen = nullptr;
//        pencil = nullptr;
//    }
//    ~Penal() {
//        cout << "Almighty Push" << endl;
//        if (pen != nullptr) {
//            delete pen;
//            delete pencil;
//        }
//    }
//};
//
//
//int main() {
//    Penal NoPen;
//    cout << "All: " << NoPen.quantity << endl;
//}


//struct One { int a; int b; };
//struct Two { int c; int d; };
//One& operator+ (One& T, Two& W) {
//    One lol{0, 0};
//    lol.a = T.a + W.c;
//    lol.b = T.b + W.d;
//    return lol;
//}
//
//ostream & operator <<(ostream &os, One& T){
//    return os << T.a << " Лохи " << T.b;
//}
//
//int main() {
//    One LOX{ 4, 8 };
//    Two XOL{ 12, 54 };
//    One summa = LOX + XOL;
//    cout << summa;
//}


//class Square {
//protected:
//    int line;
//    int square;
//public:
//    Square(int l) : line(l) {
//        square = 0;
// };
//    int Sq() {
//        square = line * line;
//        return square;
//    }
//};
//
//class Prism : public Square {
//protected:
//    int height;
//    int volume;
//public:
//    Prism(int l, int h) : Square(l) {
//        height = h;
//        volume = 0;
//    }
//    int Sq() {
//        volume = Square::Sq() * height;
//        return volume;
//    }
//};
//
//
//int main() {
//    Prism pr(4, 6);
//    Square sq(4);
//    cout << sq.Sq() << endl;
//    cout << pr.Sq() << endl;
//}




// Почему не работает 3 случай полиморфизма. Все работает через ссылку или указатель

//class Room {
//public:
//    int length, width;
//    virtual int Square(){
//        return length * width;
//    }
//public:
//    Room(int l, int w) {
//        length = l;
//        width = w;
//    }
//    void Print() {
//        cout << "Square: " << Square() << endl;
//    }
//};
//
//class VRoom : public Room {
//public:
//    int height;
//    int Square() override; 
//public:
//    VRoom(int l, int w, int h) : Room(l, w) {
//        height = h;
//    }
//};
//
//int VRoom::Square() {
//    {
//        return Room::Square() * height;
//    }
//}
//
//void Print(Room &a) {
//    cout << "Square: " << a.Square() << endl;
//}
//
//int main() {
//    Room f(9, 12); // 1 случай
//    f.Print();
//    VRoom s(9, 12, 5);
//    s.Print();
//    Room* pa;  // 2 случай
//    VRoom s(9, 12, 5); 
//    s.Print();
//    pa = &s;
//    pa->Print();
//    VRoom s(9, 12, 5); // 3 случай
//    Print(s);
//}


//class Number {
//public:
//    static int number_count; // объявляем статический компонент
//    int number;
//public:
//    Number(int i) { number = i; number_count++; }
//    static void Print_count() { // создаем функцию для работы со статическим компонентом
//        cout << number_count;
//    }
//};
//
//int Number::number_count = 0; // определение статического компонента, без этого не будет работать
//
//
//int main() {
//    Number a(4);
//    Number::Print_count();
//    Number b(8);
//    Number::Print_count();
//}


//class Teacher {
//private:
//    char name[10];
//    static int class_count; 
//    int* class_room;
//public:
//    Teacher() : Teacher("No name", 0) {}
//    Teacher(const char* n, int cr = 0) {
//        strcpy_s(name, 10, n);
//        if (cr != 0) {
//            class_count++;
//            class_room = new int(cr);
//        }
//    }
//    ~Teacher() {
//        if (class_room != nullptr) {
//            cout << "Delete" << name;
//            delete class_room;
//        }
//    }
//};
//
//int Teacher::class_count = 0;
//
//int main() {
//    Teacher *a = new Teacher("Anton", 10);
//    Teacher* b = new Teacher();
//    delete b;
//    delete a;
//}


//#include <chrono>
//#include <vector>
//
//class LogDuration {
//public:
//    LogDuration(std::string id)
//        : id_(std::move(id)) {
//    }
//
//    ~LogDuration() {
//        const auto end_time = std::chrono::steady_clock::now();
//        const auto dur = end_time - start_time_;
//        std::cout << id_ << ": ";
//        std::cout << "operation time"
//            << ": " << std::chrono::duration_cast<std::chrono::milliseconds>(dur).count()
//            << " ms" << std::endl;
//    }
//
//private:
//    const std::string id_;
//    const std::chrono::steady_clock::time_point start_time_ = std::chrono::steady_clock::now();
//};
//
//template <typename T>
//class Vector {
//public:
//    Vector(size_t size, T value)
//        : data_(size, value) {
//    }
//    Vector(const Vector& rhs) {
//        cout << "copy constructor was called\n";
//    }
//    Vector(Vector&& rhs) noexcept {
//        cout << "move constructor was called\n";
//    }
//    size_t size() {
//        return data_.size();
//    }
//
//private:
//    vector<T> data_;
//};
//
//
//int main() {
//    Vector<uint8_t> big_vector(1e9, 0);
//
//    {
//        LogDuration ld("vector copy");
//        Vector<uint8_t> reciever(move(big_vector));
//    }
//    cout << "size of big_vector is " << big_vector.size() << '\n';
//}


//class Number {
//private:
//    int* pnum;
//public:
//    Number() {
//        pnum = nullptr;
//    }
//    Number(int num) {
//        pnum = new int(num);
//        cout << "Constructor" << endl;
//    }
//    Number(const Number& R): pnum(new int(*R.pnum)) {
//        cout << "Copy Constructor" << endl;
//    }
//    Number(const Number&& R): pnum(R.pnum){
//        cout << "Move Constructor" << endl;
//    }
//    Number & operator=(const Number &R){
//        if (pnum != nullptr) { delete pnum;cout << "Free" << endl; }
//        pnum = new int(*R.pnum);
//        cout << "Copy =" << endl;
//        return *this;
//    }
//    Number& operator=(const Number&& R) {
//        if (pnum != nullptr) {
//            delete pnum; cout << "Free move" << endl;
//        }
//
//        pnum = R.pnum;
//        cout << "Move =" << endl;
//        return *this;
//    }
//    ~Number() {
//        if (pnum != nullptr) { 
//            delete pnum; 
//            cout << "Free" << endl;
//        }
//        cout << "Destructor" << endl;
//    }
//};
//
//int main() {
//    Number A(5);
//    Number B(A);
//    Number C(move(A));
//    Number D(6);
//    D = move(A);
//}


//class Number {
//private: int* pnum;
//public:
//    Number(int Num) :pnum(new int(Num)) {
//        cout << "New, Constructor" << endl;
//    }
//    Number(const Number& R) :pnum(new int(*R.pnum)) {
//        cout << "New, Constructor copy" << endl;
//    }
//    Number() :pnum(nullptr) {}
//    Number& operator=(const Number& R) {
//        if (pnum != nullptr) { delete pnum;cout << "Free" << endl; }
//        pnum = new int(*R.pnum);
//        cout << "New Operator= copy" << endl;
//        return *this;
//    }
//    ~Number() {
//        if (pnum != nullptr) { delete pnum;cout << "Free" << endl; }
//        cout << "Destructor" << endl;
//    }
//    Number(Number&& R) :pnum(R.pnum) {
//        R.pnum = nullptr; cout << "Constructor move" << endl;
//    }
//    Number& operator=(Number&& R) {
//        if (pnum != nullptr) {
//            delete pnum; cout << "Free move" << endl;
//        }
//        pnum = R.pnum;
//        R.pnum = nullptr; cout << "Operator= move" << endl;
//        return *this;
//    }
//};
//
//Number f(int a, int b) {
//    Number temp(a + b);
//    return Number(move(temp));
//}
//
//int main() {
//    Number A(5);
//    Number B(A);
//    Number C(move(A));
//    Number D(6);
//    D = move(A);
//    Number F = f(6, 7);
//    return 0;
//}


//int main() {
//    int a = 4;
//    int c = 1024;
//    int b = c << a;
//    cout << b;
//}


//#include <string.h>
//#include <stdio.h>
//int main() {
//    char str[] = "A string\tof ,,tokens\nand some more tokens";
//    char seps[] = " ,\t\n", * token, * nexttoken;
//
//    token = strtok_s(str, seps, &nexttoken);
//    while (token != nullptr)
//    {
//        printf("%s ", token);
//        token = strtok_s(nullptr, seps, &nexttoken);
//    }
//    return 0;
//}


//#include <iostream>
//class HomePhone {
//protected:
//    int yearprod, cost;
//public:
//    HomePhone(int ayp, int ac) : yearprod(ayp), cost(ac) {}
//    void about() { std::cout << yearprod << "," << cost << std::endl; }
//};
//class MobilePhone : protected HomePhone {
//    int charge;
//public:
//    MobilePhone(int ayp, int ac, int acharge) : HomePhone(ayp, ac), charge(acharge) {}
//    void newabout() { std::cout << yearprod << "," << cost << "," << charge << std::endl; }
//};
//int main() {
//    HomePhone A(1995, 2500);
//    A.about();
//    MobilePhone B(2020, 120000, 95);
//    //B.about();
//    B.newabout();
//    return 0;
//}

#include <stdio.h>
//class TNum
//{
//public:	int* pn;
//      TNum(int n) { puts("new pn"); pn = new int(n); }
//      TNum(const TNum& Obj)
//      {
//          puts("copy new pn"); pn = new int(*Obj.pn);
//      }
//      ~TNum() { puts("delete pn"); delete pn; }
//};
//
//void Print(TNum b) { 
//    printf("%d ", *b.pn);
//}
//
//int main() {
//    TNum A(1);
//    Print(A);
//    return 0;
//}



//#include <string.h>
//#include <iostream>
//class movez;
//class child {
//    char name[16];
//    int age;
//public:
//    child(const char* n, int c);
//    friend int sameage(child a, child b);
//    friend movez;
//};
//
//child::child(const char* n, int c)
//{
//    strcpy_s(name, 16, n);
//    age = c;
//}
//
//class movez
//{
//public:
//    void grow(child& obj, int num);
//};
//
//void movez::grow(child& obj, int num)
//{
//    obj.age += num;
//};
//
//int sameage(child a, child b)
//{
//    if (a.age == b.age) {
//        return 1;
//    }
//    return 0;
//};
//
//int main()
//{
//    child e("Egor", 4);
//    child m("Masha", 5);
//    movez curr;
//    curr.grow(e, 2);
//    curr.grow(m, 1);
//    cout << sameage(e, m);
//    return 0;
//};


//#include <iostream>;
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//
//    int num1;
//    int num2;
//    int var = 2;
//
//    while (var--)
//    {
//        cout << "Введите значение num1: ";
//        cin >> num1;
//        cout << "Введите значение num2: ";
//        cin >> num2;
//
//        cout << "num1 + num2 = " << num1 + num2 << endl;
//        cout << "num1 / num2 = ";
//
//        try //код, который может привести к ошибке, располагается тут
//        {
//            if (num2 == 0)
//            {
//                throw 123; //генерировать целое число 123
//            }
//            cout << num1 / num2 << endl;
//        }
//        catch (int i)//сюда передастся число 123
//        {
//            cout << "Ошибка №" << i << " - на 0 делить нельзя!!!!" << endl;
//        }
//
//        cout << "num1 - num2 = " << num1 - num2 << endl;
//        cout << "=================================" << endl << endl;
//    }
//
//    cout << "Программа завершила работу!" << endl << endl;;
//
//    return 0;
//}

//int main() {
//    int arr[5][5] = { {0, 2, 4, 6, 8}, {1, 3, 5, 7}, {10, 12, 14, 16, 18}, {9, 11, 13, 15, 17}, {20, 21, 22, 23, 24} };
//    for (int i = 0; i < 5; i++) {
//        cout << (*(arr + i) + i) << endl;
//        cout << (arr + i) << endl;
//        cout << **(arr + i) << endl;
//    }
//}



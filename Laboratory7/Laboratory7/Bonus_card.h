#include <iostream>

#ifndef Bonus_card_h
class Bonus_Card {
private:
    char card_number[20];
    int percent;
    float balance=0;
public:
    Bonus_Card(const char *number, int perc) {
        strcpy_s(card_number, number);
        percent = perc;
    }
    Bonus_Card() {}
    void SetCard(const char *number, int perc) {
        strcpy_s(card_number, number);
        percent = perc;
    }
    void Print() {
        printf("Номер карты: %s\n", GetCardNumber());
        printf("Процент начисления: %d%%\n", GetPercent());
        printf("Бонусный баланс: %-4.2f\n", GetBalance());
    };
    void Buy(int sum) {
        balance = sum * (percent / 100.0);
    };
    void Rasxod(int ras) {
        int b;
        if ((b = balance - ras) < 0) {
            puts("Недостаточно средств");
        }
        else {
            balance = b;
        }
    };
    void PrintBalance() {
        printf("Бонусный баланс: %-4.2f\n", GetBalance());
    }
    float GetBalance() {
        return balance;
    };
    char* GetCardNumber() {
        return card_number;
    };
    int GetPercent() {
        return percent;
    };
};
#endif

#include <iostream>

using namespace std;

int main(){

    //a) sprawdzenie pelnoletnosci
    int wiek = 19;
    if (wiek ???) {
        cout << "Jest dorosly" << endl;

    }
    else {
        cout << "Jest dzieckiem" << endl;
    }


    // b) ocena z egzaminu (else if)
    /*
        Punktacja:
        90 - 100 -> bdb
        75 - 89 -> db
        50 - 74 -> dst
        25 - 49 -> dop
        0 - 24 -> ndst

     */
    int punkty = 72;
    if (punkty >= ???) {
        cout << "Ocena: 5" << endl;

    }
    else if (???) {
        cout << "Ocena: 4" << endl;
    }
    else if (???) {
        cout << "Ocena: 3" << endl;
    }
    else if (???) {
        cout << "Ocena: 2" << endl;
    }
    else {
        cout << "Ocena: 1" << endl;
    }
    return 0;

    // c) temperatura (zagniezdzony if)
    /*
        Jesli temperatura jest wieksza od 0, sprawdzamy czy jest cieplo (20 stopni lub wiecej) czy chlodno.
        W przeciwnym razie wypisujemy "Mroz".
     */
    int temperatura = 25;
    if (???) {
        if (???) {
            cout << "Cieplo" << endl;
        } else {
            cout << "Chlodno" << endl;
        }
    }
    else{
        cout << "Mroz" << endl;
    }

    // d) logowanie (koniunkcja) - zakladamy ze dane sa poprawne
    string login = "admin";
    string haslo = "1234";

    if (??? && ???) {
        cout << "Zalogowano" << endl;
    }
    else {
        cout << "Bledne dane logowania" << endl;
    }


    // e) darmowa dostawa z Allegro (alternatywa)
    /*
        Uzytkownik musi spelnic przynajmniej jeden warunek:
        - Posiada Allegro Smart
        - Wartosc zamowienia przekroczyla 60 zl
     */

    int kwota = 110;
    bool smart = false;

    if (??? || ???) {
        cout << "Darmowa dostawa" << endl;
    } else {
        cout << "Koszt dostawy: 15 zl" << endl;
    }
}

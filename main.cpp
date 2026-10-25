/**
 * @file main.cpp
 * @brief Kompleksowe testy wszystkich wymaganych operacji na liście.
 */

#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    cout << "TESTY WYMAGANYCH OPERACJI LISTY\n";
    DoublyLinkedList list;

    // 1. Dodaj element na koniec listy[cite: 4]
    list.append(20);
    list.append(30);
    cout << "Po dodaniu na koniec (20, 30): ";
    list.displayForward();

    // 2. Dodaj element na początek listy[cite: 4]
    list.prepend(10);
    cout << "Po dodaniu na poczatek (10): ";
    list.displayForward();

    // 3. Dodaj element pod wskazany indeks (np. pod indeks 1 wstawiamy 15)[cite: 4]
    list.insertAtIndex(1, 15);
    cout << "Po wstawieniu 15 pod indeks 1: ";
    list.displayForward();

    // 4. Wyświetl całą listę[cite: 4]
    list.displayForward();

    // 5. Wyświetl listę w odwrotnej kolejności[cite: 4]
    list.displayBackward();

    // 6. Wyświetl następny i poprzedni element (bierzemy np. element z indeksem 1, czyli 15)[cite: 4]
    Node* midNode = list.getNode(1);
    if (midNode != nullptr) {
        list.displayNext(midNode);
        list.displayPrev(midNode);
    }

    // 7. Usuń element z początku listy[cite: 4]
    list.removeHead();
    cout << "Po usunieciu z poczatku: ";
    list.displayForward();

    // 8. Usuń element z końca listy[cite: 4]
    list.removeTail();
    cout << "Po usunieciu z konca: ";
    list.displayForward();

    // 9. Usuń element pod wskazanym indeksem[cite: 4]
    list.removeAtIndex(1);
    cout << "Po usunieciu spod indeksu 1: ";
    list.displayForward();

    // 10. Czyść całą listę[cite: 4]
    list.clear();
    cout << "Po wyczyszczeniu listy: ";
    list.displayForward();

    return 0;
}
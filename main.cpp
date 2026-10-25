/**
 * @file main.cpp
 * @brief Główny plik programu testujący działanie listy dwukierunkowej i fabryki.
 */

#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

/**
 * @brief Główna funkcja programu.
 * @return int Kod wyjścia programu.
 */
int main() {
    cout << "TEST LISTY DWUKIERUNKOWEJ I FABRYKI\n";

    DoublyLinkedList list;
    
    list.append(10);
    list.append(20);
    list.append(30);

    list.displayForward();

    return 0;
}
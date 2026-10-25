#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

/**
 * @file DoublyLinkedList.h
 * @brief Definicja klasy zarządzającej listą dwukierunkową wraz ze wszystkimi operacjami.
 */

/**
 * @class DoublyLinkedList
 * @brief Klasa obsługująca pełny zestaw operacji na liście dwukierunkowej.
 */
class DoublyLinkedList {
private:
    Node* head; ///< Wskaźnik na pierwszy element listy
    Node* tail; ///< Wskaźnik na ostatni element listy

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void prepend(int val);                                  // Dodaj na początek[cite: 4]
    void append(int val);                                   // Dodaj na koniec[cite: 4]
    void insertAtIndex(int index, int val);                 // Dodaj pod indeks[cite: 4]
    void removeHead();                                      // Usuń z początku[cite: 4]
    void removeTail();                                      // Usuń z końca[cite: 4]
    void removeAtIndex(int index);                          // Usuń z indeksu[cite: 4]
    void displayForward();                                  // Wyświetl całą listę[cite: 4]
    void displayBackward();                                 // Wyświetl w odwrotnej kolejności[cite: 4]
    void displayNext(Node* node);                           // Wyświetl następny element[cite: 4]
    void displayPrev(Node* node);                           // Wyświetl poprzedni element[cite: 4]
    void clear();                                           // Czyść całą listę[cite: 4]
    
    Node* getNode(int index);                               // Pomocnicza: pobierz węzeł pod indeksem
};

#endif // DOUBLY_LINKED_LIST_H
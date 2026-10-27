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

    void prepend(int val);                                  // Dodaj na początek
    void append(int val);                                   // Dodaj na koniec
    void insertAtIndex(int index, int val);                 // Dodaj pod indeks
    void removeHead();                                      // Usuń z początku
    void removeTail();                                      // Usuń z końca
    void removeAtIndex(int index);                          // Usuń z indeksu
    void displayForward();                                  // Wyświetl całą listę
    void displayBackward();                                 // Wyświetl w odwrotnej kolejności
    void displayNext(Node* node);                           // Wyświetl następny element
    void displayPrev(Node* node);                           // Wyświetl poprzedni element
    void clear();                                           // Czyść całą listę
    
    Node* getNode(int index);                               // Pomocnicza: pobierz węzeł pod indeksem
};

#endif // DOUBLY_LINKED_LIST_H
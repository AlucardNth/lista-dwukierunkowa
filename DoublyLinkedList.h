#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

/**
 * @file DoublyLinkedList.h
 * @brief Definicja klasy zarządzającej listą dwukierunkową.
 */

/**
 * @class DoublyLinkedList
 * @brief Klasa obsługująca operacje na liście dwukierunkowej (dodawanie, wyświetlanie).
 */
class DoublyLinkedList {
private:
    Node* head; ///< Wskaźnik na pierwszy element listy
    Node* tail; ///< Wskaźnik na ostatni element listy

public:
    /**
     * @brief Konstruktor domyślny inicjalizujący pustą listę.
     */
    DoublyLinkedList();

    /**
     * @brief Destruktor zwalniający pamięć zajmowaną przez elementy listy.
     */
    ~DoublyLinkedList();

    /**
     * @brief Dodaje nowy element na koniec listy.
     * @param val Wartość dodawanego elementu.
     */
    void append(int val);

    /**
     * @brief Wyświetla elementy listy od początku do końca.
     */
    void displayForward();
};

#endif // DOUBLY_LINKED_LIST_H
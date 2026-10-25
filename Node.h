#ifndef NODE_H
#define NODE_H

/**
 * @file Node.h
 * @brief Definicja klasy Node reprezentującej pojedynczy element listy dwukierunkowej.
 */

/**
 * @class Node
 * @brief Klasa przechowująca wartość oraz wskaźniki na sąsiednie węzły.
 */
class Node {
public:
    int data;     ///< Wartość przechowywana w węźle
    Node* next;   ///< Wskaźnik na następny węzeł
    Node* prev;   ///< Wskaźnik na poprzedni węzeł

    /**
     * @brief Konstruktor inicjalizujący węzeł podaną wartością.
     * @param val Liczba całkowita zapisywana w węźle.
     */
    Node(int val);
};

#endif // NODE_H
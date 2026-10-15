#ifndef NODE_H
#define NODE_H

/**
* @brief Klasa reprezentujaca pojedynczy wezel listy dwukierunkowej.
*/

class Node {
    public:
        int data; ///< Wartosc ktora jest przechowywana w wezle
        Node* prev; ///< Wskaznik na poprzedni wezel
        Node* next; ///< Wskaznik na nastepny wezel

/**
* @brief Konstruktor inicjalizujacy wezel z podana wartoscia.
* @param val Wartosc danego elementu.
*/
        Node(int val);
};

#endif

#ifndef NODE_FACTORY_H
#define NODE_FACTORY_H

#include "Node.h"

/**
 * @file NodeFactory.h
 * @brief Definicja klasy NodeFactory implementującej wzorzec projektowy Factory.
 */

/**
 * @class NodeFactory
 * @brief Klasa odpowiedzialna za kontrolowane tworzenie nowych obiektów węzłów.
 */
class NodeFactory {
public:
    /**
     * @brief Statyczna metoda tworząca nowy węzeł na stercie.
     * @param val Wartość dla nowego węzła.
     * @return Wskaźnik do utworzonego obiektu Node.
     */
    static Node* createNode(int val);
};

#endif // NODE_FACTORY_H
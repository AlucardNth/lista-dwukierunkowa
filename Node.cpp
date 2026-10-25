/**
 * @file Node.cpp
 * @brief Implementacja konstruktora klasy Node.
 */

#include "Node.h"

Node::Node(int val) {
    data = val;
    next = nullptr;
    prev = nullptr;
}
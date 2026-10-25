/**
 * @file DoublyLinkedList.cpp
 * @brief Implementacja metod klasy DoublyLinkedList.
 */

#include "DoublyLinkedList.h"
#include "NodeFactory.h"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
}

DoublyLinkedList::~DoublyLinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void DoublyLinkedList::append(int val) {
    Node* newNode = NodeFactory::createNode(val);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::displayForward() {
    Node* current = head;
    cout << "Lista: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
}
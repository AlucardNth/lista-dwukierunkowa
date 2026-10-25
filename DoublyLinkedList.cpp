/**
 * @file DoublyLinkedList.cpp
 * @brief Implementacja pełnych operacji dla klasy DoublyLinkedList.
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
    clear();
}

void DoublyLinkedList::prepend(int val) {
    Node* newNode = NodeFactory::createNode(val);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
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

Node* DoublyLinkedList::getNode(int index) {
    Node* current = head;
    int currentIndex = 0;
    while (current != nullptr && currentIndex < index) {
        current = current->next;
        currentIndex++;
    }
    return current;
}

void DoublyLinkedList::insertAtIndex(int index, int val) {
    if (index == 0) {
        prepend(val);
        return;
    }
    Node* current = getNode(index);
    if (current == nullptr) {
        append(val);
        return;
    }
    Node* newNode = NodeFactory::createNode(val);
    Node* prevNode = current->prev;

    prevNode->next = newNode;
    newNode->prev = prevNode;

    newNode->next = current;
    current->prev = newNode;
}

void DoublyLinkedList::removeHead() {
    if (head == nullptr) return;
    Node* temp = head;
    if (head == tail) {
        head = tail = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
}

void DoublyLinkedList::removeTail() {
    if (tail == nullptr) return;
    Node* temp = tail;
    if (head == tail) {
        head = tail = nullptr;
    } else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
}

void DoublyLinkedList::removeAtIndex(int index) {
    if (index == 0) {
        removeHead();
        return;
    }
    Node* current = getNode(index);
    if (current == nullptr) return;
    if (current == tail) {
        removeTail();
        return;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
}

void DoublyLinkedList::displayForward() {
    Node* current = head;
    cout << "Lista (przod): ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
}

void DoublyLinkedList::displayBackward() {
    Node* current = tail;
    cout << "Lista (tyl): ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << "\n";
}

void DoublyLinkedList::displayNext(Node* node) {
    if (node != nullptr && node->next != nullptr) {
        cout << "Nastepny po " << node->data << " to: " << node->next->data << "\n";
    } else {
        cout << "Brak nastepnego elementu.\n";
    }
}

void DoublyLinkedList::displayPrev(Node* node) {
    if (node != nullptr && node->prev != nullptr) {
        cout << "Poprzedni przed " << node->data << " to: " << node->prev->data << "\n";
    } else {
        cout << "Brak poprzedniego elementu.\n";
    }
}

void DoublyLinkedList::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = tail = nullptr;
}
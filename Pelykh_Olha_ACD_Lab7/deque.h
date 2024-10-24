#ifndef DEQUE_H
#define DEQUE_H

#include <QString>

class Deque {
    int *data;
    int front, rear, size, capacity;

public:
    Deque();
    ~Deque();

    bool isEmpty() const;
    void resize();
    void push_back(int value);
    void push_front(int value);
    int pop_back();
    int pop_front();
    int getIndex(int index) const;
    int getElement(int index) const;
    int getSize() const;
    int getMin() const;
    int getMax() const;
    int findElement(int value) const;
    QString getContents() const;  // For Qt output
};

#endif // DEQUE_H

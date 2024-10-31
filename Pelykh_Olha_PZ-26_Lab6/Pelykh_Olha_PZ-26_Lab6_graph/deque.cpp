#include "deque.h"
#include <iostream>

Deque::Deque() : front(0), rear(0), size(0), capacity(1) {
    data = new int[capacity];
}

Deque::~Deque() {
    delete[] data;
}

bool Deque::isEmpty() const {
    return size == 0;
}

void Deque::resize() {
    capacity *= 2;
    int *newData = new int[capacity];
    for (int i = 0; i < size; i++) {
        newData[i] = data[(front + i) % capacity];
    }
    delete[] data;
    data = newData;
    front = 0;
    rear = size;
}

void Deque::push_back(int value) {
    if (size == capacity) {
        resize();
    }
    data[rear] = value;
    rear = (rear + 1) % capacity;
    size++;
}

void Deque::push_front(int value) {
    if (size == capacity) {
        resize();
    }
    front = (front - 1 + capacity) % capacity;
    data[front] = value;
    size++;
}

int Deque::pop_back() {
    if (!isEmpty()) {
        rear = (rear - 1 + capacity) % capacity;
        size--;
        return data[rear];
    }
    return -1;
}

int Deque::pop_front() {
    if (!isEmpty()) {
        int value = data[front];
        front = (front + 1) % capacity;
        size--;
        return value;
    }
    return -1;
}

int Deque::getIndex(int value) const {
    for (int i = 0; i < size; i++) {
        if (getElement(i) == value) {
            return i;
        }
    }
    return -1;
}

int Deque::getElement(int index) const {
    if (index >= 0 && index < size) {
        return data[(front + index) % capacity];
    }
    return -1;
}


int Deque::getSize() const {
    return size;
}

int Deque::getMin() const {
    int minVal = data[front];
    for (int i = 1; i < size; i++) {
        int val = getElement(i);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

int Deque::getMax() const {
    int maxVal = data[front];
    for (int i = 1; i < size; i++) {
        int val = getElement(i);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}

int Deque::findElement(int value) const {
    for (int i = 0; i < size; i++) {
        if (getElement(i) == value) return i;
    }
    return -1;
}

QString Deque::getContents() const {
    QString contents;
    for (int i = 0; i < size; i++) {
        contents += QString::number(getElement(i)) + " ";
    }
    return contents.trimmed();
}

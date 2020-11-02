//
// Created by aadarsha on 10/31/20.
//

#include "ArrayQueue.h"

int ArrayQueue::insert(int a) {
    if (pos >= size) {
        throw "Queue is full. Try removing some entries";
    } else {
        arr[pos] = a;
        pos++;
        f = arr[0];
        r = a;
    }
    return a;
}

int ArrayQueue::remove() {
    int removed;
    if (pos == 0) {
        throw "No items in the queue.";
    } else {
        removed = f;
        std::cout << "Removing " << f << "from the queue" << std::endl;
        for (i = 0; i < pos; i++) {
            arr[i] = arr[i + 1];
        }
        pos--;
        f = arr[0];
        r = arr[pos - 1];
    }
    return removed;
}

int ArrayQueue::front() {
    if (pos == 0) throw "No items in the queue.";
    return f;
}

int ArrayQueue::rear() {
    if (pos == 0) throw "No items in the queue.";
    return r;
}
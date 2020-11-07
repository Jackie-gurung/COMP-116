#include "ArrayQueue.h"

template <class Type>
Type ArrayQueue<Type>::insert(Type a) {
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

template <class Type>
Type ArrayQueue<Type>::remove() {
    Type removed;
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

template <class Type>
Type ArrayQueue<Type>::front() {
    if (pos == 0) throw "No items in the queue.";
    return f;
}

template <class Type>
Type ArrayQueue<Type>::rear() {
    if (pos == 0) throw "No items in the queue.";
    return r;
}
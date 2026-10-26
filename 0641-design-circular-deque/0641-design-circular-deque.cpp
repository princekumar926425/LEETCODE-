class MyCircularDeque {
    int *arr;
    int size;
    int front;
    int rear;

public:

    // Constructor
    MyCircularDeque(int k) {
        size = k;
        arr = new int[k];
        front = rear = -1;
    }

    bool insertFront(int value) {

        // Check karo deque full hai ya nahi
        if (isFull()) {
            return false;
        }

        // Agar deque empty hai
        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            // Front ko circularly piche le jao
            front = (front - 1 + size) % size;
        }

        arr[front] = value;
        return true;
    }

    bool insertLast(int value) {

        // Check karo deque full hai ya nahi
        if (isFull()) {
            return false;
        }

        // Agar deque empty hai
        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            // Rear ko circularly aage le jao
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        return true;
    }

    bool deleteFront() {

        // Agar deque empty hai to delete nahi kar sakte
        if (isEmpty()) {
            return false;
        }

        // Sirf ek hi element tha
        if (front == rear) {
            front = rear = -1;
        }
        else {
            // Front ko aage badhao
            front = (front + 1) % size;
        }

        return true;
    }

    bool deleteLast() {

        // Agar deque empty hai
        if (isEmpty()) {
            return false;
        }

        // Sirf ek element tha
        if (front == rear) {
            front = rear = -1;
        }
        else {
            // Rear ko circularly piche le jao
            rear = (rear - 1 + size) % size;
        }

        return true;
    }

    int getFront() {

        // Empty deque
        if (isEmpty()) {
            return -1;
        }

        return arr[front];
    }

    int getRear() {

        // Empty deque
        if (isEmpty()) {
            return -1;
        }

        return arr[rear];
    }

    bool isEmpty() {

        // Empty condition
        return front == -1;
    }

    bool isFull() {

        // Circular deque full condition
        return (rear + 1) % size == front;
    }
};
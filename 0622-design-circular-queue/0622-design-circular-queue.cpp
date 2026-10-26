class MyCircularQueue {
    int *arr;
    int size;
    int front;
    int rear;

public:
    
    MyCircularQueue(int k) {
        size = k;
        arr = new int[k];
        front = -1;
        rear = -1;
    }
    
    bool enQueue(int value) {

        // Queue full hai
        if ((rear + 1) % size == front) {
            return false;
        }

        // First element insert
        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        return true;
    }
    
    bool deQueue() {

        // Queue empty hai
        if (front == -1) {
            return false;
        }

        // Sirf ek element tha
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        return true;
    }
    
    int Front() {

        if (front == -1) {
            return -1;
        }

        return arr[front];
    }
    
    int Rear() {

        if (rear == -1) {
            return -1;
        }

        return arr[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return (rear + 1) % size == front;
    }
};
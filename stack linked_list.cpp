#include <iostream>
using namespace std;
// Node class for a linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Stack class using linked list
class LinkedListStack {
private:
    Node* top;  // Pointer to the top node of the stack

public:
    LinkedListStack() {
        top = nullptr;
    }

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to the stack." << endl;
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
             cout << "Stack is empty. Cannot pop an element." <<endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        int poppedValue = temp->data;
        delete temp;
        cout << poppedValue << " popped from the stack." <<endl;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Print the elements in the stack
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Elements in the stack: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Main function for testing
int main() {
    LinkedListStack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.printStack();

    stack.pop();
    stack.printStack();

    stack.pop();
    stack.pop();
    stack.printStack();

    stack.pop();

    return 0;
}

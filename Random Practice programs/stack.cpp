#include <iostream>
using namespace std;
#define SIZE 5  // constant size rkha ha 5

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;  // initially empty
    }

    // PUSH operation
    void push(int val) {
        if (top == SIZE - 1) { // jab stack full ho jay gi tab ya chala ga 4==4
            cout << "Stack Overflow! Cannot push " << val << endl;
        } else {
            top++;
            arr[top] = val; // top -1 sa 0 ho gaya or max 4 tk ja sakti
            cout << val << " pushed into stack." << endl;
        }
    }

    // POP operation
    void pop() {
        if (top == -1) {
            cout << "Stack is empty! Nothing to pop." << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        //   Dono ma sa koi bhi aik use kr loo ya nicha wala return kr rah ha uper wala sirf remove kr rha ha
//            int val = arr[top];
//            top--;
//            return val;  // return bhi karega 
        }
    }

    void peek() {
        if (top == -1)
            cout << "Stack is empty." << endl;
        else
            cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();
    s.pop();
    s.display();

    return 0;
}
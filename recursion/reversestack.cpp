#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s , int element ){
    if(s.empty()){
        s.push(element);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s , element);
    s.push(temp);
}

void sortStack(stack<int> &s ){
    if(s.empty()){
        return;
    }
int temp = s.top();
s.pop();

sortStack(s);
insertAtBottom(s ,temp);

}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    sortStack(s);
    printStack(s);
    return 0;
}
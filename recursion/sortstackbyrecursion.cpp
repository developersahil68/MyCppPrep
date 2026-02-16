#include<iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s , int element){
    if(s.empty() || s.top() < element){
        s.push(element);
        return;
    }
    int temp = s.top();
    s.pop();
    sortedInsert(s , element);

    s.push(temp);
}


void sortStack(stack<int> &s ){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();

    sortStack(s);

    sortedInsert(s , temp);
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
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);

    sortStack(s);

    printStack(s);
    return 0;
}
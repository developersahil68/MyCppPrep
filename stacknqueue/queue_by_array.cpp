#include<iostream>
#include<climits>
using namespace std;

class Queue {
    int capacity;
    int *arr;
    int start;
    int end;
public:
    Queue(int c){
      this->capacity = c;
      this->arr = new int[c];
        this->start = -1;
        this->end = -1;
    }

    void push(int ele){

        // this is like when the start is at 0th idx and end at 4th idx 
        // and we have an array of length 5 so all elements is filled with
        // some values 
        if((this->end + 1) % this->capacity == this->start){
             cout<<"Overflow\n";
            return;
        }

        if(this->start == -1){
            this->start = 0;
        }

        // this means 
        this->end = (this->end + 1) % this->capacity;
        this->arr[this->end] = ele;
      
    }

    int pop(){
        if(this->start == -1){
            cout<<"Underflow condition";
            return INT_MIN ;
        }

         int removed = this->arr[this->start];


         if(this->start == this->end) {
            this->start = -1;
            this->end = -1;
        }
        else {
            this->start = (this->start + 1) % this->capacity;
        }

        return removed;
    }

    int getTop(){
             if(this->start == -1){
            cout<<"no elements in the queue";
            return  INT_MIN;
        }
        return this->arr[this->start];
    }
};

int main(){
    Queue q(5);

    q.push(5);
    q.push(54);
    q.push(45);
    q.push(6);
    

    return 0;
}
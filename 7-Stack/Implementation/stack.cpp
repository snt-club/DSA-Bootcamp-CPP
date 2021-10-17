#include<bits/stdc++.h>

using namespace std;
#define MAX 1000

class Stack{
	int top;
public:
	int stackarr[MAX];
	Stack(){
		top = -1;
	}
	bool push(int ele);
	int pop();
	int peek();
	bool isEmpty();
	void display();
};

bool Stack::push(int element){
	if(top >= (MAX - 1)){
		cout<<"Stack Overflow"<<endl;
		return false;
	}
	else{
		stackarr[++top] = element;
		cout<<element<<"Pushed successfully"<<endl;
		return true;
	}
}

int Stack::pop(){
	if(top == -1){
		cout<<"Empty stack";
		return 0;
	}
	else{
		int ele = stackarr[top];
		top--;
		return ele;
	}
}

int Stack::peek(){
	if(top == -1){
		cout<<"Empty Stack";
		return 0;
	}
	else{
		return stackarr[top];
	}
}

bool Stack::isEmpty(){
	if(top == -1){
		return true;
	}
	else
		return false;
}

int main(){
	Stack* stack = new Stack();
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(4);
	stack->push(5);
	cout<<"Current Top element in stack is: "<<stack->peek()<<endl;
	cout<<stack->pop()<<" Popped from stack"<<endl;
	cout<<"Current Top element in stack is: "<<stack->peek()<<endl;
	cout<<"Elements present in stack are: ";
	while(!stack->isEmpty()){
		cout<<stack->peek()<<" ";
		stack->pop();
	}
}


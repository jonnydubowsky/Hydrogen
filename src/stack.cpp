#include <iostream>
#import "stack.h"

using namespace std;

// void Stack::initStack(){
// 	Stack::scount = 0;//CURRENT NUMBER OF VALUES ON STACK
// 	return;
// }

// void Stack::push(int p){
// 	values[Stack::scount] = p;
// 	Stack::scount++;
// 	return;
// }

// void Stack::pop(){
// 	Stack::scount--;
// 	return;
// }

// int count(){
// 	return Stack::scount;
// }

Stack::Stack(){

}


int Stack::top(){
	return values[scount-1];
}

void Stack::killStack(){
	
}
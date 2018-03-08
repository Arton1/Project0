#include <iostream>

using namespace std;

void func1(){
    int *x = new int;
    *x = 5;
    return;
}

void func2(){
    int *x = new int;
    delete x;
    *x = 5;
    return;
}

void func3(){
    int *x = new int[2];
    delete x;
    return;
}

void func4(){
    int *x = new int[2];
    x[2]=5;
    delete [] x;
    return;
}

char* text(){
    char txt[10] = "Hello";
    char *pointer = txt;
    return pointer;
}

void func5(){
    char *pointer = text();
    for(int i = 0; i<10; i++)
	cout << *(pointer+i);
    cout << endl;
}

void sumowanie(){
    for(int i=0; i<5; i++);
    return;
}

int main()
{
    sumowanie();
    return 0;
}

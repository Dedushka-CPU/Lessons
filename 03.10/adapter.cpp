#include <iostream>
#include <stack>
#include <list>

using std::cout;
using std::cin;

int main(){
	std::stack<int,std::list<int>> s;
	s.push(5);
	s.push(7);
	s.push(15);
	s.push(787);
	s.push(52);
	int num=0;
    s.push(num);
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    s.pop();
    while (!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
    }
    
    /* дЛЯ STACK;.pop удаляет,push добавляет,top выводит ласт элемент
     push_back,pop_back,beck,empty
     Для дека:
     front(),pop_front()
     */
	return 0;
}


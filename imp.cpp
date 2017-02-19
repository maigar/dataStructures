#include "queue.hpp"
#include "stack.hpp"
#include <string>

using namespace std;
using namespace ds;
int main(){
    Stack<int> s;
    Queue<string> q;
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    q.push("A");
    q.push("B");
    q.push("C");
    q.push("D");
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
}

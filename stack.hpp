#ifndef STACK_INCLUDED
#define STACK_INCLUDED
#include <iostream>
namespace ds{
    template<typename T>
    struct Stack_ele{
        T data;
        Stack_ele *below;
    };

    template<class T>
    class Stack
    {
        Stack_ele<T> *top_ptr;
    public:
        Stack(){
            top_ptr=NULL;
        }

        void push(T data){
            Stack_ele<T> *ele;
            ele=new Stack_ele<T>;
            ele->data=data;
            ele->below=top_ptr;
            top_ptr=ele;
        }

        T pop(){
            if(isEmpty())
                return NULL;
            else{
                T data;
                data=top_ptr->data;
                top_ptr=top_ptr->below;
                return data;
            }

        }

        T peek(){
            if(isEmpty())
                return NULL;
            else
                return top_ptr->data;
        }

        bool isEmpty(){
            if(top_ptr==NULL)
                return true;
            else
                return false;
        }
    };
}
#endif // STACK_INCLUDED

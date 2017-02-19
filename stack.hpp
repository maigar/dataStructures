#ifndef STACK_INCLUDED
#define STACK_INCLUDED
#include <iostream>
namespace ds{
    template<typename T>
    struct Stack_ele
    {
        T data;
        Stack_ele *below;
    };


    template<typename T>
    void spush(Stack_ele<T> *ele,Stack_ele<T> **tp_ptr){
        if(*tp_ptr==NULL){
            ele->below=NULL;
            *tp_ptr=ele;
        }
        else{
            ele->below=*tp_ptr;
            *tp_ptr=ele;
        }
    }

    template<typename T>
    T spop(Stack_ele<T> **tp_ptr){
        T top;
        top=(*tp_ptr)->data;
        *tp_ptr=(*tp_ptr)->below;
        return top;
    }

    template<typename T>
    class stack
    {
        Stack_ele<T> *top_ptr;
    public:
        stack(){
            top_ptr=NULL;
        }

        void push(T data){
            Stack_ele<T> *ele;
            ele=new Stack_ele<T>;
            ele->data=data;
            spush(ele,&top_ptr);
        }

        T pop(){
            if(isEmpty())
                return -1;
            else
                return spop(&top_ptr);
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

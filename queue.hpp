#ifndef QUEUE_INCLUDED
#define QUEUE_INCLUDED
#include <iostream>
namespace ds{
    template<typename T>
    struct Q_ele{
        T data;
        Q_ele *next;
        Q_ele *prev;
    };

    template<class T>
    class Queue{
        Q_ele<T> *frnt_ptr;
        Q_ele<T> *bck_ptr;
        public:
            Queue(){
                frnt_ptr=NULL;
                bck_ptr=NULL;
            };

            void push(T data){
                Q_ele<T> *ele;
                ele=new Q_ele<T>;
                ele->data=data;
                if(frnt_ptr==NULL && bck_ptr==NULL)
                    frnt_ptr=ele;
                ele->next=bck_ptr;
                ele->prev=NULL;
                if(!isEmpty())
                    bck_ptr->prev=ele;
                bck_ptr=ele;
            }

            T pop(){
                if(isEmpty()){
                    return NULL;
                }
                else{
                    T data;
                    data=frnt_ptr->data;
                    frnt_ptr=frnt_ptr->prev;
                    return data;
                }
            }

            bool isEmpty(){
                if(frnt_ptr==NULL || bck_ptr==NULL)
                    return true;
                else
                    return false;
            }
    };


}
#endif // QUEUE_INCLUDED

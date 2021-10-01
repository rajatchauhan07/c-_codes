#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;
};
node *head=NULL;

void appenddl(node **href, int x){
    node *temp,*ptr=NULL;
    temp=*href;

    if(temp==NULL){
        temp =new node();
        temp->prev=NULL;
        temp->next = NULL;
        temp->data=x;
        *href=temp;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ptr =new node();
        ptr->prev=temp;
        ptr->data=x;
        temp->next=ptr;
        ptr->next=NULL;

    }

}

void showddl(node *head){
    node *temp;
    temp=head;
    if(head==NULL){
        cout<<"\n list is empty "<<endl;
        return;
    }
    else{
        while(temp!=NULL){
            cout<<"\n "<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

void biotonicddl(node **href){
    node *temp,*first,*last,*prev=NULL;
    first=*href;
    last=*href;
    while(last->next!=NULL){
        last=last->next;
    }
    if(first==last)
    return;

    else if(first->data>last->data){
        temp=last;
        last=last->prev;
        last->next=NULL;
        first->prev=temp;
        temp->next=first;
        temp->prev=NULL;
        *href=temp;
    }
    else{
        first=first->next;
    }

    while(first!=last){

        if(first->data>=last->data){
            temp=last;
            last=last->prev;
            last->next=NULL;
            prev=first->prev;
            prev->next=temp;
            temp->prev=prev;
            temp->next=first;
            first->prev=temp;

        }
        else{
            first=first->next;
        }

    }

}

int main(){

     int x;
     appenddl(&head,3);
     appenddl(&head,8);
     appenddl(&head,11);
     appenddl(&head,18);
     appenddl(&head,23);
     appenddl(&head,27); 
     appenddl(&head,31);
     appenddl(&head,28);
     appenddl(&head,25);
     appenddl(&head,21);
     appenddl(&head,17);
     appenddl(&head,2); 


     showddl(head);
     cout<<"\n after shorting biotonic ddl "<<endl;
     biotonicddl(&head);
     showddl(head);



     return 0;
}
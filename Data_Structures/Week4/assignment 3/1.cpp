#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node* prev;
    
        Node(int value, Node* next = NULL, Node* prev = NULL){
            this->value = value;
            this->next = next;
            this->prev = prev;
        }
};

void insert_tail(Node* &head, Node* &tail, int value){
    Node* node = new Node(value);
    if(tail == NULL){
        head = node;
        tail = node;
        return;
    }
    tail->next = node;
    node->prev = tail;
    tail = tail->next;
}

class sahadStack{
    Node* head = NULL;
    Node* tail = NULL;

    int siz = 0;
    public:
        void push(int value){
            siz++;
            Node* node = new Node(value);
            if(tail == NULL){
                head = node;
                tail = node;
                return;
            }

            tail->next = node;
            node->prev = tail;
            tail = tail->next;
        }

        void pop(){
            Node* to_del = tail;
            tail = tail->prev;
            if(tail == NULL) head = NULL;
            else tail->next = NULL;
            delete to_del;
            siz--;
        }

        int top(){
            return tail->value;
        }

        int size(){
            return siz;
        }

        bool empty(){
            if(siz == 0) return true;
            else return false;
        }
};

class Queue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int siz = 0;

        void push(int value){
            siz++;
            Node* node = new Node(value);

            if(tail == NULL){
                head = node;
                tail = node;
                return;
            }
            tail->next = node;
            node->prev = tail;
            tail = tail->next;
        }

        void pop(){
            siz--;
            Node* deleteNode = head;

            head = head->next;
            
            if(head != NULL) head->prev = NULL;
            else tail = NULL;
            
            delete deleteNode;
        }

        int front(){
            return head->value;
        }

        int size(){
            return siz;
        }

        bool empty(){
            return siz == 0;
        }
};

int main(){
    sahadStack st;
    Queue que;

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n ; i++) {
        int a;
        cin >> a;
        st.push(a);
    }
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        que.push(a);
    }
   if(n != m) cout << "NO";   
   else{
     bool flag = true;
     while(!st.empty())   {
        if(st.top() != que.front()){
           flag = false;
           break;
         }
         st.pop();
         que.pop();
       }
     if(flag) cout << "YES";
     else cout << "NO";
   }
}

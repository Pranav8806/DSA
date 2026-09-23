class Node{
public:
    Node* next ;
    Node *prev;
    int val;
    Node(int v){
        next=NULL;
        prev=NULL;
        val=v;
    }
};
class MyCircularDeque {
public:
    Node *head;
    Node *tail;
    int currsize;
    int k;
    MyCircularDeque(int k) {
        head=tail=NULL;
        currsize=0;
        this->k=k;
    }
    
    bool insertFront(int value) {
        if(currsize>=k) return false;
        Node *newNode=new Node(value);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
            head->prev=tail;
            currsize++;
            return true;
        }
        newNode->next=head;
        head->prev=newNode;
        tail->next=newNode;
        head=newNode;
        head->prev=tail;
        currsize++;
        return true;
    }
    
    bool insertLast(int value) {
        if(currsize>=k) return false;
        Node *newNode=new Node(value);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
            head->prev=tail;
            currsize++;
            return true;
        }
        newNode->prev=tail;
        tail->next=newNode;
        newNode->next=head;
        tail=tail->next;
        head->prev=tail;
        currsize++;
        return true;
    }
    
    bool deleteFront() {
        if(head==NULL) return false;
        if(head == tail) {
            delete head;
            head = tail = NULL;
            currsize--;
            return true;
        }
        Node *del=head;
        head=head->next;
        head->prev=tail;
        tail->next=head;
        delete del;
        currsize--;
        return true;
    }
    
    bool deleteLast() {
        if(head==NULL) return false;
        if(head == tail) {
            delete head;
            head = tail = NULL;
            currsize--;
            return true;
        }
        Node *del=tail;
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        delete del;
        currsize--;
        return true;
    }
    
    int getFront() {
        if(head==NULL) return -1;
        return head->val;
    }
    
    int getRear() {
        if(head==NULL) return -1;
        return tail->val;
    }
    
    bool isEmpty() {
        return currsize==0;
    }
    
    bool isFull() {
        return k==currsize;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
class MyLinkedList {
    public:
        class Node{
            public:
            Node *next;
            int val;
            Node(int v){
                next=NULL;
                val=v;
            }
        };
        Node *head;
        MyLinkedList() {
            head=NULL;
        }
        
        int get(int index) {
            Node *temp=head;
            int i=0;
            while(temp!=NULL){
                if(i==index){
                    return temp->val;
                }
                temp=temp->next;
                i++;
            }
            return -1;     
        }
        void addAtHead(int val) {
            Node*newNode=new Node(val);
            if(head==NULL){
                head=newNode;
                return;
            }
            Node *temp=head;
            newNode->next=head;
            head=newNode;
            
        }
        
        void addAtTail(int val) {
            Node*newNode=new Node(val);
            if(head==NULL){
                head=newNode;
                return;
            }
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode; 
        }
        
        void addAtIndex(int index, int val) {
            Node*newNode=new Node(val);
            if(index==0){
                newNode->next=head;
                head=newNode;
                return;
            }
            Node *temp=head;
            for(int i=1;i<index;i++){
                if(temp==NULL) return;
                temp=temp->next;
            }
            if(temp==NULL) return;
            newNode->next=temp->next;
            temp->next=newNode;
        }
        
        void deleteAtIndex(int index) {
            if(head==NULL) return ;
            Node *temp=head;
            if(index==0){
                Node*del=head;
                head=head->next;
                delete del;
                return;
            }
            for(int i=1;i<index;i++){
                if(temp->next==NULL) return;
                temp=temp->next;
            } 
            if(temp->next==NULL) return;
            Node*del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
    };
    
    /**
     * Your MyLinkedList object will be instantiated and called as such:
     * MyLinkedList* obj = new MyLinkedList();
     * int param_1 = obj->get(index);
     * obj->addAtHead(val);
     * obj->addAtTail(val);
     * obj->addAtIndex(index,val);
     * obj->deleteAtIndex(index);
     */
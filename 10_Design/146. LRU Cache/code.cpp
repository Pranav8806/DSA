class LRUCache {
    public:
        class Node{
            public:
            int val,key;
            Node *prev;
            Node *next;
            Node(int v,int k){
                val=v;
                key=k;
                prev=NULL;
                next=NULL;
            }
        };
        int limit;
        unordered_map<int,Node*>m;
        //dummy nodes
        Node *head=new Node(-1,-1);       
        Node *tail=new Node(-1,-1);
        void addNode(Node *newNode){
            Node* oldNext=head->next;
            head->next=newNode;
            oldNext->prev=newNode;
            newNode->next=oldNext;;
            newNode->prev=head;
        }
        void delNode(Node *del){
            Node *oldprev=del->prev;
            Node *oldnext=del->next;
            oldprev->next=oldnext;
            oldnext->prev=oldprev;
    
        }
        LRUCache(int capacity) {
            limit =capacity;
            head->next=tail;
            tail->prev=head;
        }
        
        int get(int key) {
            if(!m.count(key)) return -1;  //key does not exist
            Node *getNode=m[key];
            int ans=getNode->val;
            delNode(getNode);         // deleting it as most recently used 
            addNode(getNode);        //making it least recently used
            return ans;
        }
        
        void put(int key, int value) {
            if(m.count(key)){   //del node with same key
                Node *oldNode=m[key];
                delNode(oldNode);
                m.erase(key);
            }
            if(m.size()==limit){
                m.erase(tail->prev->key);
                delNode(tail->prev);  //delete most recently used
            }
            Node *newNode=new Node(value,key);
            addNode(newNode);
            m[key]=newNode;
        }
    };
    
    /**
     * Your LRUCache object will be instantiated and called as such:
     * LRUCache* obj = new LRUCache(capacity);
     * int param_1 = obj->get(key);
     * obj->put(key,value);
     */
class Node{
public:
    Node* next ;
    Node *prev;
    string url;
    Node(string u){
        next=NULL;
        prev=NULL;
        url=u;
    }
};
class BrowserHistory {
public:
    Node *curr;
    BrowserHistory(string homepage) {
        Node *newNode=new Node(homepage);
        curr=newNode;
    }
    
    void visit(string url) {
        Node *newNode=new Node(url);;
        curr->next=newNode;
        newNode->prev=curr;
        curr=newNode;
    }
    
    string back(int steps) {
        while(steps>0){
            if(curr->prev!=NULL)
            {    
                curr=curr->prev;
                steps--;
            }
            else break;
        }
        return curr->url;
    }
    
    string forward(int steps) {
         while(steps>0){
            if(curr->next!=NULL)
            {    
                curr=curr->next;
                steps--;
            }
            else break;
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
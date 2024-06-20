//check whether a linked list is circular or not
class Node {
    public:
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x), next(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
  };
bool isCircular(Node* head){
    Node* temp = head;
    //empty list
    if(temp==nullptr)   return 0;

    while (true)
    {
        if(temp->next == head)      return 1;
        if(temp->next == nullptr)   return 0;
        temp=temp->next;
    }
    
}
#include <iostream>
using namespace std;

//   cout<< "Hello World";

//   1 ) Linked list node creation



// class Node{
//   public:
//     int data;
//     Node* next;

//     Node(int value){
//       this->data = value;
//       this->next = NULL;
//     }
// };

// int main() {
//   Node* first = new Node(10);

// }




//     2 ) insertion


class Node{
  public:
    int data;
    Node* next;

    Node(int value){
      this->data = value;
      this->next = NULL;
    }
};

// print function for ll
void print(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

// insert at head in ll
Node* insertAtHead(int value,Node* &head,Node* &tail){
  // ll is empty
  if(head == NULL && tail == NULL){
    // create a new node
    Node* newNode = new Node(value);
    // make new node is tail and head
    head = newNode;
    tail = newNode;
  }
  else{
    // create a new node
    Node* newNode = new Node(value);
    // newNode ko head se connect kro
    newNode->next = head;
    // now make newnode to head
    head = newNode;
  }
  return head;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(10,head,tail);
  insertAtHead(20,head,tail);

  print(head);
  
  
}
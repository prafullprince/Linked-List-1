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

// insertAtTail
Node* insertAtTail(int value,Node* &head,Node* &tail){
  if(head == NULL && tail == NULL){
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
  }
  else{
    Node* newNode = new Node(value);
    tail->next = newNode;
    tail = newNode;
  }
  return head;
}

// to find length
int getLength(Node* &head){
  Node* temp = head;
  int len = 0;
  while(temp != NULL){
    temp = temp->next;
    len++;
  }
  return len;
}

// insertAtAnyPos
Node* insertAtAnyPos(int position,int value,Node* &head,Node* &tail){
  int length = getLength(head);

  if(position == 1){
    insertAtHead(value, head, tail);
  }
  else if (position == length+1){
    insertAtTail(value,head,tail);
  }
  else{
    Node* temp = head;
    for(int i=0;i<position-2;i++){
      temp = temp->next;
    }
    // make new node
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
  }
  return head;
}


int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(10,head,tail);
  insertAtHead(20,head,tail);
  insertAtTail(50,head,tail);
  insertAtTail(60,head,tail);
  print(head);
  insertAtAnyPos(3, 65, head, tail);
  print(head);
  
  
  
}
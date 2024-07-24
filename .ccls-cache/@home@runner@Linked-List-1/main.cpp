#include <iostream>
using namespace std;

// // 1 ) Linked list node creation


// // class Node{
// //   public:
// //     int data;
// //     Node* next;
// //     Node(int value){
// //       this->data = value;
// //       this->next = NULL;
// //     }
// // };
// // int main() {
// //   Node* first = new Node(10);
// // }


// // 2 ) insertion > searching > deletion in singly ll


// class Node{
//   public:
//     int data;
//     Node* next;

//     Node(int value){
//       this->data = value;
//       this->next = NULL;
//     }
// };

// //               print function for ll
// void print(Node* head){
//   Node* temp = head;
//   while(temp!=NULL){
//     cout << temp->data << "->";
//     temp = temp->next;
//   }
//   cout<<"NULL"<<endl;
// }

// //               insert at head in ll
// Node* insertAtHead(int value,Node* &head,Node* &tail){
//   // ll is empty
//   if(head == NULL && tail == NULL){
//     // create a new node
//     Node* newNode = new Node(value);
//     // make new node is tail and head
//     head = newNode;
//     tail = newNode;
//   }
//   else{
//     // create a new node
//     Node* newNode = new Node(value);
//     // newNode ko head se connect kro
//     newNode->next = head;
//     // now make newnode to head
//     head = newNode;
//   }
//   return head;
// }

// //               insertAtTail
// Node* insertAtTail(int value,Node* &head,Node* &tail){
//   if(head == NULL && tail == NULL){
//     Node* newNode = new Node(value);
//     head = newNode;
//     tail = newNode;
//   }
//   else{
//     Node* newNode = new Node(value);
//     tail->next = newNode;
//     tail = newNode;
//   }
//   return head;
// }

// //               to find length
// int getLength(Node* &head){
//   Node* temp = head;
//   int len = 0;
//   while(temp != NULL){
//     temp = temp->next;
//     len++;
//   }
//   return len;
// }

// //               insertAtAnyPos
// Node* insertAtAnyPos(int position,int value,Node* &head,Node* &tail){
//   int length = getLength(head);

//   if(position == 1){
//     insertAtHead(value, head, tail);
//   }
//   else if (position == length+1){
//     insertAtTail(value,head,tail);
//   }
//   else{
//     Node* temp = head;
//     for(int i=0;i<position-2;i++){
//       temp = temp->next;
//     }
//     // make new node
//     Node* newNode = new Node(value);
//     newNode->next = temp->next;
//     temp->next = newNode;
//   }
//   return head;
// }

// //             serching in linked list
// void searching(int target,Node* &head,Node* &tail){
//   Node* temp = head;
//   while(temp!=NULL){
//     if(temp->data==target){
//       cout<<"target is found in ll"<<endl;
//       return;
//     }
//     else{
//       temp = temp->next;
//     }
//   }
//   cout<<"target is not found in ll"<<endl;
// }

// // deletion at head
// Node* deleteAtHead(Node* &head,Node* &tail){
//   Node* temp = head;
//   if(head == NULL && tail == NULL){
//     cout<<"Deletion is not possible on empty ll"<<endl;
//   }
//   else{
//     head = temp->next;
//     temp->next = NULL;
//   }
//   return head;
// }

// delete at tail
// Node* deleteAtTail(Node* &head,Node* &tail){
//   Node* temp = head;
//   int len = getLength(head);
//   if(head == NULL && tail == NULL){
//     cout<<"Deletion is not possible on empty ll"<<endl;
//   }
//   else{
//     for(int i=0;i<len-2;i++){
//       temp = temp->next;
//     }
//     temp->next = NULL;
//     tail = temp;
//   }
//   return head;
// }

// delete at any position
// Node* deleteAtAnyPos(int pos,Node* &head,Node* &tail){
//   int len = getLength(head);
//   Node* temp = head;
//   if(pos==1){
//     deleteAtHead(head, tail);
//   }
//   else if (pos == len){
//     deleteAtTail(head,tail);
//   }
//   else{
//     for(int i=0;i<pos-2;i++){
//       temp = temp->next;
//     }
//     temp->next = temp->next->next;
//   }
//   return head;
// }

// main function
// int main() {
//   Node* head = NULL;
//   Node* tail = NULL;

//   //           making ll using insertion
//   insertAtHead(10,head,tail);
//   insertAtHead(20,head,tail);
//   insertAtTail(50,head,tail);
//   insertAtTail(60,head,tail);
//   print(head);
//   insertAtAnyPos(3, 65, head, tail);
//   print(head);

//   //               searching
//   // searching(75, head, tail);

//   //               deletion
//   // deleteAtHead(head,tail);
//   // print(head);
//   // deleteAtTail(head,tail);
//   // print(head);
//   // deleteAtAnyPos(3, head, tail);
//   // print(head);
  
  
// }




//   2 )  Doubly Linked-list

class Node{
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
      this->data = value;
      this->next = NULL;
      this->prev = NULL;
  }
};


// main function
int main(){
  Node* head = NULL;
  Node* tail = NULL;
  
}
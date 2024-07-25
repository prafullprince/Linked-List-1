#include <iostream>
using namespace std;



//                     Singly Linked list






// class Node{
//   public:
//     int data;
//     Node* next;

//     Node(int value){
//       this->data = value;
//       this->next = NULL;
//     }
// };

//               print function for ll
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

//                deletion at head
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

//                delete at tail
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

//             delete at any position
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







//                       Doubly Linked-list





// class Node{
//   public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int value){
//       this->data = value;
//       this->next = NULL;
//       this->prev = NULL;
//   }
// };

//                     // print for ll

// void print(Node* head){
//   Node* temp = head;
//   while(temp!=NULL){
//     cout << temp->data << "->";
//     temp = temp->next;
    
//   }
//   cout<<"NULL"<<endl;
// }

//                    // insertion at head

// Node* insertAtHead(int value,Node* &head,Node* &tail){
//   Node* temp = head;
//   if(head == NULL && tail == NULL){
//     Node* newNode = new Node(value);
//     head = newNode;
//     tail = newNode;
//   }
//   else{
//     Node* newNode = new Node(value);
//     newNode->next = temp;
//     temp->prev = newNode;
//     head = newNode;
//   }
//   return head;
// }

//                       // reverse ll

// void reverse(Node* tail){
//   Node* temp = tail;
//   while(temp!=NULL){
//     cout<< temp->data <<"->";
//     temp = temp->prev;
//   }
//   cout<<"NULL"<<endl;
// }

//                      // insertion at tail -> think

//                         // find length

// int getLength(Node* &head){
//   Node* temp = head;
//   int len = 0;
//   while(temp != NULL){
//     temp = temp->next;
//     len++;
//   }
//   return len;
// }

//                       // insert at any pos

// Node* insertAtAnyPos(int value,int pos,Node* &head,Node* &tail){
//   // int len = getLength(head);
//   if(pos == 1){
//     insertAtHead(value,head,tail);
//   }
//   // elseif(pos == len+1){
    
//   // }
//   else{
//     Node* temp = head;
//     for(int i=0;i<pos-2;i++){
//       temp = temp->next;
//     }
//     // create newnode
//     Node* newNode = new Node(value);
//     Node* forward = temp->next;
//     temp->next = newNode;
//     newNode->prev = temp;
//     newNode->next = forward;
//     forward->prev = newNode;
//     newNode->prev = temp;
//   }
//   return head;
// }
//                       // TODO:Deltion
//                       // circular linked list

// main function
// int main(){
//   Node* head = NULL;
//   Node* tail = NULL;

//   insertAtHead(10,head,tail);
//   insertAtHead(20,head,tail);
//   insertAtHead(30,head,tail);
//   insertAtHead(40,head,tail);
//   print(head);
//   // reverse(tail);
//   insertAtAnyPos(65,3,head,tail);
//   print(head);
  
// }






//                      reverse singly ll



//     ListNode* reverseList(ListNode* &prev,ListNode* &curr){
//         by recursion
//         base case
//         if(curr == NULL){
//             return prev;
//         }
//         ListNode* forward = curr->next;
//         curr->next = prev;
//         return reverseList(curr,forward);
//         by for loop
//         by while loop
//         while(curr!=NULL){
//             ListNode* forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         int length = getLength(head);
//         ListNode* newHead = reverseList(prev,curr,length);
//         return newHead;
//     }
// };



//                   Linked list palindrome



//     ListNode* getMiddle(ListNode* &head,ListNode* &prevNode){
//         ListNode* slow = head; 
//         ListNode* fast = head;
//         while(fast!=NULL){
//             fast=fast->next;
//             if(fast!=NULL){
//                 fast=fast->next;
//                 prevNode = slow;
//                 slow=slow->next;
//             }
//         }
//         return slow;
//     }
//     ListNode* reverseList(ListNode* &prev, ListNode* &curr){
//         while(curr!=NULL){
//             ListNode* forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         if(head == NULL){
//             return true;
//         }
//         if(head->next == NULL){
//             return true;
//         }
//         ListNode* firstHalf = head;
//         ListNode* prevNode = NULL;
//         ListNode* middleNode = getMiddle(head,prevNode);
//         // break ll
//         prevNode->next = NULL;
//         // reverse second part
//         ListNode* prev = NULL;
//         ListNode* curr = middleNode;
//         ListNode* secondHalf = reverseList(prev,curr);
//         // compare
//         ListNode* temphead1 = firstHalf;
//         ListNode* temphead2 = secondHalf;
//         while(temphead1!=NULL){
//             if(temphead1->val!=temphead2->val){
//                 return false;
//             }
//             else{
//                 temphead1 = temphead1->next;
//                 temphead2 = temphead2->next;
//             }
//         }
//         return true;
//     }
// };
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

int main() {
  Node* first = new Node(10);

}
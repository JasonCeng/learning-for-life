#include <iostream>
using namespace std;

class MyStack {
  private:
    vector<int> data; //store elements
  public:
    /** Insert an element into the stack */
    void push(int x) {
      data.push_back(x);
    }
    /** Checks whether the queue is empty or not. */
    bool isEmpty() {
      return data.empty();
    }
    /** Get the top item from the queue. */    
    int top() {
      return data.back(); // back(): return the vector data's end reference
    }
    /** Delect an element from the queue. Return true if the operation is successful */
    bool pop() {
      if(isEmpty()) {
        return false;
      }
      data.pop_back(); // pop_back():delete the end element of vector data
      return true;
    }
}

int main() {
  MyStack s;
  s.push(1);
  s.push(2);
  s.push(3);
  for(int i=0; i < 4; i++) {
    if(!s.isEmpty()) {
      cout << s.top() << endl;
    }
    cout << (s.pop() ? "true" : "false") << endl;
  }
}
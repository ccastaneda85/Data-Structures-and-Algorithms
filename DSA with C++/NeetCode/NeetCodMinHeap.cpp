#include <iostream>
#include <vector>


using namespace std;

class MinStack {
    public:
        MinStack() {
            
        }
        
        void push(int val) {
            if (minContainer.empty()) minContainer.push_back(val);
            else {
                if(minContainer.back() > val) {
                    minContainer.push_back(val);
                } else if(minContainer.back() < val) {
                    minContainer.push_back(minContainer.back());
                }
            }

            container.push_back(val);
        }
        
        void pop() {
            minContainer.pop_back();
            container.pop_back();
        }
        
        int top() { 
            return container.back();
        }
        
        int getMin() {  
            return minContainer.back();
        }
    private:
        vector<int> container;
        vector<int> minContainer;
};




int main(int argc, char const *argv[])
{
    MinStack mystack;

    cout << mystack.top() << endl;

    mystack.push(-1);

    for(int i = 0; i < 10; i++)
        mystack.push(i);



    for(int i = 0; i < 10; i++) {
        cout << "Number " << i  + 1<< " ";
        cout << "top: " << mystack.top() << " ";
        cout << "min: " << mystack.getMin() << endl;
        mystack.pop();
    }
    

    return 0;
}

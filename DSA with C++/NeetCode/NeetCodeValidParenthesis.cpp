#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool isOpenParenth(char c) {
    return c == '(' || c == '[' || c == '{';
}

bool isClosingParenth(char c) {
    return c == ')' || c == ']' || c == '}';
}


bool validParenth(string s) {
    bool balance = true;
    
    if(isClosingParenth(s.at(0)) || isOpenParenth(s.back())) return false;

    vector<char> stack;

    for(int i = 0; i < s.size(); i++) {
        if(isOpenParenth(s.at(i))) {
            stack.push_back(s.at(i));
        }
        else {

            if(s.at(i) == ')') {
                if(stack.back() != '(') return false;
                else stack.pop_back(); continue;
            }
                
            
            if(s.at(i) == ']') {
                cout << "closing square" << endl;
                if(stack.back() != '[') return false;
                else stack.pop_back(); continue;
            }
               
            if(s.at(i)== '}') {
                if(stack.back() != '{') return false;
                else stack.pop_back(); continue;
            }

        }
    }

    if(!stack.empty()) {
        return false;
    }
   
   return balance;
}

int main(int argc, char const *argv[])
{
    string s = "[(])";

    cout << validParenth(s);




    return 0;
}

#include <vector>
#include <stack>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;


int calPoints(vector<string>& operations) {
    stack<int> scoreStack;
    
    for(int i = 0; i < operations.size(); i++) {
        if(isdigit(operations.at(i)[0])) {
            scoreStack.push(stoi(operations.at(i), 0));
        }

        if(operations.at(i) == "+") {
            
        }

    }
    
  

    int score = 0;
    int n = scoreStack.size();
    for (int i = 0; i < n; i++) {
        score += scoreStack.top();
        scoreStack.pop();
    }

    return score;
}
    



int main(int argc, char const *argv[])
{

    vector<string> myStringVect{ "1", "2", "3"};

    int score = calPoints(myStringVect);

    cout << score << endl;
 

    return 0;
}

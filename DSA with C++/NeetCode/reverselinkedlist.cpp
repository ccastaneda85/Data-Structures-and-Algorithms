#include<iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* currPtr = head;
    ListNode* newListPtr = nullptr;

    while(currPtr != nullptr) {
        ListNode* newNode = new ListNode;
        newNode->val = currPtr->val;
        newNode->next = newListPtr;
        newListPtr = newNode;
        currPtr = currPtr->next;
    }

    return newListPtr;
}

void printLinkedList(ListNode* head) {
    ListNode* currPtr = head;
    int counter = 1;
    while(currPtr != nullptr) {
        cout << "[" <<  currPtr->val << "] -> ";
        currPtr = currPtr->next;
        counter++;
    }

    cout << "nullptr \n";
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
}

int main(int argc, char const *argv[])
{
    
    ListNode headNode = {10, nullptr};

    headNode.next = new ListNode(9, new ListNode(8, new ListNode(7, new ListNode(6))));

    printLinkedList(&headNode);

    ListNode* reversedList = reverseList(&headNode);

    printLinkedList(reversedList);
    

    return 0;
}

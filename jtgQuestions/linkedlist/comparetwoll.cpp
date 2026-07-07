struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

bool areIdentical(Node* head1, Node* head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    // Traverse both lists simultaneously
    while (ptr1 != nullptr && ptr2 != nullptr) {
        // If data values are not equal, lists are not identical
        if (ptr1->data != ptr2->data) {
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // If both reached nullptr, they are of equal length and identical
    return (ptr1 == nullptr && ptr2 == nullptr);
}
vector <int> postOrder(Node* cur)
{
   vector < int > postOrder;
    if (cur == NULL) return postOrder;

   stack < Node * > st;
   while (cur != NULL || !st.empty()) {

  if (cur != NULL) {
        st.push(cur);
        cur = cur -> left;
    } else {
        Node * temp = st.top() -> right;
        if (temp == NULL) {
            temp = st.top();
            st.pop();
            postOrder.push_back(temp -> data);
            while (!st.empty() && temp == st.top() -> right) {
                temp = st.top();
                st.pop();
                postOrder.push_back(temp -> data);
            }
        } else cur = temp;
    }
  }
    return postOrder;
    
}

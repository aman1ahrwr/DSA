int solve(Node* root, int X, int &count){
    int leftSum = 0;
	int rightSum = 0;
	int sum = 0;
	
	if(root->left){
	    leftSum = solve(root->left, X, count);
	}   
	
	if(root->right){
	    rightSum = solve(root->right, X, count);
	}
	
	sum=root->data+leftSum+rightSum;
	if(sum==X){
	    count++;
	}
	return sum;
}

int countSubtreesWithSumX(Node* root, int X)
{
	int count=0;
    solve(root, X, count);
    return count;
}

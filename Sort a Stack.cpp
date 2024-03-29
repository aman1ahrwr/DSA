// Best Solution
void sortedInsert(stack<int> &stack, int t){
    if(stack.empty() || (!stack.empty() && stack.top()<=t)){
        stack.push(t);
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    sortedInsert(stack, t);
    stack.push(num);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
        return;
    }
    
    int t = stack.top();
    stack.pop();
    
    sortStack(stack);
    
    sortedInsert(stack, t);
}


// less Readable Code
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void sortedInsert(stack<int> &s,int x){
    int temp;
    if(s.empty() || s.top()<x){
        s.push(x);
        return;
    }else{
        temp = s.top();
        s.pop();
        sortedInsert(s,x);
        s.push(temp);
    }
}

void SortedStack :: sort()
{
    int temp;  
    if(s.empty()){
        return;
    }
    temp = s.top();
    s.pop();
    sort();
    sortedInsert(s,temp);
}

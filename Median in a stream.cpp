#include<bits/stdc++.h>
int signum(int a, int b){
	if(a==b){
		return 0;
	}else if(a>b){
		return 1;
	}else{
		return -1;
	}
}

int median(int &element,priority_queue<int> &left, priority_queue<int, vector<int>, greater<int>> &right, int &m){
	int ans=0;
	switch(signum(left.size(), right.size())){
		case 0:
			if(element>m){
				right.push(element);
				ans=right.top();
			}else{
				left.push(element);
				ans=left.top();
			}
			break;
		case 1:
			if(element>m){
				right.push(element);
			}else{
				right.push(left.top());
				left.pop();
				left.push(element);
			}
			ans=(left.top()+right.top())/2;
			break;
		case -1:
			if(element>m){
				left.push(right.top());
				right.pop();
				right.push(element);
			}else{
				left.push(element);
			}
			ans=(left.top()+right.top())/2;
			break;
	}
	return ans;
}

vector<int> findMedian(vector<int> &arr, int n){
	
	vector<int> ans;
	int m=0;
	priority_queue<int> left;
	priority_queue<int, vector<int>, greater<int>> right;

	for(int i=0; i<n; i++){
		m=median(arr[i], left, right, m);
		ans.push_back(m);
	} 

	return ans;
}

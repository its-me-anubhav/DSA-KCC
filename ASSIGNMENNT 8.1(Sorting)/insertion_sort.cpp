#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
void sort(vector<int>&A)
{
	//write the code for insertion sort
	int i, current,j;
    for (i = 1; i < A.size(); i++)
    {
        current = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > current)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = current;
    }
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}

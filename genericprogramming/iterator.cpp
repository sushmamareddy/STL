#include<iostream>
#include<list>
using namespace std;
template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key)
{
	while(start!=end)
	{
		if(*start==key)
		{
			return start;
		}
		start++;
		
	}
	return end;
}
int main()
{
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(5);
	l.push_back(4);
	auto it=search(l.begin(),l.end(),5);
	cout<<*it<<"\n";
}

#include<iostream>
#include<cstring>
#include<list>
using namespace std;
class Book
{
	public:
	 string name;
	 int cost;
	 Book(string name,int cost)
	 {
	 	this->name=name;
	 	this->cost=cost;
	 }	
};
class BookCompare
{
	public:
		bool operator()(Book A,Book B)
		{
			if(A.name==B.name)
			{
				return true;
			}
			return false;
		}
};
template<class ForwardIterator,class T,class compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key,compare cmp)
{
	while(start!=end)
	{
		if(cmp(*start,key))
		{
			return start;
		}
		start++;
		
	}
	return end;
}
int main()
{
	Book b1("c++",200);
	Book b2("java",300);
	Book b3("python",500);
	list<Book>l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);
	Book booktofind("c++",200);
	BookCompare cmp;
	auto it=search(l.begin(),l.end(),booktofind,cmp);
	if(it!=l.end())
	{
		cout<<"book found\n";
	}
	else
	{
		cout<<"book not found\n";
	}
}


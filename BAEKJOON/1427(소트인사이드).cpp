/*
문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

입력
첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
*/


#include <iostream>
using namespace std;
struct Node
{
	public:
	 int num;
	 Node* next;
	 Node(int v, Node* n) : num(v), next(n) {}
};

class linked_list
{
	private:
		Node *head, *tail;
	public:
	linked_list()
	{
		head = NULL;
		tail = NULL;
	}
	
	void push_back(int n)
	{
		Node* temp = new Node(n, NULL);
		
		if(head == NULL)
			head = temp;
		else
			tail->next = temp;
		tail = temp;
	}
	void popFront()
	{
		if (head != NULL)
		{
			Node* remove = head;
			head = head->next;
			delete remove;
		}
	}
	void insert(int value)
	{
		Node* insert = new Node(value, NULL);
		Node* scan;
		if (head != NULL)
		{
			if (head->num <= value)
			{
				insert->next = head;
				head = insert;
			}
			else if (tail->num >= value) {
				tail->next = insert;
				tail = insert;
			}
			else
			{
				scan = head;
				while (scan->next->num >= insert->num)
					scan = scan->next;
				insert->next = scan->next;
				scan->next = insert;
			}
		}
		else {
			head = insert;
			tail = insert;
			head->next = NULL;
		}
	}
	void print_list(void)
	{
		Node *temp = head;
		while(temp != NULL)
		{
			cout << temp->num;
			temp = temp->next;
		}
	}
	~linked_list()
	{
		while (head != NULL)
			popFront();
	}
};

int main(void)
{
	//vector<int> list;
	unsigned int getnumber;
	linked_list list;
	
	cin >> getnumber;
	
	while(getnumber)
	{
		//cout << "number is " << getnumber << endl;
		list.insert(getnumber%10);
		getnumber /= 10;
	}
	list.print_list();
	
	return 0;
}
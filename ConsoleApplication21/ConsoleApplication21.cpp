#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
}*first = NULL;

void create(int arr[], int n) {
	int i;
	Node* temp,*last;
	first = new Node;
	first->data = arr[0];
	first->next = NULL;
	last = first;
	for (i = 1; i < n; i++) {
		temp = new Node;
		temp->data = arr[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
}
void display(Node* p) {
	while (p != NULL) {
		cout << p->data<<"->";
		p = p->next;
	}
}
void Delete(Node* p) {
	Node* q = first;
	first = first->next;
	int x = q->data;
	delete q;
}
int main() {
	int arr[] = { 5,10,15,20,25 };
	create(arr, 5);
	Delete(first);
	display(first);
	
	return 0;
}
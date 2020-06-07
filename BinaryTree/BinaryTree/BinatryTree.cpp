#include "BinaryTree.h"
#include "Person.hpp"
int main()
{
	srand(time(NULL));

	BinaryTree<Person *> *MyTree = new BinaryTree<Person *>();
	auto AddCritery = [](Person *p) { return (p->getsex() == 'M') ? true : false; };
	auto PrintCritery = [](Person *p) { cout << p->getage() << "  " << p->getsex() << "  " << endl; };
	for (size_t i = 0; i < 10; i++)
	{
		Person *p1 = new Person();
		MyTree->Add(p1, AddCritery);
	}
	MyTree->PrintThrown(PrintCritery);

	cin.get();
	return 0;
}
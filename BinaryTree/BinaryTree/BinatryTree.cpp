#include "BinaryTree.h"
#include "Person.h"
int main()
{
	srand(time(NULL));
	cout << "   Name        Sex       Age      Career" << endl<< endl;
	BinaryTree<Person *> *MyTree = new BinaryTree<Person *>();
	auto AddCritery = [](Person *p) { return (p->getsex() == 'M') ? true : false; };
	auto PrintAsTable = [](Person *p) { cout << p->getname() << "     " << p->getsex() << "       " << p->getage() << "       " << p->getcareer() << endl; };
	auto PrintAsTrhrownTree = [](Person *p) { cout << "    " << p->getsex() << endl; };
	for (size_t i = 0; i < 10; i++)
	{
		Person *p1 = new Person();
		MyTree->Add(p1, AddCritery);
	}
	MyTree->InOrder(PrintAsTable);
	cout << endl<< endl;
	MyTree->PrintThrown(PrintAsTrhrownTree);
	cin.get();
	return 0;
}
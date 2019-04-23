#pragma once
// other: ing

class CDListNode
{
public:
	CDListNode();
	~CDListNode();

private:
	int ilen;
	PTList head;
	PTList tail;

public:
	bool Clear();
	PTList CreateNodes(ElementData data);
	void PrintList(PTList head);

	bool InsertNode(PTList head, int i, ElementData data);
	bool DeleteNode(PTList head, int i);
	ElementData GetNode(PTList head, int i);
	int SearchNode(PTList head, ElementData data);
	bool UpdateNode(PTList head, int i, ElementData data);
	int GetLen();

};


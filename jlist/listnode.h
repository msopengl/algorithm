#pragma once

class CListNode
{
public:
	CListNode();
	~CListNode();

private:
	int ilen;

public:
	bool Clear();
	PTList CreateNodes(ElementData data);
	void PrintList(PTList head);

	bool InsertNode(int i, ElementData data);
	bool DeleteNode(int i);
	ElementData GetNode(int i);
	int SearchNode(ElementData data);
	bool UpdateNode(int i, ElementData data);
	int GetLen();

};


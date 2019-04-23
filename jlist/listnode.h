#pragma once
// other: https://blog.csdn.net/qq_30611601/article/details/79516986#%E5%9B%9B%E7%BA%BF%E6%80%A7%E8%A1%A8%E7%9A%84%E9%93%BE%E5%BC%8F%E5%AD%98%E5%82%A8

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


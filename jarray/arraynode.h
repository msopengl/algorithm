#pragma once
// other: https://www.cnblogs.com/smile233/p/8058647.html
typedef int ElementData;
#define MAX_LEN 10
class CArrayNode
{
public:
	CArrayNode();
	~CArrayNode();

private:
	ElementData arr[MAX_LEN+1];
	int ilen;

public:
	void Clear();
	bool CreateNodes();
	void PrintArray();
	bool InsertNode(int i, ElementData data);
	bool DeleteNode(int i);
	ElementData GetNode(int i);
	int SearchNode(ElementData data);
	bool UpdateNode(int i, ElementData data);
	int GetLen();
};


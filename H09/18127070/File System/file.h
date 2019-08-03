#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace  std;

class CItem
{
protected:
	bool readOnly, hidden;
	string name;
public:
	CItem();
	CItem(string name);
	virtual int getSize() = 0;
	virtual void print(bool showHidden);
	virtual CItem* removeByName(string name) = 0;
	virtual CItem* findByName(string name) = 0;
	string getName();
	bool getHidden();
	bool getReadOnly();
	void setHidden(bool folder, bool item); 
	~CItem();
};

class CFile: public CItem
{
private:
	int size;
public:
	CFile();
	CFile(string name, int size);
	int getSize();
	void print(bool showHidden);
	CItem* removeByName(string name);
	CItem* findByName(string name);
	~CFile();
};

class CFolder: public CItem
{
private:
	vector<CItem*> subItems;
public:
	CFolder();
	CFolder(string name);
	int getSize();
	void add(CItem* subItem);
	void print(bool showHidden);
	CItem* removeByName(string name);
	CItem* findByName(string name);
	bool findItemByName(string fullName, string searchName);
	~CFolder();
};
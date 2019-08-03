#include"file.h"

CItem::CItem()
{
	this->name = "C";
	this->readOnly = false;
	this->hidden = false;
}

CItem::CItem(string name)
{
	this->name = name;
	this->readOnly = false;
	this->hidden = false;
}

void CItem::print(bool showHidden)
{
	cout << "Name: " << name << endl;
	cout << "Read only: " << readOnly << endl;
	cout << "Hidden:  " << hidden << endl;
}

string CItem::getName()
{
	return name;
}

bool CItem::getReadOnly()
{
	return readOnly;
}

bool CItem::getHidden()
{
	return hidden;
}

CItem::~CItem()
{
}

CFile::CFile()
{
	this->size = 0;
}

CFile::CFile(string name, int size): CItem(name)
{
	this->size = size;
}

int CFile::getSize()
{
	return size;
}

void CFile::print(bool showHidden)
{
	if(showHidden == true && hidden == true)
	{
	}
	else if(showHidden == true && hidden == false)
	{
		CItem::print(showHidden);
		cout << "Size: " << getSize() << endl;
	}
	else
	{
		CItem::print(showHidden);
		cout << "Size: " << getSize() << endl;
	}
}

CItem* CFile::removeByName(string name)
{
	return NULL;
}

CFile::~CFile()
{
}

CFolder::CFolder()
{
}

CFolder::CFolder(string name): CItem(name)
{
}

int CFolder::getSize()
{
	int ans = 0;
	for(int i = 0; i < subItems.size(); i++)
	{
		ans += subItems[i]->getSize();
	}
	return ans;
}

void CFolder::add(CItem* subItem)
{
	subItems.push_back(subItem);
}

void CFolder::print(bool showHidden)
{
	if(showHidden == true && hidden == true)
	{
	}
	else if(showHidden == true && hidden == false)
	{
		CItem::print(showHidden);
		cout << "Size: " << getSize() << endl;
		cout << "Number of sub items: " << subItems.size() << endl;
		for(int i = 0; i < subItems.size(); i++)
		{
			subItems[i]->print(showHidden);
		}
	}
	else
	{
		CItem::print(showHidden);
		cout << "Size: " << getSize() << endl;
		cout << "Number of sub items: " << subItems.size() << endl;
		for(int i = 0; i < subItems.size(); i++)
		{
			subItems[i]->print(showHidden);
		}
	}
}

CItem* CFolder::removeByName(string name)
{
	CItem* ans = NULL;
	for(int i = 0; i < subItems.size(); i++)
	{
		if(subItems[i]->getName() == name && getReadOnly() == false)
		{
			ans = *this->subItems.erase(subItems.begin() + i);
			break;
		}
	}
	if(ans == NULL)
	{
		for(int i  = 0; i < subItems.size(); i++)
		{
			ans = subItems[i]->removeByName(name);
			if(ans != NULL) break;
		}
	}
	return ans;
}

CFolder::~CFolder()
{
}

bool CFolder::findItemByName(string fullName, string searchName)
{
	transform(fullName.begin(), fullName.end(), fullName.begin(), toupper);
	transform(searchName.begin(), searchName.end(), searchName.begin(), toupper);
	return fullName.find(searchName) != string::npos;
}

CItem* CFile::findByName(string name)
{
	return NULL;
}

CItem* CFolder::findByName(string name)
{
	CItem* ans = NULL;
	for(int i  = 0; i < subItems.size(); i++)
	{
		if(findItemByName(subItems[i]->getName(), name))
		{
			cout << subItems[i]->getName();
		}
	}
	if(ans == NULL)
	{
		for(int i  = 0; i < subItems.size(); i++)
		{
			ans = subItems[i]->findByName(name);
			if(ans != NULL) break;
		}
	}
	return ans;
}

void CItem::setHidden(bool folder, bool item)
{
	if(folder == true && item == true)
	{
		CItem::print(folder);
		CItem::print(item);
	}
	else if(folder == true && item == false)
	{
		CItem::print(folder);
	}
	else if(folder == false && item == true)
	{
		CItem::print(item);
	}
	else if(folder == false && item == false)
	{
	}
}
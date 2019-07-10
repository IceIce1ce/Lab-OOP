#include"Animal.h"

int main()
{
    srand(time(NULL));
    vector<Animal*> farm;
    for(int i = 0; i < 10; i++)
    {
        int random = rand() % 3;
        switch (random)
		{
		case 0:
			farm.push_back(new Cow);
			break;
		case 1:
			farm.push_back(new Sheep);
			break;
		case 2:
			farm.push_back(new Goat);
			break;
		}
    }
    for(int i = 0; i < (int)farm.size(); i++) 
	{
    	farm[i]->talk();
	}
	int n = (int)farm.size();
	for (int i = 0; i < n; i++)
	{
		vector<Animal*> far = farm[i]->birth();
		for(int j = 0; j < (int)far.size(); j++) 
		{
			farm.push_back(far[j]);
		}
	}
    cout << "Number of cattle after childbirth is: " << farm.size() << endl;
    int milk = 0;
    for (int i = 0; i < (int)farm.size(); i++) 
	{
    	milk += farm[i]->provideMilk();
	}
    cout << "Amount of milk: " << milk << "\n" << "Animals have in farm is: " << "\n";
    for (int i = 0; i < (int)farm.size(); i++)
	{
		cout << farm[i]->name_of_animal() << "\n";
	}
}
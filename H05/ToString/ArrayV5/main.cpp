#include"Array.h"

int main()
{
	Array* arr = new Array(4);
	cout << "Array: " << arr->ToString() << endl;
	delete arr;
	string line = "5, 8, 12, 15, 612, 19";
	string seperator = ", ";
	vector<string> tokens = Tokenizer::Parse(line, seperator);
	vector<int> numbers;
	for(auto i = 0; i < tokens.size(); i++)
	{
		auto num = stoi(tokens[i]);
		numbers.push_back(num);
	}
	for(auto i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}
	return 0;
}
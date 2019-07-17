#include"Company.h"

void Menu(Company company)
{
	int choice;
	do
	{
		system("cls");
		cout << "1. Add staff" << endl;
		cout << "2. List of staff" << endl;
		cout << "3. Calc salary" << endl;
		cout << "4. Find staff has max salary" << endl;
		cout << "5. List of staff has salary less than 3000000" << endl;
		cout << "6. Find staff by name" << endl;
		cout << "7. Find staff by id" << endl;
		cout << "8. List of staff has month of birth in May" << endl;
		cout << "9. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			company.addStaff();
			break;
		case 2:
			company.outputStaff();
			break;
		case 3:
			company.calcSalary();
			break;
		case 4:
			company.findStaffHasMaxSalary();
			break;
		case 5:
			company.listStaffHasSalary3000000();
			break;
		case 6:
			company.findStaffByName();
			break;
		case 7:
			company.findStaffById();
			break;
		case 8:
			company.listStaffHasMob5();
			break;
		case 9: 
			break;
		default:
			cout << "Wrong input, try again !";
			break;
		}
	} while (choice != 8);
}

int main()
{
	Company company;
	Menu(company);
	system("pause");
	return 0;
}
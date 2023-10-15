#include <iostream>
#include <windows.h>

import student_1bib21801_Lab2_Variant11_Task1;
import student_1bib21801_Lab2_Variant11_Task2;
import student_1bib21801_Lab2_Variant11_Task3;
import student_1bib21801_Lab2_Variant11_Task4;
import student_1bib21801_Lab2_Variant11_Task5;

using namespace std;

int main()
{
	int choice;
	bool again = true;
	while(again)
	{
		cout << "Choice task 1-5: ";
		cin >> choice;
		cout << "input x: ";
		double x;
		cin >> x;
		cout << "input the number of iterations n:";
		int n;
		cin >> n;
		cout << "input the accuracy e: ";
		double e = 0;
		cin >> e;

		switch (choice)
		{
			case(1):
			{
				cout << "task 1 variant 11" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant11::Task1::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant11::Task1::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant11::Task1::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant11::Task1::funcF4(e) << endl;
				break;
			}
			case(2):
			{
				cout << "task 2 variant 11" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant11::Task2::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant11::Task2::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant11::Task2::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant11::Task2::funcF4(e) << endl;
				break;
			}
			case(3):
			{
				cout << "task 3 variant 11" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant11::Task3::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant11::Task3::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant11::Task3::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant11::Task3::funcF4(e) << endl;
				break;
			}
			case(4):
			{
				cout << "task 4 variant 11" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant11::Task4::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant11::Task4::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant11::Task4::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant11::Task4::funcF4(e) << endl;
				break;
			}
			case(5):
			{
				cout << "task 5 variant 11" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant11::Task5::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant11::Task5::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant11::Task5::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant11::Task5::funcF4(e) << endl;
				break;
			}
		}
		cout << "END!" << endl;
		cout << "repeat? 1)Y 0)N" << endl;
		cin >> again;
		cout << "CLEAR console? 1)Y 0)N" << endl;
		bool cls;
		cin >> cls;
		cout << "okay" << endl;
		Sleep(1000);
		if(cls)
			system("cls");
	}
	
}

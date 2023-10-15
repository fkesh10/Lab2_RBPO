module student_1bib21801_Lab2_Variant11_Task3;
import <cmath>;
double RBPO::Lab2::Variant11::Task3::funcF3(int n)
{
	double f3 = 0;
	int i = 0;
	do
	{
		f3 += funcA(i);
		i++;
	} while (i < n);
	return f3;
}
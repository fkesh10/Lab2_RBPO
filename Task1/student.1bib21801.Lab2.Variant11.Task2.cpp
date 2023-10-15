module student_1bib21801_Lab2_Variant11_Task2;
import <cmath>;


double RBPO::Lab2::Variant11::Task2::funcF1(double x)
{
	return (1 - pow(sin(x), 2)) / (1 + sin(2 * x));
}
double RBPO::Lab2::Variant11::Task2::funcF2(double x)
{
	if (x >= -3.5)
		return (4 * pow(x, 2) + 2 * x - 19);
	else
		return (-(2 * x) / (-4 * x + 1));
}
static double funcA(int i)
{
	return pow((-1), i) * (pow(2, i + 1)) / (pow(2, 2 * i + 1));
}
double RBPO::Lab2::Variant11::Task2::funcF3(int n)
{
	double f3 = 0;
	int i = 0;
	while (i < n)
	{
		f3 += funcA(i);
		i++;
	}
	return f3;
}
double RBPO::Lab2::Variant11::Task2::funcF4(double e)
{

	double temp0 = 1, temp1 = 0;
	double f4 = 0;
	int i = 0;
	while (abs(temp0 - temp1) > e)
	{
		temp0 = funcA(i);
		temp1 = funcA(i + 1);
		f4 += funcA(i);
		i++;
	}
	return f4;
}
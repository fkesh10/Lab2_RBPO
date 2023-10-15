module student_1bib21801_Lab2_Variant11_Task3;
import <cmath>;
double RBPO::Lab2::Variant11::Task3::funcF2(double x)
{
	if (x >= -3.5)
		return (4 * pow(x, 2) + 2 * x - 19);
	else
		return (-(2 * x) / (-4 * x + 1));
}
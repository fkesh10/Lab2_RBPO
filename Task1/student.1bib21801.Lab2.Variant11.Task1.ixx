export module student_1bib21801_Lab2_Variant11_Task1;

import <cmath>;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant11
		{
			namespace Task1
			{
				export double funcF1(double x)
				{
					return (1 - pow(sin(x), 2)) / (1 + sin(2 * x));
				}
				export double funcF2(double x)
				{
					return (x >= -3.5) ? (4 * pow(x, 2) + 2 * x - 19) : (-(2 * x) / (-4 * x + 1));
				}
				double funcA(int i)
				{
					return pow((-1), i) * (pow(2, i + 1)) / (pow(2, 2 * i + 1));
				}
				export double funcF3(int n)
				{
					double f3 = 0;
					for (int i = 0; i < n; i++)
					{
						f3 += funcA(i);
					}
					return f3;
				}
				export double funcF4(double e)
				{
					double temp0 = 1, temp1 = 0;
					double f4 = 0;
					for(int i = 0; abs(temp0 - temp1) > e; i++)
					{
						temp0 = funcA(i);
						temp1 = funcA(i + 1);
						f4 += funcA(i);
					}
					return f4;
				}
			}
		}
	}
}



#include <iostream>
#include <cmath>
void direct(void);
void indirerct(void);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char ch{};
	cout << "请选择直接测量还是间接测量，输入\"A\"或者\"B\"。输入\"q\"结束程序\nA.直接测量\tB.间接测量";
	cin >> ch;
	while (ch!='q'||ch!='Q')
	{
		switch (ch)
		{
		case 'A':direct(); break;
		case 'B':indirerct(); break;
		default:cout << "请输入\"A\"或者\"B\"。输入\"q\"结束程序"; break;
		}
	}
	return 0;
}

void direct()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int number;
	double fixed_system_error{}, uncertain_system_error{}, average{}, standard_deviation{}, ΔA{}, ΔB{}, ux{};
	char ch{};

	cout << "请输入测量数据个数";
	cin >> number;
	int *pdata = new int[number];
	do
	{
		cout << "请输入测量数据，以空格间隔，回车结束";
		for (int i = 0; i < number; i++)
		{
			cin >> pdata[i];
		}
		cout << "请输入已定系统误差，如无输入0，以回车结束";
		cin >> fixed_system_error;
		cout << "请输入未定系统误差（仪器允差），如无请输入0，以回车结束";
		cin >> uncertain_system_error;
		cout << "你输入的数据如下，键入N以重新输入，键入Y以继续";
		for (int i = 0; i < number; i++)
		{
			cout << pdata[i]<<" ";
		}
		cout << "\n已定系统误差：" << fixed_system_error << "\n未定系统误差：" << uncertain_system_error << endl;
		cin >> ch;
	} while (ch != 'Y');
	for (int i = 0; i < number; i++)
	{
		average += pdata[i];
	}
	average = average / number;
	for (int i = 0; i < number; i++)
	{
		standard_deviation+=((average-pdata[i])*(average - pdata[i]));
	}
	standard_deviation = std::sqrt(standard_deviation / (number - 1));
}
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
	cout << "��ѡ��ֱ�Ӳ������Ǽ�Ӳ���������\"A\"����\"B\"������\"q\"��������\nA.ֱ�Ӳ���\tB.��Ӳ���";
	cin >> ch;
	while (ch!='q'||ch!='Q')
	{
		switch (ch)
		{
		case 'A':direct(); break;
		case 'B':indirerct(); break;
		default:cout << "������\"A\"����\"B\"������\"q\"��������"; break;
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
	double fixed_system_error{}, uncertain_system_error{}, average{}, standard_deviation{}, ��A{}, ��B{}, ux{};
	char ch{};

	cout << "������������ݸ���";
	cin >> number;
	int *pdata = new int[number];
	do
	{
		cout << "������������ݣ��Կո������س�����";
		for (int i = 0; i < number; i++)
		{
			cin >> pdata[i];
		}
		cout << "�������Ѷ�ϵͳ����������0���Իس�����";
		cin >> fixed_system_error;
		cout << "������δ��ϵͳ�������ʲ������������0���Իس�����";
		cin >> uncertain_system_error;
		cout << "��������������£�����N���������룬����Y�Լ���";
		for (int i = 0; i < number; i++)
		{
			cout << pdata[i]<<" ";
		}
		cout << "\n�Ѷ�ϵͳ��" << fixed_system_error << "\nδ��ϵͳ��" << uncertain_system_error << endl;
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
#include <iostream>
#include <vector>

void PrintVector(std::vector <int> vec);

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//���������������� ������ ����� �� 5 �����
	std::vector <int> vec(5);
	PrintVector(vec);
	std::cout << std::endl;

	//��������� ��� ���������� ������� � ������� ������������
	for (int i = 0; i < 5; i++)
	{
		vec[i] = 1 + rand() % 6;
	}
	PrintVector(vec);
	std::cout << std::endl;
	
	//������� � ������� ������ ������� � ������� ���������� ������� � ������� ��������� ������
	std::cout << "������ �������" << vec.size()<<std::endl;
	vec.pop_back();
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;

	//�������� �������������� ����� � ������ ������ � � �����
	vec.insert(vec.begin(), 1 + rand() % 2);
	vec.insert(vec.end(), 1 + rand() % 2);
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;


	return 0;
}
void PrintVector(std::vector <int> vec)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "�������� �������" << vec[i] << " ";
	}
}

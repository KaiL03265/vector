#include <iostream>
#include <vector>

void PrintVector(std::vector <int> vec);

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//Инициализировать вектор чисел на 5 ячеек
	std::vector <int> vec(5);
	PrintVector(vec);
	std::cout << std::endl;

	//Заполнить его рандомными числами с помощью рандомайзера
	for (int i = 0; i < 5; i++)
	{
		vec[i] = 1 + rand() % 6;
	}
	PrintVector(vec);
	std::cout << std::endl;
	
	//Вывести в консоль размер вектора с помощью встроенных методов и удалить последнию ячейку
	std::cout << "Размер вектора" << vec.size()<<std::endl;
	vec.pop_back();
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;

	//вставить дополнительное число в начало вектор и в конце
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
		std::cout << "Значение вектора" << vec[i] << " ";
	}
}

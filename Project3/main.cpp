#include <iostream>
#include <ctime>
#include <random>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 2 Темература в январе
	int n;
	std::cout << "Задача 2. Массив\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 + 1 - 30) + (-30);
		std::cout << arr2 << ' ';
	}
	std::cout << "Введите число -> ";
	std::cin >> n;
	int counter = 0;
	int sum = 0;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "Среднее арифм. = " << double(sum) / size2 << std::endl;
	std::cout << "Кол-во чисел, следующих условию = " << counter << "\n\n";*/


	// Задача 3 Вхождение в диапазон
	int n, m;
	std::cout << "Введите начало диапазона -> ";
	std::cin >> n;
	std::cout << "Введите конец диапазона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100;
		std::cout << i << ". " << arr3[i] <<
			(arr3[i] >= n && arr3[i] <= m ? '!' : ' ') <<
			std::endl;
	}

	return 0;
}
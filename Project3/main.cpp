#include <iostream>
#include <ctime>
#include <random>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	//������ 2 ���������� � ������
	int n;
	std::cout << "������ 2. ������\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 + 1 - 30) + (-30);
		std::cout << arr2 << ' ';
	}
	std::cout << "������� ����� -> ";
	std::cin >> n;
	int counter = 0;
	int sum = 0;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "������� �����. = " << double(sum) / size2 << std::endl;
	std::cout << "���-�� �����, ��������� ������� = " << counter << "\n\n";*/


	// ������ 3 ��������� � ��������
	int n, m;
	std::cout << "������� ������ ��������� -> ";
	std::cin >> n;
	std::cout << "������� ����� ��������� -> ";
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
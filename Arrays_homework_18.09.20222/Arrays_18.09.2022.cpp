#include<iostream>
int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Задача 1_массив, состоящий из 10-ти чисел.\n";

	const int L = 10;
	int ar[L]{};
	std::cout << "intput arrays\n";
	for (int i = 0; i < L; i++)
		std::cin >> ar[i];
		int sum;
	int counter;
	counter = 0;
	sum = 0;
	for (int i = 0; i < L; i++) {
		if (ar[i] % 2 == 0) {
			counter++;
			sum += ar[i];
		}
				}
	std::cout << "количество четных чисел = " << counter<<"\n";
	std::cout << "сумма четных числе = " << sum << "\n";
	std::cout << "средне арифметическиое четных числе = "<<sum/counter<<"\n";


	//Задача 2_массив из 10 чисел. 
	//программа находит максимум и считает количество повторений

	std::cout << "Задача 2_массив из 10 чисел/экстремумы и количество повторений"<<"\n";
	const int N = 10;
	int arr[N]{};
	int count;
	int max = arr[0];
	int min = arr[0];
	std::cout << "введите элементы массива" << "\n";
	for (int i = 1; i < N; i++) {
		std::cin >> arr[i];
		
		{
			if (min > arr[i])
				min = arr[i];
			if (max < arr[i])
				max = arr[i]; }
		count = 0;
		for (int j = 1; j <N; j++)
			 if (arr[i] == arr[j])
				count++;
			 
	
	}
	std::cout << "максимальное значение =" << max << "\n";
	std::cout << "число максимумов =" << count << "\n";
		
			
		
	
	
		
		
		return 0;


}



#include<iostream>
int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "������ 1_������, ��������� �� 10-�� �����.\n";

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
	std::cout << "���������� ������ ����� = " << counter<<"\n";
	std::cout << "����� ������ ����� = " << sum << "\n";
	std::cout << "������ ��������������� ������ ����� = "<<sum/counter<<"\n";


	//������ 2_������ �� 10 �����. 
	//��������� ������� �������� � ������� ���������� ����������

	std::cout << "������ 2_������ �� 10 �����/���������� � ���������� ����������"<<"\n";
	const int N = 10;
	int arr[N]{};
	int count;
	int max = arr[0];
	int min = arr[0];
	std::cout << "������� �������� �������" << "\n";
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
	std::cout << "������������ �������� =" << max << "\n";
	std::cout << "����� ���������� =" << count << "\n";
		
			
		
	
	
		
		
		return 0;


}



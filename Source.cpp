#include<vector>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<deque>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<algorithm>
#include<conio.h>
using namespace std;
class Vector
{
private:
	int _size;
	int _count = 0;
	clock_t _start;
	clock_t _end;
	double _result = 0.0;
	vector<int> vec;
	list<int> lst;
	deque<int> deq;
	multimap<int, long int> multmap;
	set<int> set;
	unordered_map<int, int> unorderedmap;
public:
	Vector(int sz) :_size(sz) {}
	void push_vector(int number)
	{

		if (number == 1)
		{
			_count = 0;

			ofstream out("test1.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				for (register int i = 0; i < _size; ++i)
				{
					vec.push_back(i);
				}
				_start = clock();
				for (register int i = 0; i < _size; ++i)
				{
					if (vec[i] = 9)
						break;
				}
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				vec.clear();
			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер vector =" << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение" << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 2)
		{
			_count = 0;

			ofstream out("test2.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				for (register int i = 0; i < _size; ++i)
				{
					vec.push_back(i);
				}



				vector<int>::iterator p = vec.begin();
				p++;
				_start = clock();
				vec.erase(p, p + 1);
				_end = clock();



				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				vec.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер vector = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение" << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 3)
		{
			_count = 0;

			ofstream out("test3.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				for (register int i = 0; i < _size; ++i)
				{
					vec.push_back(i);
				}
				_start = clock();
				find(vec.begin(), vec.end(), 1);
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				vec.clear();
			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер vector = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}


	}
	void push_list(int number)
	{
		if (number == 1)
		{
			_count = 0;

			ofstream out("test4.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				_start = clock();
				for (register int i = 0; i < _size; ++i)
				{
					lst.push_back(i);
				}
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				lst.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер list = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 2)
		{
			_count = 0;
			ofstream out("test5.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{


				for (register int i = 0; i < _size; ++i)
				{
					lst.push_back(i);
				}
				list<int>::iterator p = lst.begin();
				p++;
				_start = clock();
				lst.erase(p);
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				lst.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер list = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 3)
		{
			_count = 0;

			ofstream out("test6.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{


				for (register int i = 0; i < _size; ++i)
				{
					lst.push_back(i);
				}

				_start = clock();
				find(vec.begin(), vec.end(), 9);
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				lst.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер list = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
	}
	void push_deque(int number)
	{
		if (number == 1)
		{
			_count = 0;

			ofstream out("test7.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				_start = clock();
				for (register int i = 0; i < _size; ++i)
				{
					deq.push_back(i);
				}
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				deq.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер deque = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 2)
		{
			_count = 0;
			ofstream out("test8.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{
				for (register int i = 0; i < _size; ++i)
				{
					deq.push_back(i);
				}

				deque<int>::iterator p = deq.begin();
				p++;
				_start = clock();
				deq.erase(p);
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				deq.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер deque = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 3)
		{
			_count = 0;

			ofstream out("test9.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{


				for (register int i = 0; i < _size; ++i)
				{
					deq.push_back(i);
				}

				_start = clock();
				find(deq.begin(), deq.end(), 9);
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				lst.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер deque = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
	}
	void push_set(int number)
	{
		if (number == 1)
		{
			_count = 0;
			ofstream out("test10.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				_start = clock();
				for (register int i = 0; i < _size; ++i)
				{
					set.insert(i);
				}
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				set.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер set = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 2)
		{
			_count = 0;

			ofstream out("test11.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{
				for (register int i = 0; i < _size; ++i)
				{
					set.insert(i);
				}
				_start = clock();
				set.erase(9);
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				lst.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер set = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 3)
		{
			_count = 0;

			ofstream out("test12.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{


				for (register int i = 0; i < _size; ++i)
				{
					set.insert(i);
				}

				_start = clock();
				set.find(9);
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				lst.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер set = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
	}

	void push_multimap(int number)
	{
		if (number == 1)
		{
			_count = 0;
			ofstream out("test13.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				_start = clock();
				for (register int i = 0; i < _size; ++i)
				{
					multmap.insert(pair<int, long int>(i, i*i));
				}
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				multmap.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер multimap = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 2)
		{
			_count = 0;

			ofstream out("test14.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{
				for (register int i = 0; i < _size; ++i)
				{
					multmap.insert(pair<int, long int>(i, i*i));
				}

				_start = clock();
				multmap.erase(5);
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				multmap.clear();
			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер multimap = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 3)
		{
			_count = 0;

			ofstream out("test15.txt", ios::out | ios::ate | ios::binary);
			while (_count < 500)
			{

				for (register int i = 0; i < _size; ++i)
				{
					multmap.insert(pair<int, long int>(i, i*i));
				}

				_start = clock();
				multmap.find(9);
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				multmap.clear();

			}
			if (_count == 500)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер multimap = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
	}
	void push_unordered_map(int number)
	{
		if (number == 1)
		{
			_count = 0;
			ofstream out("test16.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{

				_start = clock();
				for (register int i = 0; i < _size; ++i)
				{
					unorderedmap.insert(pair<int, int>(i, i + 5));
				}
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				unorderedmap.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер unordered_map = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 2)
		{
			_count = 0;

			ofstream out("test17.txt", ios::out | ios::app | ios::binary);
			while (_count < 100)
			{
				for (register int i = 0; i < _size; ++i)
				{
					unorderedmap.insert(pair<int, long int>(i, i + 5));
				}

				_start = clock();
				unorderedmap.erase(5);
				_end = clock();

				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				unorderedmap.clear();
			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер unordered_map = " << _result / _count << endl;
				out << "Размер = " << _size << " " << "Среднее значение " << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
		if (number == 3)
		{
			_count = 0;

			ofstream out("test18.txt", ios::out | ios::ate | ios::binary);
			while (_count < 100)
			{

				for (register int i = 0; i < _size; ++i)
				{
					unorderedmap.insert(pair<int, long int>(i, i + 5));
				}

				_start = clock();
				unorderedmap.find(9);
				_end = clock();


				_result += (static_cast<double>(_end - _start)) / CLOCKS_PER_SEC;

				_count++;
				multmap.clear();

			}
			if (_count == 100)
			{
				cout << "Среднее значение времени при итерациях с размерностью " << _size << ", контейнер unordered_map =" << _result / _count << endl;
				out << "Размер=" << _size << " " << "Среднее значение" << _result / _count << endl;
				system("pause");
			}
			out.close();
		}
	}
};
int main()
{
		setlocale(0, "rus");
		auto size_of_massive = 0;
		auto number = 0, size = 10;
		while (1)
		{
			cout << "Введите 1, если хотите узнать сложность vector для содержимого в контейнере " << endl;
			cout << "Введите 2, если хотите узнать сложность list для содержимого в контейнере " << endl;
			cout << "Введите 3, если хотите узнать сложность deque для содержимого в контейнере " << endl;
			cout << "Введите 4, если хотите узнать сложность set для содержимого в контейнере " << endl;
			cout << "Введите 5, если хотите узнать сложность multimap для содержимого в контейнере " << endl;
			cout << "Введите 6, если хотите узнать сложность unordered_map для содержимого в контейнере " << endl;
			cout << "Введите 0, если хотите выйти" << endl;
			cin >> number;
			switch (number)
			{
			case 1:
			{
				cout << "(Для vector) Введите 1 для добавления элемента в контейнер, 2 - для удаления элемента в контейнере, 3 - для поиска элемента" << endl;
				cin >> number;
				Vector vec(10);
				vec.push_vector(number);
				Vector vec1(100);
				vec1.push_vector(number);
				Vector vec2(1000);
				vec2.push_vector(number);
				Vector vec3(10000);
				vec3.push_vector(number);
				Vector vec4(50000);
				vec4.push_vector(number);
				Vector vec5(100000);
				vec5.push_vector(number);
				Vector vec6(500000);
				vec6.push_vector(number);
				_getch();
				break;
			}
			case 2:
			{

				cout << "(Для list) Введите 1 для добавления элемента в контейнер, 2 - для удаления элемента в контейнере, 3 - для поиска элемента" << endl;
				cin >> number;
				Vector vec(10);
				vec.push_list(number);
				Vector vec1(100);
				vec1.push_list(number);
				Vector vec2(1000);
				vec2.push_list(number);
				Vector vec3(10000);
				vec3.push_list(number);
				Vector vec4(50000);
				vec4.push_list(number);
				Vector vec5(100000);
				vec5.push_list(number);
				Vector vec6(500000);
				vec6.push_list(number);
				_getch();
				break;
			}
			case 3:
			{

				cout << "(Для deque) Введите 1 для добавления элемента в контейнер, 2 - для удаления элемента в контейнере, 3 - для поиска элемента" << endl;
				cin >> number;
				Vector vec(10);
				vec.push_deque(number);
				Vector vec1(100);
				vec1.push_deque(number);
				Vector vec2(1000);
				vec2.push_deque(number);
				Vector vec3(10000);
				vec3.push_deque(number);
				Vector vec4(50000);
				vec4.push_deque(number);
				Vector vec5(100000);
				vec5.push_deque(number);
				Vector vec6(500000);
				vec6.push_deque(number);
				_getch();
				break;
			}
			case 4:
			{

				cout << "(Для set) Введите 1 для добавления элемента в контейнер, 2 - для удаления элемента в контейнере, 3 - для поиска элемента" << endl;
				cin >> number;
				Vector vec(10);
				vec.push_set(number);
				Vector vec1(100);
				vec1.push_set(number);
				Vector vec2(1000);
				vec2.push_set(number);
				Vector vec3(10000);
				vec3.push_set(number);
				Vector vec4(50000);
				vec4.push_set(number);
				Vector vec5(100000);
				vec5.push_set(number);
				Vector vec6(500000);
				vec6.push_set(number);
				_getch();
				break;
			}
			case 5:
			{

				cout << "(Для multimap) Введите 1 для добавления элемента в контейнер, 2 - для удаления элемента в контейнере, 3 - для поиска элемента" << endl;
				cin >> number;
				Vector vec(10);
				vec.push_multimap(number);
				Vector vec1(100);
				vec1.push_multimap(number);
				Vector vec2(1000);
				vec2.push_multimap(number);
				Vector vec3(10000);
				vec3.push_multimap(number);
				Vector vec4(50000);
				vec4.push_multimap(number);
				Vector vec5(100000);
				vec5.push_multimap(number);
				Vector vec6(500000);
				vec6.push_multimap(number);
				_getch();
				break;
			}
			case 6:
			{

				cout << "(Для unordered_map) Введите 1 для добавления элемента в контейнер, 2 - для удаления элемента в контейнере, 3 - для поиска элемента" << endl;
				cin >> number;
				Vector vec(10);
				vec.push_unordered_map(number);
				Vector vec1(100);
				vec1.push_unordered_map(number);
				Vector vec2(1000);
				vec2.push_unordered_map(number);
				Vector vec3(10000);
				vec3.push_unordered_map(number);
				Vector vec4(50000);
				vec4.push_unordered_map(number);
				Vector vec5(100000);
				vec5.push_unordered_map(number);
				Vector vec6(500000);
				vec6.push_unordered_map(number);
				_getch();
				break;
			}
			case 0:
			{
				return 0;
				break;
			}
			}
		}

	}


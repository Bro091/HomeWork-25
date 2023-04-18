#include<iostream>
#include<string> 

int sum_mpunct(std::string str);

std::string find_sym(std::string str, char sym);

bool chek_palindrom(std::string str);

int main() {
	setlocale(LC_ALL, "Ru");

	//Задача 1
	std::string str = "I belive i can fly!";
	std::cout << "Задача 1.\nИзначальная строка - " << str << std::endl;
	char sym = 'i';
	std::string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	std::cout << "Новая строка - " << res << std::endl << std::endl;

	//Задача2.
	std::string;
	std::cout << "Введите слово -> ";
	std::string str2;
	std::getline(std::cin, str2);
	if (chek_palindrom(str2)) 
		std::cout << "Это палиндром!!!" << std::endl;

	else
		std::cout << "Это НЕ палиндром!!!" << std::endl;



	//Задача 3
	std::cout << "Задача 3. \nВведите строку -> ";
	std::string str3;
	std::getline(std::cin, str3);
	std::cout << sum_mpunct(str3) << "\n\n";


// Задача 4. 
	std::string str4 = "I belive I can fly!";
	std::cout << "Задача 4.\nИзначальная строка - " << str4 << std::endl;
	char sym4 = 'i';
	std::cout << find_sym(str4, sym4);

	return 0;
}

int sum_mpunct(std::string str) {
	
		int counter = 0;
		const int char_number = 6;
		char charaters[char_number] = " .,!?";
		for (int i = 0; i < str.length(); i++)
			for (int j = 0; j < char_number; j++)
				if (str[i] == charaters[j])
					counter++;
		return counter;
	}

std::string find_sym(std::string str, char sym) {
	for (int i = 0; i < str.length(); i++)
		str[i] = std::tolower(str[i]);
	return str.substr(str.rfind(sym));
}

bool chek_palindrom(std::string str) {
	int size = str.length();
	for (int i = 0; i < size / 2; i++) {
		if (str[i] != str[size - i - 1]) {
			return false;
	}
	}
	return true;
}
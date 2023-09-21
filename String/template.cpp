#include<iostream>
#include<string>	//библиотека позволяющая работать со строками С++




int main() {
	setlocale(LC_ALL, "RU");
	int n,m;

	//строки языка "C"
	/*
	char cstr[]{ 'H','i','!','\0'};
	std::cout << cstr << std::endl;
	//2 вариант
	char cstr2[] =  "Hello Nick!";
	std::cout << cstr2 << std::endl;
	*/

	//строки языка С++
	/*
	std::string mystr;//создание пустой строки("")
	std::cout << mystr<<std::endl;
	mystr = "Hello Nick";
	std::cout << mystr << std::endl;
	mystr += ". \nWow!";
	std::cout << mystr  << std::endl;
	//вывод отдельных символов
	std::cout << mystr[0] << mystr[7] << std::endl;

	*/

	//Ввод данных в строку
	/*
	std::cout << "как тебя зовут ? \n";
	std::cout << "Вывод-> ";
	std::string name;
	//std::cin >> name; // плохой вариант так как считывается одно слово!
	std::getline(std::cin,name);
	std::cout << "Привет. " << name << "!\n";
	std::cout << "а сколько тебе лет? \n";
	std::cout << "Ввод-> ";
	int age;
	std::cin >> age;
	std::cout << age << "? Круто....\n";

	std::cin.ignore();  //<<<<<<<<ставится между cin и getline;
	
	std::cout << "Кем ты работаешь?\n";
	std::cout << "Ввод-> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Я всегда мечтал быть " << job<<"...\n\n";
	*/


	//методы строк!
	/*
	std::string str = "Hello world!";
	
	//length и size <<  возвращающие длину строки
	std::cout << str.length() << std::endl;//12
	std::cout << str.size() << std::endl;//12


	//insert <<  вставляющий в подстроку в строку
	str.insert(3,"www");
	std::cout << str << std::endl;

	//replace << заменяющий часть строки на новую подстроку!
	str.replace(3, 5, "###");//Hel###rld!
	std::cout << str << std::endl;

	//find << возвращающий позицию первого вхождения подстроки в строку!
	std::cout << str.find('l') << std::endl;
	std::cout << str.find('l', 5) << std::endl;//поиск с пятой позиции 

	//rfind  возвращающий позицию последнего вхождения подстроки в строку
	std::cout << str.rfind('ld') << std::endl;//10
	std::cout << str.rfind('o',5) << std::endl;

	//substr
	std::cout << str.substr(3) << std::endl; // lo world!
	std::cout << str.substr(3,5) << std::endl; // длинны подстрки которую хотим видеть   // lo wo
	*/


	//преобразование числа в строку!
	/*
	std::cout << "ВВедите число -> ";
	std::cin >>n;
	std::cin.ignore()
	std::string numstr = std::to_string(n);// 123=>"123"
	bool flag = true;
	for(int i=0;i<numstr.length()/2;i++)
		if (numstr[i] != numstr[numstr.length() - i-1]) {
			flag = false;
			break;
		}

	if (flag)
		std::cout << "Палиндром\n\n";
	else
		std::cout << "Не палидром\n\n";
	*/

	//преобразование строки в число 
	/*
	std::cout << "Введите число ->";
	std::string strnum;
	std::getline(std::cin, strnum);

	int num=std::stoi(strnum);
	std::cout << num << std::endl;
	*/

	// изменение регистра
	std::string newstr = "HellO!!";
	for (int i = 0; i < newstr.size(); i++)
		//newstr[i] = std::tolower(newstr[i]); // возведение в нижний регистр
	newstr[i] = std::toupper (newstr[i]);   // возведение в верхний регистр
	std::cout << newstr << std::endl;

	







	return 0;
}
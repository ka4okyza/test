//#include<iostream>						
//#include<fstream>
//#include<string>
//using namespace std;
//int main() {					//1. посчитать количество строк в файле и количество слов и символов в каждой строке
//	setlocale(LC_ALL, "rus");
//	string name0;
//	short stroka = 0, slovo = 0, symbols = 0, i = 0;
//	cout << "введите имя(путь) файла,с которым собираетесь работать:"<<endl;
//	cin >> name0;
//	ifstream file(name0);
//	while (file) {
//		string str;
//		getline(file, str);
//		for (int i = 0; i < str.size(); i++) {
//			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
//				slovo++;
//		}
//		for (int k = 0; str[k] != '\0';k++) {
//			if (((65 <= int(str[k]) <= 90) || (97 <= int(str[k]) <= 120) || (48 <= int(str[k]) <= 57)) && (str[k] != ' ')) {
//				symbols++;
//			}
//		}
//		cout << str << endl;
//		stroka++;
//	}
//	cout << "число строк:" << stroka - 1 << endl << "число слов:" << slovo << endl << "число символов:" << symbols;
//	file.close();
//}
//




//#include<iostream>						
//#include<fstream>
//#include<string>
//using namespace std;
//
//int poisk(string name0, string znac) {
//	unsigned short stroka = 0;
//	ifstream file(name0);
//	cout << endl << endl << "Отображение пройденных строк:" << endl;
//	while (file) {
//		string str;
//		getline(file, str);
//		cout << str << endl;
//		stroka++;
//		if (strstr(str.c_str(), znac.c_str())) {
//			return stroka;
//		}
//	}
//	file.close();
//}
//int main() {						//2. Найти в файле строки, содержащие определенные значения.
//	setlocale(LC_ALL, "rus");
//	string name0, znac;
//	cout << "Введите имя(путь) файла,с которым собираетесь работать:" << endl;
//	cin >> name0;
//	cout << "Введите определенные значения,которые вы хотите найти в файле:" << endl;
//	cin >> znac;
//	cout << endl <<endl << "Найдено в строке:" << poisk(name0, znac);
//}


//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std; 
//
//int main() {						// 3.Считать с клавиатуры строку и целое число n.Записать в файл следующую структуру

//	setlocale(LC_ALL, "Rus");
//	string str; int n;
//	cout << "Введите строку для записи: ";
//	getline(cin, str);
//	cout << "Введите n:";
//	cin >> n;
//	ofstream file("osobo.txt");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (j < i + 1) {
//				file << str << " ";
//			}
//			else {
//				file << endl;
//				break;
//			}
//		}
//	}
//	file.close();
//}






//#include<iostream>
//#include<fstream>					
//#include<string>
//using namespace std;
//
//void copy(string name0,string name1) {
//	ofstream new_copy(name1);
//	ifstream in(name0);
//	while (in) {
//		string str;
//		getline(in, str);
//		cout << str << "\n";
//		new_copy << str << "\n";
//	}
//	in.close();
//	new_copy.close();
//}
//
//int main() {													//4.скопировать содержимое одного файла в другой
//	setlocale(LC_ALL, "rus");
//	string name0, name1;
//	cout << "Введите имя(путь) файла,который необходимо скопировать:";
//	cin >> name0;
//	cout << "Введите имя(путь) файла,в который вы производите копирование:";
//	cin >> name1;
//	copy(name0, name1);
//}



//#include<iostream>						
//#include<fstream>
//#include<string>
//using namespace std;
//int main() {								// 5.В текстовый файл построчно записаны фамилия и имя учащихся группы и его оценка за контрольную.Вывести на экран всех учащихся, чья оценка меньше 3 баллов и посчитать средний балл по классу.
//	setlocale(LC_ALL, "rus");
//	string name0,fam[30],im[30];
//	short mark=0,del,marks[30],i = 0;
//	double summa = 0,sr_znac = 0;
//	cout << "Введите имя(путь) файла,с которым собираетесь работать:" << endl;
//	cin >> name0;
//	ifstream file(name0);
//	while (file) {					 
//		string imia, familia;
//		file >> familia >> imia >> mark;
//		fam[i] = familia;
//		im[i] = imia;
//		marks[i] = mark;
//		i++;
//		//cout << mark;				//<-как бороться с лишним шагом цикла,т.к. выводится лишняя оценка.Из-за этого у меня в массиве marks[] добавляется лишняя оценка, и мне приходится работать с i-1;
//	}
//	cout << "Список тех,кто провалил контрольную работу:"<<endl;
//	for (int j = 0; j < i-1; j++) {
//		if (marks[j] < 3) {
//			cout <<fam[j] << " "<< im[j] << endl << marks[j]<< endl<<endl;
//		}
//	}
//	for (int j = 0; j < i-1; j++) {
//		summa += marks[j];
//	}
//	del = i - 1;
//	sr_znac = summa / del;
//	cout<<"Средний балл по классу:"<< sr_znac;
//	file.close();
//}
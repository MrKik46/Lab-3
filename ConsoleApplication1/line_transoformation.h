#include <iostream>
#include "Mylist.cpp"

DoubleList<char> line_transformation(DoubleList<char> line) {
	char letter;
	int line_length = line.size();

	if ((line.size() - 1) % 2 == 0) {
		for (int i = 0; i < line.size() / 2; i++) {
			letter = line[i];
			line[i] = line[line.size() - i - 2];
			line[line.size() - i - 2] = letter;
		}
	}

	for (int i = 0; i < line.size() - 1; i++) {
		if (line[i] == '+' or line[i] == '-') {
			if (line[i] == '+') {
				line.insert(i + 1, '+');
				i++;
			}
			else {
				line.insert(i + 1, '-');
				i++;
			}
		}
	}

	line.remove('1');
	line.remove('2');
	line.remove('3');
	line.remove('4');
	line.remove('5');
	line.remove('6');
	line.remove('7');
	line.remove('8');
	line.remove('9');
	line.remove('0');

	line[line.size() - 1] = '\0';

	return line;
}

OneList<char> line_transformation(OneList<char> line) {
	char letter;
	int line_length = line.size();

	if ((line.size() - 1) % 2 == 0) {
		for (int i = 0; i < line.size() / 2; i++) {
			letter = line[i];
			line[i] = line[line.size() - i - 2];
			line[line.size() - i - 2] = letter;
		}
	}

	for (int i = 0; i < line.size() - 1; i++) {
		if (line[i] == '+' or line[i] == '-') {
			if (line[i] == '+') {
				line.insert(i + 1, '+');
				i++;
			}
			else {
				line.insert(i + 1, '-');
				i++;
			}
		}
	}

	line.remove('1');
	line.remove('2');
	line.remove('3');
	line.remove('4');
	line.remove('5');
	line.remove('6');
	line.remove('7');
	line.remove('8');
	line.remove('9');
	line.remove('0');

	line[line.size() - 1] = '\0';

	return line;
}
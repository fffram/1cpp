#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float length, width, widthW, room, roll = 0, answer = 0, squareRoom, height, heightW;
	cout << "Введите длинну комнаты:";
	cin >> length;
	cout << "Введите ширину комнаты:";
	cin >> width;
	cout << "Введите высоту комнаты:";
	cin >> height;
	cout << "Введите длинну рулона:";
	cin >> heightW;
	cout << "Введите ширину рулона:";
	cin >> widthW;
	squareRoom = ceil((((length + width) * 2) / widthW));
	room = floor(heightW / height);
	while (squareRoom > 0)
	{
		squareRoom = squareRoom - room;
		roll = roll + 1;
	}
	answer = (((heightW * widthW * roll) - (height * (length + width) * 2))) / (heightW * widthW * roll / 100);
	cout << roll<<endl;
	cout << answer; 
}

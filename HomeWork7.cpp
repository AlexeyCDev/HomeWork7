#include "iostream"
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");

int mainNumber;
cout <<"������� �������������� �����";
cin>>mainNumber;
cout << "���� ����� �����: " << mainNumber << endl;
cout << "����� ���������: ";
// ������� �� ������� ��������������� ����� 5678 �� 10
 cout << mainNumber % 10; // 5678 % 10 = 8
// ����� ����� mainNumber �� 10 � ���������� � ����������
// ��� ��� ��� ���������� int, ������� ����� ����������
// � mainNumber ����� ����� 567 (� �� 567,8)
 mainNumber /= 10;
// ���������� ������� �� ������� 567 �� 10 �� �����
 cout << mainNumber % 10;
mainNumber /= 10;
 cout << mainNumber % 10;
mainNumber /= 10;
 cout << mainNumber % 10;
mainNumber /= 10;

cout << endl << endl;

return 0;
}

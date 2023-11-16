#include <iostream>
#include <string>
int main() 
{
setlocale(LC_ALL, "Russian");
int ans;
char q[10];
int count = 1;
std::cout << "Пройти тесты или ввести данные с клавиатуры? (0/1)";
std::cin >> ans;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input stream.
while (count <= 5) 
{
if (ans == 0) 
{
switch (count) 
{
case 1:
q[0] = '1';
q[1] = '2';
q[2] = '3';
q[3] = '4';
q[4] = '\0';
break;
case 2:
q[0] = '1';
q[1] = '2';
q[2] = '2';
q[3] = '4';
q[4] = '\0';
break;
case 3:
q[0] = '5';
q[1] = '4';
q[2] = '8';
q[3] = '7';
q[4] = '\0';
break;
case 4:
q[0] = 'q';
q[1] = 'w';
q[2] = 'e';
q[3] = 'r';
q[4] = '\0';
break;
case 5:
q[0] = '1';
q[1] = '2';
q[2] = '3';
q[3] = '4';
q[4] = '5';
q[5] = '\0';
break;
}
std::cout << "Тест номер "<< ans<< ":";
int l = 0;
while (q[l] != '\0') 
{
std::cout << q[l];
l++;
}
count++;
}
else
{
std::cout << "Введите число (4-х значное): ";
std::cin.getline(q, 10);
}
int flag = 0;
for (int i = 0; i < 4; i++)
{
if (!std::isdigit(q[i]))
{
flag = 1;
std::cout << "\nОшибка!\n";
break;
}
}
if (std::strlen(q) != 4) 
{
flag = 1;
std::cout << "\nОшибка!\n";
}
if (flag == 0)
{
q[0] -= '0';
q[1] -= '0';
q[2] -= '0';
q[3] -= '0';
__asm
{
mov al, q[0]
mov bl, q[3]
mul bl
div q[1]
cmp al, q[2]
je Q
mov bl, q[3]
mov q[0], bl
mov q[1], bl
jmp EXIT
Q : mov q[2], ah
EXIT : nop
}
q[0] += '0';
q[1] += '0';
q[2] += '0';
q[3] += '0';
std::cout << "\nРезультат: ";
for (int i = 0; i < 4; i++)
{
std::cout << q[i];
}
}
if (ans != 0) 
{
std::cout << "\nПродолжить?(1/0)";
int count;
std::cin >> count;
if (count == 0) { return 0; }
}
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the input stream.
}
}

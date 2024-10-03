// Lesson_9_03.10.2024.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    system("chcp 1251");
    
    
    //const int n = 5;
    //int numbers[n]{ 1,2,3,4,5 }; //создание массива
    //int b = numbers[2];         //обращение к ячейке 1
    //cout << b << endl;          //вывод значения

    //int mass[n];

    //for (int i = 0; i < n; i++) {
    //    cout << numbers[i] << " ";  //вывод массива
    //}
    //cout << endl;
    //for (int i = 0; i < n; i++) {
    //    mass[i] = i + 10;
    //    cout << numbers[i] << " ";  //вывод массива c прибавлением + 1
    //}
    //for (int i = 0; i < n; i++) {
    //    mass[i] = i + 10;
    //    cout << mass[i] << " ";  
    //}

    //cout << endl;
    //mass[0] << endl;
    //for (int i = 0; i < n; i++) {
    //    cout << mass[i] << " ";  
    //}

    //int arr[]{ 1,2,3,4,5,6,7}
    
    /*int nums[4]{1, 2, 3, 4}];
    int first = nums[0];
    nums[1] = 6;
    const int mass2[6]{ 18,5,7,7,0,6 };*/



    //int numbers[]{ 18,145,871,158 };
    //cout << "Lenght: " << sizeof(numbers) / sizeof(numbers[0]) << endl; //проверка размера массива чз метод sizeof c делением на 1 ячейку массива

    //int count = size(numbers);    //подсчет массива
    //cout << "Lenght: "<< count<< endl;
    //
    //for (int n : numbers) {      //поэлементный вывод массива
    //    cout << n << " ";
    //}



    //const int max{6};
    //int mass3[max];
    //int mass4[max];
    //int i{};

    //cout << "Enter the numbers: \n";
    //    while (i < max) {
    //        cin >> mass3[i];
    //        i++;
    //}
    //for (int b : mass3) {
    //    cout << b << " ";
    //}
    //cout << " \n";
    //cout << "Enter six numbers: \n";

    //for (int j{ 0 }; j < max; j++) {
    //    cin >> mass4[j];
    //}
    //cout << " \n";
    //for (int b : mass4) {
    //    cout << b << " ";
    //}


    //ПРАКТИКА
    //1. Сумма элементов массива:
    //Напишите программу, которая принимает массив чисел и выводит сумму всех его элементов.
    /*const int n = 6;
    int numbers[n]{};
    int i{};
    int summ=0;
    cout << "Enter the numbers massive: \n";
       while (i < n) {
           cin >> numbers[i];
           i++;
        }
       for (int j = 0; j < n; j++) {
           summ += numbers[j];
       }
    cout << "Значения массива: " << summ << " " << endl;*/


    // МАССИВ CHAR
    //char hello[]{ 'h','e','l','l','o'};  // НЕПРАВИЛЬНО!!!!
    //char hello1[]{ 'h','e','l','l','o','\0'};
    //char hello2[]{ "hello"};

    //cout << hello << " \n" << hello1<<" \n" << hello2<< " \n";
    //hello2[0] = 'w';             //замена символа
    //cout << hello2 << " \n";
    //return 0;

const int size = 5;
int ar[size]{ 23,44,-45,54,-4 };
int sum = 0;
int max = ar[0];
int min = ar[0];
for (int i = 0; i < size; i++) {
    if (ar[i] < 0) {
        sum += ar[i];
    }
    cout << "summ megative mumbers: " << sum;   //подсчет мин и макс элементов массива
    for (int i = 0; i < size; i++) {
        if (min > ar[i] < 0) {
            min = ar[i];
        }
        if (min < ar[i]) {
            max = ar[i];
        }
        cout << "min and max element mass:  " << min << "\n" << max << endl;
        return 0;


        //Урок 6. ДЗ 2 
        // 2. В массиве хранится информация о количестве жильцов каждой квартиры пятиэтажного дома(4 подъезда, на
        // каждом этаже по 2 квартиры).
        // а) по выбранному номеру квартиры определить количество жильцов, а также их соседей проживающих
        //     на одном этаже;
        // б) определить суммарное количество жильцов для каждого подъезда;
        // в) определить номера квартир, где живут многодетные семьи.Условно будем считать таковыми, у которых
        // количество членов семьи превышает пять человек.
        const int n = 40;
        int numbers[n]{ 1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
        int numApart;
        int summ = 0;
        cout << "Enter the numbers apartments: \n";
        cin >> numApart;
        cout << "Numbers citizen in apartments: \n"<< numbers[numApart] <<endl;
        for (int i = 0; i < n; i++) {
            if (numApart%2==0) {                                   //проверка квартиры на четность, тк на этаже 2 кв.
                summ = numbers[numApart] + numbers[numApart + 1];  //сложение количества жителей проживающих на 1 этаже
            }
            else {
                summ = numbers[numApart] + numbers[numApart - 1];  //Если квартира не делится на 2 значит идет сложение жителей с предыдущей кв.
            }





               
        }



        
}








    




    


    









}


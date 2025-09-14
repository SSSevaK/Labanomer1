#include <iostream>

int main()
{

    setlocale(LC_CTYPE, "rus");
    using std::cout;
    using std::cin;
    int i_size = 0;
    int i_1 = 0;
    int i_2 = 0;
    int i_3 = 0;
    int i_4 = 0;
    int i_prov = 0;
    cout << "enter three-digit nomber ";
    cin >> i_size;
    while (i_size < 100 || i_size > 999)
    {
        cout << "enter nomber > 99 but < 1000";
        cin >> i_size;
    }
    i_1 = i_size / 100;
    i_2 = i_size % 10;
    i_3 = (i_size % 100 - i_size % 10) / 10;
    i_4 = i_size % 100;
    switch (i_1)
    {
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двесте ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "пятьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот ";
        break;
    case 9:
        cout << "девятьсот ";
        break;
    }


    switch (i_4)
    {
    case 11:
        cout << "одиннадцать ";
        i_prov = 1;
        break;
    case 12:
        cout << "двенадцать ";
        i_prov = 1;
        break;
    case 13:
        cout << "тринадцать ";
        i_prov = 1;
        break;
    case 14:
        cout << "четырнадцать ";
        i_prov = 1;
        break;
    case 15:
        cout << "пятнадцать ";
        i_prov = 1;
        break;
    case 16:
        cout << "шестнадцать ";
        i_prov = 1;
        break;
    case 17:
        cout << "семнадцать ";
        i_prov = 1;
        break;
    case 18:
        cout << "восемнадцать ";
        i_prov = 1;
        break;
    case 19:
        cout << "девятнадцать ";
        i_prov = 1;
        break;
    }



    if (i_prov != 1)
    {
        switch (i_3)
        {
        case 1:
            cout << "десять ";
            break;
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семдесят ";
            break;
        case 8:
            cout << "восемдесят ";
            break;
        case 9:
            cout << "девяносто ";
            break;
        }

        switch (i_2)
        {
        case 1:
            cout << "один ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три";
            break;
        case 4:
            cout << "четыре";
            break;
        case 5:
            cout << "пять";
            break;
        case 6:
            cout << "шесть";
            break;
        case 7:
            cout << "семь";
            break;
        case 8:
            cout << "восемь";
            break;
        case 9:
            cout << "девять";
            break;
        }
    }
    return 0;
}
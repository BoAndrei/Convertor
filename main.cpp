#include <iostream>
#include <stdlib.h>
#include <conio.h>


using namespace std;

float MetersToMM(float meters)
{
    return meters * 1000;
}
float MetersToCm(float meters)
{
    return meters * 100;
}
float MetersToFt(float meters)
{
    return meters /0.3048;
}
float MetersToInches(float meters)
{
    return meters / 0.0254;
}
float MetersToKm(float meters)
{
    return meters / 1000;
}
float MMToInches(float mm)
{
    return mm * 0.039370;
}
float MMtoCm(float mm)
{
    return mm / 10;
}
float MMtoKm(float mm)
{
    return mm / 1000000;
}
float MMtoFt(float mm)
{
    return mm * 0.0032808;
}
float MMtoMeters(float mm)
{
    return mm / 1000;
}
float CmToMeters(float cm)
{
    return cm / 100;
}
float CmToInches(float cm)
{
    return cm * 0.39370;
}
float CmToFt(float cm)
{
    return cm * 0.032808;
}
float CmToKm(float cm)
{
    return cm / 100000;
}
float CmToMM(float cm)
{
    return cm / 100;
}
float InchesToMM(float inches)
{
    return inches / 0.039370;
}
float InchesToCm(float inches)
{
    return inches / 0.39370;
}
float InchesToFt(float inches)
{
    return inches * 0.083333;
}
float InchesToMeters(float inches)
{
    return inches / 0.039370;
}
float InchesToKm(float inches)
{
    return inches / 39370;
}
float KmToMM(float km)
{
    return km / 0.000001;
}
float KmToCm(float km)
{
    return km / 0.00001;
}
float KmToInches(float km)
{
    return km * 39370;
}
float KmToFt(float km)
{
    return km / 0.00001;
}
float KmToMeters(float km)
{
    return km / 0.00001;
}
float FtToMeters(float ft)
{
    return ft / 0.00001;
}
float FtToCm(float ft)
{
    return ft / 0.00001;
}
float FtToMM(float ft)
{
    return ft / 0.00001;
}
float FtToKm(float ft)
{
    return ft / 0.00001;
}
float FtToInches(float ft)
{
    return ft / 0.00001;
}

void ConvertorMetri()
{
    float meters;
    int x;

    cout<<"1 : "<<"Metri -> Centimetri"<<endl;
    cout<<"2 : "<<"Metri -> Milimetri"<<endl;
    cout<<"3 : "<<"Metri -> Feet"<<endl;
    cout<<"4 : "<<"Metri -> Kilometri"<<endl;
    cout<<"5 : "<<"Metri -> Inch"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri = "<<MetersToCm(meters)<<" Centimetri";
        break;
    case 2 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri = "<<MetersToMM(meters)<<" Milimetri";
        break;
    case 3 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri = "<<MetersToFt(meters)<<" Feat";
        break;
    case 4 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri = "<<MetersToKm(meters)<<" Kilometri";
        break;
    case 5 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri = "<<MetersToInches(meters)<<" Inch";
        break;
    }
}

void ConvertorCm()
{
    float cm;
    int x;

    cout<<"1 : "<<"Centimetri -> Milimetri"<<endl;
    cout<<"2 : "<<"Centimetri -> Feet"<<endl;
    cout<<"3 : "<<"Centimetri -> Kilometri"<<endl;
    cout<<"4 : "<<"Centimetri -> Inch"<<endl;
    cout<<"5 : "<<"Centimetri -> Metri"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimerii = "<<CmToMM(cm)<<" Milimetri";
        break;
    case 2 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri = "<<CmToFt(cm)<<" Feat";
        break;
    case 3 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri = "<<CmToKm(cm)<<" Kilometri";
        break;
    case 4 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri = "<<CmToInches(cm)<<" Inches";
        break;
    case 5 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri = "<<CmToMeters(cm)<<" metri";
        break;

    }
}

void ConvertorMM()
{

    float mm;
    int x;

    cout<<"1 : "<<"Milimetri -> Feet"<<endl;
    cout<<"2 : "<<"Milimetri -> Kilometri"<<endl;
    cout<<"3 : "<<"Milimetri -> Inch"<<endl;
    cout<<"4 : "<<"Milimetri -> Metri"<<endl;
    cout<<"5 : "<<"Milimetri -> Centimetri"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri = "<<MMtoFt(mm)<<" Feat";
        break;
    case 2 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri = "<<MMtoKm(mm)<<" Kilometri";
        break;
    case 3 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri = "<<MMToInches(mm)<<" Inch";
        break;
    case 4 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri = "<<MMtoMeters(mm)<<" metri";
        break;
    case 5 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri = "<<MMtoCm(mm)<<" Centimetri";
        break;

    }

}
void ConvertorFt()
{

    float ft;
    int x;

    cout<<"1 : "<<"Feet -> Kilometri"<<endl;
    cout<<"2 : "<<"Feet -> Inch"<<endl;
    cout<<"3 : "<<"Feet -> Metri"<<endl;
    cout<<"4 : "<<"Feet -> Centimetri"<<endl;
    cout<<"5 : "<<"Feet -> Milimetri"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat = "<<FtToKm(ft)<<" Kilometri";
        break;
    case 2 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat = "<<FtToInches(ft)<<" Inch";
        break;
    case 3 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat = "<<FtToMeters(ft)<<" metri";
        break;
    case 4 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat = "<<FtToCm(ft)<<" Centimetri";
        break;
    case 5 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat = "<<FtToInches(ft)<<" Inch";
        break;

    }
}
void ConvertorKm()
{

    float km;
    int x;
    cout<<"1 : "<<"Kilometri -> Inch"<<endl;
    cout<<"2 : "<<"Kilometri -> Metri"<<endl;
    cout<<"3 : "<<"Kilometri -> Centimetri"<<endl;
    cout<<"4 : "<<"Kilometri -> Milimetri"<<endl;
    cout<<"5 : "<<"Kilometri -> Feet"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri = "<<KmToInches(km)<<" Inch";
        break;
    case 2 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri = "<<KmToMeters(km)<<" metri";
        break;
    case 3 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri = "<<KmToCm(km)<<" Centimetri";
        break;
    case 4 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri = "<<KmToMM(km)<<" Milimetri";
        break;
    case 5 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri = "<<KmToFt(km)<<" Feat";
        break;

    }

}
void ConvertorInch()
{

    float inch;
    int x;

    cout<<"1 : "<<"Inch -> Metri"<<endl;
    cout<<"2 : "<<"Inch -> Centimetri"<<endl;
    cout<<"3 : "<<"Inch -> Milimetri"<<endl;
    cout<<"4 : "<<"Inch -> Feet"<<endl;
    cout<<"5 : "<<"Inch -> Kilometri"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch = "<<InchesToMeters(inch)<<" metri";
        break;
    case 2 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch = "<<InchesToCm(inch)<<" Centimetri";
        break;
    case 3 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch = "<<InchesToMM(inch)<<" Milimetri";
        break;
    case 4 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch = "<<InchesToFt(inch)<<" Feat";
        break;
    case 5 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch = "<<InchesToKm(inch)<<" Kilometri";
        break;

    }

}






void Lungime()
{
    int x;
    float meters,cm,mm,ft,km,inch;
    cout<<"1 : "<<"Convertor Metri"<<endl;
    cout<<"2 : "<<"Convertor Milimetri"<<endl;
    cout<<"3 : "<<"Convertor Centimetri"<<endl;
    cout<<"4 : "<<"Convertor Feet"<<endl;
    cout<<"5 : "<<"Convertor Kilometri"<<endl;
    cout<<"6 : "<<"Convertor Inch"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;

    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorMetri();
        break;
    case 2 :
        system("cls");
        ConvertorMM();
        break;
    case 3 :
        system("cls");
        ConvertorCm();
        break;
    case 4 :
        system("cls");
        ConvertorFt();
        break;
    case 5 :
        system("cls");
        ConvertorKm();
        break;
    case 6 :
        system("cls");
        ConvertorInch();
        break;
    }
}




/////////////////////////////////////////////////////////////

float CelsiusToFahrenheit(float celsius)
{

    return celsius * (float)9/5 + 32;
}

float CelsiusToKelvin(float celsius)
{
    return celsius + 273.15;
}

float CelsiusToRankine(float celsius)
{
    return (celsius + 273.15) * (float)9/5;
}

float FahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit-32) * (float)5/9;
}

float FahrenheitToKelvin(float fahrenheit)
{
    return (fahrenheit+459.67) * (float)5/9;
}

float FahrenheitToRankine(float fahrenheit)
{
    return fahrenheit + 459.67;
}

float KelvinToCelsius(float kelvin)
{
    return kelvin - 273.15;
}

float KelvinToFahrenheit(float kelvin)
{
    return kelvin * (float)9/5 - 459.67;
}

float KelvinToRankine(float kelvin)
{
    return kelvin * (float)9/5;
}

float RankineToCelsius(float rankine)
{
    return (rankine - 491.67) * (float)5/9;
}

float RankineToFahrenheit(float rankine)
{
    return rankine - 459.67;
}

float RankineToKelvin(float rankine)
{
    return rankine * (float)5/9;
}

void ConvertorCelsius()
{
    int x;
    float celsius;
    cout<<"1 : "<<"Celsius -> Fahrenheit"<<endl;
    cout<<"2 : "<<"Celsius -> Kelvin"<<endl;
    cout<<"3 : "<<"Celsius -> Rankine"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>celsius;
        cout<<endl;
        cout<<celsius<<" Celsius = "<<CelsiusToFahrenheit(celsius)<<" Fahrenheit";
        break;
    case 2 :
        cin>>celsius;
        cout<<endl;
        cout<<celsius<<" Celsius = "<<CelsiusToKelvin(celsius)<<" Kelvin";
        break;
    case 3 :
        cin>>celsius;
        cout<<endl;
        cout<<celsius<<" Celsius = "<<CelsiusToRankine(celsius)<<" Rankine";
        break;
    }

}
void ConvertorKelvin()
{
    int x;
    float kelvin;

    cout<<"1 : "<<"Kelvin -> Celsius"<<endl;
    cout<<"2 : "<<"Kelvin -> Fahrenheit"<<endl;
    cout<<"3 : "<<"Kelvin -> Rankine"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {


    case 1 :
        cin>>kelvin;
        cout<<endl;
        cout<<kelvin<<" Kelvin = "<<KelvinToCelsius(kelvin)<<" Celsius";
        break;
    case 2 :
        cin>>kelvin;
        cout<<endl;
        cout<<kelvin<<" Kelvin = "<<KelvinToFahrenheit(kelvin)<<" Fahrenheit";
        break;
    case 3 :
        cin>>kelvin;
        cout<<endl;
        cout<<kelvin<<" Kelvin = "<<KelvinToRankine(kelvin)<<" Rankine";
        break;
    }

}

void ConvertorFahrenheit()
{
    int x;
    float fahrenheit;

    cout<<"1 : "<<"Fahrenheit -> Celsius"<<endl;
    cout<<"2 : "<<"Fahrenheit -> Kelvin"<<endl;
    cout<<"3 : "<<"Fahrenheit -> Rankine"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>fahrenheit;
        cout<<endl;
        cout<<fahrenheit<<" Fahrenheit = "<<FahrenheitToCelsius(fahrenheit)<<" Celsius";
        break;
    case 2 :
        cin>>fahrenheit;
        cout<<endl;
        cout<<fahrenheit<<" Fahrenheit = "<<FahrenheitToKelvin(fahrenheit)<<" Kelvin";
        break;
    case 3 :
        cin>>fahrenheit;
        cout<<endl;
        cout<<fahrenheit<<" Fahrenheit = "<<FahrenheitToRankine(fahrenheit)<<" Rankine";
        break;
    }
}
void ConvertorRankine()
{
    int x;
    float rankine;

    cout<<"1 : "<<"Rankie -> Celsius"<<endl;
    cout<<"2 : "<<"Rankie -> Kelvin"<<endl;
    cout<<"3 : "<<"Rankie -> Fahrenheit"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>rankine;
        cout<<endl;
        cout<<rankine<<" Rankine = "<<RankineToCelsius(rankine)<<" Celsius";
        break;
    case 2 :
        cin>>rankine;
        cout<<endl;
        cout<<rankine<<" Rankine = "<<RankineToKelvin(rankine)<<" Kelvin";
        break;
    case 3 :
        cin>>rankine;
        cout<<endl;
        cout<<rankine<<" Rankine = "<<RankineToFahrenheit(rankine)<<" Fahrenheit";
        break;
    }

}


void Temperatura()
{
    int x;
    float celsius,kelvin,fahrenheit,rankine;
    cout<<"1 : "<<"Convertor Celsius"<<endl;
    cout<<"2 : "<<"Convertor Kelvin"<<endl;
    cout<<"3 : "<<"Convertor Fahrenheit"<<endl;
    cout<<"4 : "<<"Convertor Rankine"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;


    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorCelsius();
        break;
    case 2 :
        system("cls");
        ConvertorKelvin();
        break;
    case 3 :
        system("cls");
        ConvertorFahrenheit();
        break;
    case 4 :
        system("cls");
        ConvertorRankine();
        break;
    }
}








int main()
{
    int x;

    cout<<"1 : "<<"Convertor Lungime"<<endl;
    cout<<"6 : "<<"Convertor Temperatura"<<endl;

    cout<<endl;
    cout<<"Operatia Dorita: ";
    cin>>x;;

    switch (x)
    {
    case 1 :
        system("cls");
        Lungime();
        //cout<<KmToCm(2);
        break;


    case 6 :
        system("cls");
        Temperatura();
        break;

    }
    return 0;
}

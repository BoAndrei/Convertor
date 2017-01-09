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
float Meters2ToMM2(float meters)
{
    return meters / 1000000 ;
}
float Meters2ToCm2(float meters)
{
    return meters / 0.00010000;
}
float Meters2ToFt2(float meters)
{
    return meters * 10.764;
}
float Meters2ToInches2(float meters)
{
    return meters * 1550.0;
}
float Meters2ToKm2(float meters)
{
    return meters / 1000000;
}
float MM2ToInches2(float mm)
{
    return mm * 0.0015500;
}
float MM2toCm2(float mm)
{
    return mm / 10000;
}
float MM2toKm2(float mm)
{
    return mm / 1000000000000;
}
float MM2toFt2(float mm)
{
    return mm * 0.000010764;
}
float MM2toMeters2(float mm)
{
    return mm / 1000000;
}
float Cm2ToMeters2(float cm)
{
    return cm / 10000;
}
float Cm2ToInches2(float cm)
{
    return cm * 0.15500;
}
float Cm2ToFt2(float cm)
{
    return cm * 0.0010764;
}
float Cm2ToKm2(float cm)
{
    return cm / 10000000000;
}
float Cm2ToMM2(float cm)
{
    return cm / 0.010000;
}
float Inches2ToMM2(float inches)
{
    return inches / 0.0015500;
}
float Inches2ToCm2(float inches)
{
    return inches / 0.15500;
}
float Inches2ToFt2(float inches)
{
    return inches * 0.0069444;
}
float Inches2ToMeters2(float inches)
{
    return inches / 15500;
}
float Inches2ToKm2(float inches)
{
    return inches / 1550000000;
}
float Km2ToMM2(float km)
{
    return km / 0.000000000001;
}
float Km2ToCm2(float km)
{
    return km / 0.0000000001;
}
float Km2ToInches2(float km)
{
    return km * 1550000000;
}
float Km2ToFt2(float km)
{
    return km * 10764000;
}
float Km2ToMeters2(float km)
{
    return km / 0.0000010000;
}
float Ft2ToMeters2(float ft)
{
    return ft / 10.764;
}
float Ft2ToCm2(float ft)
{
    return ft / 0.0010764;
}
float Ft2ToMM2(float ft)
{
    return ft / 0.000010764;
}
float Ft2ToKm2(float ft)
{
    return ft / 10764000;
}
float Ft2ToInches2(float ft)
{
    return ft * 144;
}

void ConvertorMetrip()
{
    float meters;
    int x;

    cout<<"1 : "<<"Metri patrati -> Centimetri patrati"<<endl;
    cout<<"2 : "<<"Metri patrati -> Milimetri patrati"<<endl;
    cout<<"3 : "<<"Metri patrati -> Feet patrati"<<endl;
    cout<<"4 : "<<"Metri patrati -> Kilometri patrati"<<endl;
    cout<<"5 : "<<"Metri patrati -> Inch patrati"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri patrati = "<<Meters2ToCm2(meters)<<" Centimetri patrati";
        break;
    case 2 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri patrati = "<<Meters2ToMM2(meters)<<" Milimetri patrati";
        break;
    case 3 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri patrati = "<<Meters2ToFt2(meters)<<" Feat patrati";
        break;
    case 4 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri patrati = "<<Meters2ToKm2(meters)<<" Kilometri patrati";
        break;
    case 5 :
        cin>>meters;
        cout<<endl;
        cout<<meters<<" metri patrati = "<<Meters2ToInches2(meters)<<" Inch patrati";
        break;
    }
}
void ConvertorMMp()
{
    float mm;
    int x;

    cout<<"1 : "<<"Milimetri patrati -> Feet patrati"<<endl;
    cout<<"2 : "<<"Milimetri patrati -> Kilometri patrati"<<endl;
    cout<<"3 : "<<"Milimetri patrati -> Inch patrati"<<endl;
    cout<<"4 : "<<"Milimetri patrati -> Metri patrati"<<endl;
    cout<<"5 : "<<"Milimetri patrati -> Centimetri patrati"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri patrati = "<<MM2toFt2(mm)<<" Feat patrati";
        break;
    case 2 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri patrati = "<<MM2toKm2(mm)<<" Kilometri patrati";
        break;
    case 3 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri patrati = "<<MM2ToInches2(mm)<<" Inch patrati";
        break;
    case 4 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri patrati = "<<MM2toMeters2(mm)<<" metri patrati";
        break;
    case 5 :
        cin>>mm;
        cout<<endl;
        cout<<mm<<" Milimetri patrati = "<<MM2toCm2(mm)<<" Centimetri patrati";
        break;

    }

}
void ConvertorCmp()
{
    float cm;
    int x;

    cout<<"1 : "<<"Centimetri patrati -> Milimetri patrati"<<endl;
    cout<<"2 : "<<"Centimetri patrati -> Feet patrati"<<endl;
    cout<<"3 : "<<"Centimetri patrati -> Kilometri patrati"<<endl;
    cout<<"4 : "<<"Centimetri patrati -> Inch patrati"<<endl;
    cout<<"5 : "<<"Centimetri patrati -> Metri patrati"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimerii patrati = "<<Cm2ToMM2(cm)<<" Milimetri patrati";
        break;
    case 2 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri patrati = "<<Cm2ToFt2(cm)<<" Feat patrati";
        break;
    case 3 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri patrati = "<<Cm2ToKm2(cm)<<" Kilometri patrati";
        break;
    case 4 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri patrati = "<<Cm2ToInches2(cm)<<" Inches patrati";
        break;
    case 5 :
        cin>>cm;
        cout<<endl;
        cout<<cm<<" Centimetri patrati = "<<Cm2ToMeters2(cm)<<" metri patrati";
        break;

    }

}
void ConvertorFtp()
{
    float ft;
    int x;

    cout<<"1 : "<<"Feet patrati -> Kilometri patrati"<<endl;
    cout<<"2 : "<<"Feet patrati -> Inch patrati"<<endl;
    cout<<"3 : "<<"Feet patrati -> Metri patrati"<<endl;
    cout<<"4 : "<<"Feet patrati -> Centimetri patrati"<<endl;
    cout<<"5 : "<<"Feet patrati -> Milimetri patrati"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat patrati = "<<Ft2ToKm2(ft)<<" Kilometri patrati";
        break;
    case 2 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat patrati = "<<Ft2ToInches2(ft)<<" Inch patrati";
        break;
    case 3 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat patrati = "<<Ft2ToMeters2(ft)<<" metri patrati";
        break;
    case 4 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat patrati = "<<Ft2ToCm2(ft)<<" Centimetri patrati";
        break;
    case 5 :
        cin>>ft;
        cout<<endl;
        cout<<ft<<" Feat patrati = "<<Ft2ToInches2(ft)<<" Inch patrati";
        break;

    }

}
void ConvertorKmp()
{
    float km;
    int x;
    cout<<"1 : "<<"Kilometri patrati -> Inch patrati"<<endl;
    cout<<"2 : "<<"Kilometri patrati -> Metri patrati"<<endl;
    cout<<"3 : "<<"Kilometri patrati -> Centimetri patrati"<<endl;
    cout<<"4 : "<<"Kilometri patrati -> Milimetri patrati"<<endl;
    cout<<"5 : "<<"Kilometri patrati -> Feet patrati"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri patrati = "<<Km2ToInches2(km)<<" Inch patrati";
        break;
    case 2 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri patrati = "<<Km2ToMeters2(km)<<" metri patrati";
        break;
    case 3 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri patrati = "<<Km2ToCm2(km)<<" Centimetri patrati";
        break;
    case 4 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri patrati = "<<Km2ToMM2(km)<<" Milimetri patrati";
        break;
    case 5 :
        cin>>km;
        cout<<endl;
        cout<<km<<" Kilometri patrati = "<<Km2ToFt2(km)<<" Feat patrati";
        break;

    }

}
void ConvertorInchp()
{
    float inch;
    int x;

    cout<<"1 : "<<"Inch patrati -> Metri patrati"<<endl;
    cout<<"2 : "<<"Inch patrati -> Centimetri patrati"<<endl;
    cout<<"3 : "<<"Inch patrati-> Milimetri patrati"<<endl;
    cout<<"4 : "<<"Inch patrati-> Feet patrati"<<endl;
    cout<<"5 : "<<"Inch patrati-> Kilometri patrati"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch patrati= "<<Inches2ToMeters2(inch)<<" metri patrati";
        break;
    case 2 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch patrati = "<<Inches2ToCm2(inch)<<" Centimetri patrati";
        break;
    case 3 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch patrati = "<<Inches2ToMM2(inch)<<" Milimetri patrati";
        break;
    case 4 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch patrati = "<<Inches2ToFt2(inch)<<" Feat patrati";
        break;
    case 5 :
        cin>>inch;
        cout<<endl;
        cout<<inch<<" Inch patrati = "<<Inches2ToKm2(inch)<<" Kilometri patrati";
        break;

    }

}


void Arie()
{
    int x;
    cout<<"1 : "<<"Convertor Metri patrati"<<endl;
    cout<<"2 : "<<"Convertor Milimetri patrati"<<endl;
    cout<<"3 : "<<"Convertor Centimetri patrati"<<endl;
    cout<<"4 : "<<"Convertor Feet patrati"<<endl;
    cout<<"5 : "<<"Convertor Kilometri patrati"<<endl;
    cout<<"6 : "<<"Convertor Inch patrati"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;

    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorMetrip();
        break;
    case 2 :
        system("cls");
        ConvertorMMp();
        break;
    case 3 :
        system("cls");
        ConvertorCmp();
        break;
    case 4 :
        system("cls");
        ConvertorFtp();
        break;
    case 5 :
        system("cls");
        ConvertorKmp();
        break;
    case 6 :
        system("cls");
        ConvertorInchp();
        break;
    }

}
/////////////////////////////////////////////////////////////

float SecToMin(float sec)
{
    return sec / 60;
}
float SecToHour(float sec)
{
    return sec / 3600;
}
float SecToDay(float sec)
{
    return sec / (3600*24);
}
float MinToSec(float min)
{
    return min *60;
}
float MinToHour(float min)
{
    return min / 60 ;
}
float MinToDay(float min)
{
    return min / (60*24);
}
float HourToSec(float hour)
{
    return hour * 3600;
}
float HourToMin(float hour)
{
    return hour * 60;
}
float HourToDay(float hour)
{
    return hour / 24;
}
float DayToSec(float day)
{
    return day * (3600*24);
}
float DayToMin(float day)
{
    return day * (60*24);
}
float DayToHour(float day)
{
    return day * 24;
}

void ConvertorSecunde()
{
    int x;
    float sec;

    cout<<"1 : "<<"Secunde -> Minute"<<endl;
    cout<<"2 : "<<"Secunde -> Ore"<<endl;
    cout<<"3 : "<<"Secunde -> Zile"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
        case 1 :
        cin>>sec;
        cout<<endl;
        cout<<sec<<" Secunde = "<<SecToMin(sec)<<" Minute";
        break;
    case 2 :
        cin>>sec;
        cout<<endl;
        cout<<sec<<" Secunde = "<<SecToHour(sec)<<" Ore";
        break;
    case 3 :
        cin>>sec;
        cout<<endl;
        cout<<sec<<" Secunde = "<<SecToDay(sec)<<" Zile";
        break;
    }


}

void ConvertorMinute()
{
    int x;
    float min;

    cout<<"1 : "<<"Minute -> Secunde"<<endl;
    cout<<"2 : "<<"Minute -> Ore"<<endl;
    cout<<"3 : "<<"Minute -> Zile"<<endl;

    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;;
    cout<<"Dati valoarea: ";

    switch(x)
    {
        case 1 :
        cin>>min;
        cout<<endl;
        cout<<min<<" Minute = "<<MinToSec(min)<<" Secunde";
        break;
    case 2 :
        cin>>min;
        cout<<endl;
        cout<<min<<" Minute = "<<MinToHour(min)<<" Ore";
        break;
    case 3 :
        cin>>min;
        cout<<endl;
        cout<<min<<" Minute = "<<MinToDay(min)<<" Zile";
        break;
    }
}
void ConvertorOre()
{
    int x;
    float hour;

    cout<<"1 : "<<"Ore -> Secunde"<<endl;
    cout<<"2 : "<<"Ore -> Minute"<<endl;
    cout<<"3 : "<<"Ore -> Zile"<<endl;

    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
        case 1 :
        cin>>hour;
        cout<<endl;
        cout<<hour<<" Ore = "<<HourToSec(hour)<<" Secunde";
        break;
    case 2 :
        cin>>hour;
        cout<<endl;
        cout<<hour<<" Ore = "<<HourToMin(hour)<<" Minute";
        break;
    case 3 :
        cin>>hour;
        cout<<endl;
        cout<<hour<<" Ore = "<<HourToDay(hour)<<" Zile";
        break;
    }
}

void ConvertorZile()
{
    int x;
    float day;

    cout<<"1 : "<<"Zile -> Secunde"<<endl;
    cout<<"2 : "<<"Zile -> Minute"<<endl;
    cout<<"3 : "<<"Zile -> Ore"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
        case 1 :
        cin>>day;
        cout<<endl;
        cout<<day<<" Zile = "<<DayToSec(day)<<" Secunde";
        break;
    case 2 :
        cin>>day;
        cout<<endl;
        cout<<day<<" Zile = "<<DayToMin(day)<<" Minute";
        break;
    case 3 :
        cin>>day;
        cout<<endl;
        cout<<day<<" Zile = "<<DayToHour(day)<<" Ore";
        break;
    }
}

void Timp()
{
    int x;
    cout<<"1 : "<<"Convertor Secunde"<<endl;
    cout<<"2 : "<<"Convertor Minute"<<endl;
    cout<<"3 : "<<"Convertor Ore"<<endl;
    cout<<"4 : "<<"Convertor Zile"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;

    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorSecunde();
        break;
    case 2 :
        system("cls");
        ConvertorMinute();
        break;
    case 3 :
        system("cls");
        ConvertorOre();
        break;
    case 4 :
        system("cls");
        ConvertorZile();
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
    cout<<"2 : "<<"Convertor Arie"<<endl;
    cout<<"4 : "<<"Convertor Timp"<<endl;
    cout<<"6 : "<<"Convertor Temperatura"<<endl;

    cout<<endl;
    cout<<"Operatia Dorita: ";
    cin>>x;;

    switch (x)
    {
    case 1 :
        system("cls");
        Lungime();
        break;
    case 2:
        system("cls");
        Arie();
        break;
    case 4:
        system("cls");
        Timp();
        break;


    case 6 :
        system("cls");
        Temperatura();
        break;

    }
    return 0;
}

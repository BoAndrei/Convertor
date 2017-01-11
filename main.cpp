#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iomanip>


using namespace std;
int ok;

double MetersToMM(double meters)
{
    return meters * 1000;
}
double MetersToCm(double meters)
{
    return meters * 100;
}
double MetersToFt(double meters)
{
    return meters /0.3048;
}
double MetersToInches(double meters)
{
    return meters / 0.0254;
}
double MetersToKm(double meters)
{
    return meters / 1000;
}
double MMToInches(double mm)
{
    return mm * 0.039370;
}
double MMtoCm(double mm)
{
    return mm / 10;
}
double MMtoKm(double mm)
{
    return mm / 1000000;
}
double MMtoFt(double mm)
{
    return mm * 0.0032808;
}
double MMtoMeters(double mm)
{
    return mm / 1000;
}
double CmToMeters(double cm)
{
    return cm / 100;
}
double CmToInches(double cm)
{
    return cm * 0.39370;
}
double CmToFt(double cm)
{
    return cm * 0.032808;
}
double CmToKm(double cm)
{
    return cm / 100000;
}
double CmToMM(double cm)
{
    return cm / 100;
}
double InchesToMM(double inches)
{
    return inches / 0.039370;
}
double InchesToCm(double inches)
{
    return inches / 0.39370;
}
double InchesToFt(double inches)
{
    return inches * 0.083333;
}
double InchesToMeters(double inches)
{
    return inches / 0.039370;
}
double InchesToKm(double inches)
{
    return inches / 39370;
}
double KmToMM(double km)
{
    return km / 0.000001;
}
double KmToCm(double km)
{
    return km / 0.00001;
}
double KmToInches(double km)
{
    return km * 39370;
}
double KmToFt(double km)
{
    return km / 0.00001;
}
double KmToMeters(double km)
{
    return km / 0.00001;
}
double FtToMeters(double ft)
{
    return ft / 0.00001;
}
double FtToCm(double ft)
{
    return ft / 0.00001;
}
double FtToMM(double ft)
{
    return ft / 0.00001;
}
double FtToKm(double ft)
{
    return ft / 0.00001;
}
double FtToInches(double ft)
{
    return ft / 0.00001;
}

void ConvertorMetri()
{
    double meters;
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
    double cm;
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

    double mm;
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

    double ft;
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

    double km;
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

    double inch;
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
double Meters2ToMM2(double meters)
{
    return meters / 1000000 ;
}
double Meters2ToCm2(double meters)
{
    return meters / 0.00010000;
}
double Meters2ToFt2(double meters)
{
    return meters * 10.764;
}
double Meters2ToInches2(double meters)
{
    return meters * 1550.0;
}
double Meters2ToKm2(double meters)
{
    return meters / 1000000;
}
double MM2ToInches2(double mm)
{
    return mm * 0.0015500;
}
double MM2toCm2(double mm)
{
    return mm / 10000;
}
double MM2toKm2(double mm)
{
    return mm / 1000000000000;
}
double MM2toFt2(double mm)
{
    return mm * 0.000010764;
}
double MM2toMeters2(double mm)
{
    return mm / 1000000;
}
double Cm2ToMeters2(double cm)
{
    return cm / 10000;
}
double Cm2ToInches2(double cm)
{
    return cm * 0.15500;
}
double Cm2ToFt2(double cm)
{
    return cm * 0.0010764;
}
double Cm2ToKm2(double cm)
{
    return cm / 10000000000;
}
double Cm2ToMM2(double cm)
{
    return cm / 0.010000;
}
double Inches2ToMM2(double inches)
{
    return inches / 0.0015500;
}
double Inches2ToCm2(double inches)
{
    return inches / 0.15500;
}
double Inches2ToFt2(double inches)
{
    return inches * 0.0069444;
}
double Inches2ToMeters2(double inches)
{
    return inches / 15500;
}
double Inches2ToKm2(double inches)
{
    return inches / 1550000000;
}
double Km2ToMM2(double km)
{
    return km / 0.000000000001;
}
double Km2ToCm2(double km)
{
    return km / 0.0000000001;
}
double Km2ToInches2(double km)
{
    return km * 1550000000;
}
double Km2ToFt2(double km)
{
    return km * 10764000;
}
double Km2ToMeters2(double km)
{
    return km / 0.0000010000;
}
double Ft2ToMeters2(double ft)
{
    return ft / 10.764;
}
double Ft2ToCm2(double ft)
{
    return ft / 0.0010764;
}
double Ft2ToMM2(double ft)
{
    return ft / 0.000010764;
}
double Ft2ToKm2(double ft)
{
    return ft / 10764000;
}
double Ft2ToInches2(double ft)
{
    return ft * 144;
}

void ConvertorMetrip()
{
    double meters;
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
    double mm;
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
    double cm;
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
    double ft;
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
    double km;
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
    double inch;
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

double LitToMetr3(double lit)
{
    return lit / 1000;
}
double LitToDL(double lit)
{
    return lit * 10;
}
double LitToMiL(double lit)
{
    return lit * 1000;
}

double DLtoLit(double dl)
{
    return dl / 10;
}
double DLtoMiL(double dl)
{
    return dl * 100;
}
double DLtoMetr3(double dl)
{
    return dl / 100;
}
double MiLtoLit(double mil)
{
    return mil / 100;
}
double MiLtoDL(double mil)
{
    return mil / 100;
}

double MiLtoMetr3(double mil)
{
    return mil / 100000;
}
double Metr3ToLit(double m3)
{
    return m3 * 1000;
}
double Metr3ToDL(double m3)
{
    return m3 * 10000;
}
double Metr3MiL(double m3)
{
    return m3 * 1000000;
}




void ConvertorLitru()
{
    double lit;
    int x;

    cout<<"1 : "<<"Litru -> Metri cubi"<<endl;
    cout<<"2 : "<<"Litru -> DeciLitru"<<endl;
    cout<<"3 : "<<"Litru-> MiliLitru"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>lit;
        cout<<endl;
        cout<<lit<<" Litri = "<<LitToDL(lit)<<" DeciLitri";
        break;
    case 2 :
        cin>>lit;
        cout<<endl;
        cout<<lit<<" Litri = "<<LitToMetr3(lit)<<" Metri cub";
        break;
    case 3 :
        cin>>lit;
        cout<<endl;
        cout<<lit<<" Litri = "<<LitToMiL(lit)<<" MiliLitri";
        break;
}
}
void ConvertorDeciLitru()
{

    double dl;
    int x;

    cout<<"1 : "<<"DeciLitru -> Litru"<<endl;
    cout<<"2 : "<<"DeciLitru -> Metru cub"<<endl;
    cout<<"3 : "<<"DeciLitru-> MiliLitru"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>dl;
        cout<<endl;
        cout<<dl<<" DeciLitri = "<<DLtoLit(dl)<<" Litru";
        break;
    case 2 :
        cin>>dl;
        cout<<endl;
        cout<<dl<<" DeciLitri = "<<DLtoMetr3(dl)<<" Metri cub";
        break;
    case 3 :
        cin>>dl;
        cout<<endl;
        cout<<dl<<" DeciLitri = "<<DLtoMiL(dl)<<" MiliLitri";
        break;
}
}
void ConvertorMiliLitru()
{
    double mil;
    int x;

    cout<<"1 : "<<"MiliLitru -> Litru"<<endl;
    cout<<"2 : "<<"MiliLitru -> Metru cub"<<endl;
    cout<<"3 : "<<"MiliLitru -> DeciLitru"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>mil;
        cout<<endl;
        cout<<mil<<" MiliLitri = "<<MiLtoLit(mil)<<" Litru";
        break;
    case 2 :
        cin>>mil;
        cout<<endl;
        cout<<mil<<" MiliLitri = "<<MiLtoMetr3(mil)<<" Metri cub";
        break;
    case 3 :
        cin>>mil;
        cout<<endl;
        cout<<mil<<" MiliLitri = "<<MiLtoDL(mil)<<" DeciLitri";
        break;
}
}
void ConvertorMetruCub()
{
    double m3;
    int x;

    cout<<"1 : "<<"Metri cub -> Litru"<<endl;
    cout<<"2 : "<<"Metri cub -> MiliLitri"<<endl;
    cout<<"3 : "<<"Metri cub -> DeciLitru"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>m3;
        cout<<endl;
        cout<<m3<<" Metri cub = "<<MiLtoLit(m3)<<" Litru";
        break;
    case 2 :
        cin>>m3;
        cout<<endl;
        cout<<m3<<" Metri cub = "<<MiLtoMetr3(m3)<<" MiliLitri";
        break;
    case 3 :
        cin>>m3;
        cout<<endl;
        cout<<m3<<" Metri cub = "<<MiLtoDL(m3)<<" DeciLitri";
        break;
}
}


void Volum()
{


int x;
    cout<<"1 : "<<"Convertor Litri"<<endl;
    cout<<"2 : "<<"Convertor DeciLitri"<<endl;
    cout<<"3 : "<<"Convertor MiliLitri"<<endl;
    cout<<"4 : "<<"Convertor Metri cubi"<<endl;

    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;

    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorLitru();
        break;
    case 2 :
        system("cls");
        ConvertorDeciLitru();
        break;
    case 3 :
        system("cls");
        ConvertorMiliLitru();
        break;
    case 4 :
        system("cls");
        ConvertorMetruCub();
        break;
    }

}

/////////////////////////////////////////////////////////////
double SecToMin(double sec)
{
    return sec / 60;
}
double SecToHour(double sec)
{
    return sec / 3600;
}
double SecToDay(double sec)
{
    return sec / (3600*24);
}
double MinToSec(double min)
{
    return min *60;
}
double MinToHour(double min)
{
    return min / 60 ;
}
double MinToDay(double min)
{
    return min / (60*24);
}
double HourToSec(double hour)
{
    return hour * 3600;
}
double HourToMin(double hour)
{
    return hour * 60;
}
double HourToDay(double hour)
{
    return hour / 24;
}
double DayToSec(double day)
{
    return day * (3600*24);
}
double DayToMin(double day)
{
    return day * (60*24);
}
double DayToHour(double day)
{
    return day * 24;
}

void ConvertorSecunde()
{
    int x;
    double sec;

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
    double min;

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
    double hour;

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
    double day;

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
double KmhToMph(double kmh)
{
    return kmh / 1.609344;
}
double KmhToMs(double kmh)
{
    return kmh / 3.6;
}
double MphToMs(double mph)
{
    return mph * 0.44704;
}
double MphToKmh(double mph)
{
    return mph * 1.609344;
}
double MsToMph(double ms)
{
    return ms * 2.237;
}
double MsToKmh(double ms)
{
    return ms * 3.6;
}

void ConvertorKmh()
{
    int x;
    double kmh;

    cout<<"1 : "<<"km/h -> mph"<<endl;
    cout<<"2 : "<<"km/h -> m/s"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
        case 1 :
        cin>>kmh;
        cout<<endl;
        cout<<kmh<<" km/h = "<<KmhToMph(kmh)<<" mph";
        break;
    case 2 :
        cin>>kmh;
        cout<<endl;
        cout<<kmh<<" km/h = "<<KmhToMs(kmh)<<" m/s";
        break;
    }
}
void ConvertorMs()
{
    int x;
    double ms;

    cout<<"1 : "<<"m/s -> km/h"<<endl;
    cout<<"2 : "<<"m/s -> mph"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
        case 1 :
        cin>>ms;
        cout<<endl;
        cout<<ms<<" m/s = "<<MsToKmh(ms)<<" km/h";
        break;
    case 2 :
        cin>>ms;
        cout<<endl;
        cout<<ms<<" m/s = "<<MsToMph(ms)<<" mps";
        break;
    }
}
void ConvertorMph()
{
    int x;
    double mph;

    cout<<"1 : "<<"mph -> km/h"<<endl;
    cout<<"2 : "<<"mph -> m/s"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
        case 1 :
        cin>>mph;
        cout<<endl;
        cout<<mph<<" mph = "<<MphToKmh(mph)<<" km/h";
        break;
    case 2 :
        cin>>mph;
        cout<<endl;
        cout<<mph<<" mph = "<<MphToMs(mph)<<" m/s";
        break;
    }
}

void Viteza()
{
    int x;
    cout<<"1 : "<<"Convertor km/h"<<endl;
    cout<<"2 : "<<"Convertor mph"<<endl;
    cout<<"3 : "<<"Convertor m/s"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;


    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorKmh();
        break;
    case 2 :
        system("cls");
        ConvertorMph();
        break;
    case 3 :
        system("cls");
        ConvertorMs();
        break;
}
}

/////////////////////////////////////////////////////////////

double CelsiusToFahrenheit(double celsius)
{

    return celsius * (double)9/5 + 32;
}

double CelsiusToKelvin(double celsius)
{
    return celsius + 273.15;
}

double CelsiusToRankine(double celsius)
{
    return (celsius + 273.15) * (double)9/5;
}

double FahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit-32) * (double)5/9;
}

double FahrenheitToKelvin(double fahrenheit)
{
    return (fahrenheit+459.67) * (double)5/9;
}

double FahrenheitToRankine(double fahrenheit)
{
    return fahrenheit + 459.67;
}

double KelvinToCelsius(double kelvin)
{
    return kelvin - 273.15;
}

double KelvinToFahrenheit(double kelvin)
{
    return kelvin * (double)9/5 - 459.67;
}

double KelvinToRankine(double kelvin)
{
    return kelvin * (double)9/5;
}

double RankineToCelsius(double rankine)
{
    return (rankine - 491.67) * (double)5/9;
}

double RankineToFahrenheit(double rankine)
{
    return rankine - 459.67;
}

double RankineToKelvin(double rankine)
{
    return rankine * (double)5/9;
}

void ConvertorCelsius()
{
    int x;
    double celsius;
    cout<<"1 : "<<"Celsius -> Fahrenheit"<<endl;
    cout<<"2 : "<<"Celsius -> Kelvin"<<endl;
    cout<<"3 : "<<"Celsius -> Rankine"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
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
    double kelvin;

    cout<<"1 : "<<"Kelvin -> Celsius"<<endl;
    cout<<"2 : "<<"Kelvin -> Fahrenheit"<<endl;
    cout<<"3 : "<<"Kelvin -> Rankine"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
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
    double fahrenheit;

    cout<<"1 : "<<"Fahrenheit -> Celsius"<<endl;
    cout<<"2 : "<<"Fahrenheit -> Kelvin"<<endl;
    cout<<"3 : "<<"Fahrenheit -> Rankine"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
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
    double rankine;

    cout<<"1 : "<<"Rankie -> Celsius"<<endl;
    cout<<"2 : "<<"Rankie -> Kelvin"<<endl;
    cout<<"3 : "<<"Rankie -> Fahrenheit"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
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
    cout<<"1 : "<<"Convertor Celsius"<<endl;
    cout<<"2 : "<<"Convertor Kelvin"<<endl;
    cout<<"3 : "<<"Convertor Fahrenheit"<<endl;
    cout<<"4 : "<<"Convertor Rankine"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;


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
/////////////////////////////////////////////////
long GrToKg(long gr)
{
    return gr / 1000;
}
long GrToT(long gr)
{
    return gr / 1000000;
}
long KgToGr(long kg)
{
    return kg * 1000;
}
long KgToT(long kg)
{
    return kg / 100;
}
long TToGr(long t)
{
    return t * 1000000;
}
long TToKg(long t)
{
    return t * 1000;
}

void ConvertorGrame()
{
    int x;
    double gr;

    cout<<"1 : "<<"Grame -> Kilograme"<<endl;
    cout<<"2 : "<<"Grame -> Tone"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>gr;
        cout<<endl;
        cout<<gr<<" Grame = "<<GrToKg(gr)<<" Kilograme";
        break;
    case 2 :
        cin>>gr;
        cout<<endl;
        cout<<gr<<" Grame = "<<GrToT(gr)<<" Tone";
        break;
    }

}
void ConvertorKilograme()
{
    int x;
    double kg;

    cout<<"1 : "<<"Kilograme -> Grame"<<endl;
    cout<<"2 : "<<"Kilograme -> Tone"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>kg;
        cout<<endl;
        cout<<kg<<" Kilograme = "<<KgToGr(kg)<<" Grame";
        break;
    case 2 :
        cin>>kg;
        cout<<endl;
        cout<<kg<<" Kilograme = "<<KgToT(kg)<<" Tone";
        break;
    }
}
void ConvertorTone()
{
    int x;
    double t;

    cout<<"1 : "<<"Tone -> Grame"<<endl;
    cout<<"2 : "<<"Tone -> Kilograme"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>t;
        cout<<endl;
        cout<<t<<" Tone = "<<TToGr(t)<<" Grame";
        break;
    case 2 :
        cin>>t;
        cout<<endl;
        cout<<t<<" Tone = "<<TToKg(t)<<" Kilograme";
        break;
    }
}

void Masa()
{
    int x;
    cout<<"1 : "<<"Convertor Grame"<<endl;
    cout<<"2 : "<<"Convertor Kilograme"<<endl;
    cout<<"3 : "<<"Convertor Tone"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;


    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorGrame();
        break;
    case 2 :
        system("cls");
        ConvertorKilograme();
        break;
    case 3 :
        system("cls");
        ConvertorTone();
        break;
    }

}
/////////////////////////////////////////////////
double CalToJoule(double cal)
{
    return cal * 4.184;
}
double CalToWatt(double cal)
{
    return cal * 0.001163;
}
double JouleToCal(double joule)
{
    return joule / 4.184;
}
double JouleToWatt(double joule)
{
    return joule / 3600;
}
double WattToCal(double watt)
{
    return watt * 859.8452278589854;
}
double WattToJoule(double watt)
{
    return watt * 3600;
}

void ConvertorCalorie()
{
    int x;
    double cal;

    cout<<"1 : "<<"Calorii -> Joule"<<endl;
    cout<<"2 : "<<"Calorii -> Watt (ora)"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>cal;
        cout<<endl;
        cout<<cal<<" Calorii = "<<CalToJoule(cal)<<" Joule";
        break;
    case 2 :
        cin>>cal;
        cout<<endl;
        cout<<cal<<" Calorii = "<<CalToWatt(cal)<<" Watt (ora)";
        break;
    }

}
void ConvertorJoule()
{
    int x;
    double joule;

    cout<<"1 : "<<"Joule -> Calorii"<<endl;
    cout<<"2 : "<<"Joule -> Watt (ora)"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>joule;
        cout<<endl;
        cout<<joule<<" Calorii = "<<CalToJoule(joule)<<" Joule";
        break;
    case 2 :
        cin>>joule;
        cout<<endl;
        cout<<joule<<" Calorii = "<<CalToWatt(joule)<<" Watt (ora)";
        break;
    }
}
void ConvertorWatt()
{
    int x;
    double watt;

    cout<<"1 : "<<"Watt (ora) -> Calorii"<<endl;
    cout<<"2 : "<<"Watt (ora) -> Joule"<<endl;
    cout<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;
    cout<<"Dati valoarea: ";

    switch(x)
    {
    case 1 :
        cin>>watt;
        cout<<endl;
        cout<<watt<<" Watt (ora) = "<<WattToCal(watt)<<" Calorii";
        break;
    case 2 :
        cin>>watt;
        cout<<endl;
        cout<<watt<<" Watt (ora) = "<<WattToJoule(watt)<<" Joule";
        break;
    }
}

void Energie()
{
    int x;
    cout<<"1 : "<<"Convertor Calorie"<<endl;
    cout<<"2 : "<<"Convertor Joule"<<endl;
    cout<<"3 : "<<"Convertor Watt ora"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;


    switch(x)
    {
    case 1 :
        system("cls");
        ConvertorCalorie();
        break;
    case 2 :
        system("cls");
        ConvertorJoule();
        break;
    case 3 :
        system("cls");
        ConvertorWatt();
        break;
    }

}
/////////////////////////////////////////////////
double BarToPsi(double bar)
{
    return bar * 14.5038;
}
double PsiToBar(double psi)
{
    return psi * 0.0689475728 ;
}
void ConvertorBar()
{
    double bar;

        cout<<"Dati valoarea: ";cin>>bar;
        cout<<endl;
        cout<<bar<<" Bar = "<<BarToPsi(bar)<<" Psi";
}
void ConvertorPsi()
{
    double psi;

        cout<<"Dati valoarea: ";cin>>psi;
        cout<<endl;
        cout<<psi<<" Psi = "<<PsiToBar(psi)<<" Bar";
}
void Presiune()
{
    int x;
    cout<<"1 : "<<"Convertor Bar -> Psi"<<endl;
    cout<<"2 : "<<"Convertor Psi -> Bar"<<endl;

    cout<<"Operatia Dorita: ";
    cin>>x;


    switch(x)
    {
    case 1 :
        ConvertorBar();
        break;
    case 2 :
        ConvertorPsi();
        break;
    }
}




int main()
{
    int x,ok = 1;
    char c;

    loop:while(ok)
{
    cout<<fixed<<setprecision(15);


    cout<<"1 : "<<"Convertor Lungime"<<endl;
    cout<<"2 : "<<"Convertor Arie"<<endl;
    cout<<"3 : "<<"Convertor Volum"<<endl;
    cout<<"4 : "<<"Convertor Timp"<<endl;
    cout<<"5 : "<<"Convertor Viteza"<<endl;
    cout<<"6 : "<<"Convertor Temperatura"<<endl;
    cout<<"7 : "<<"Convertor Masa"<<endl;
    cout<<"8 : "<<"Convertor Energie"<<endl;
    cout<<"9 : "<<"Convertor Presiune"<<endl;

    cout<<endl;
    cout<<"Operatia Dorita: ";
    cin>>x;

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
    case 3:
        system("cls");
        Volum();
        break;
    case 4:
        system("cls");
        Timp();
        break;
    case 5 :
        system("cls");
        Viteza();
        break;
    case 6 :
        system("cls");
        Temperatura();
        break;
    case 7 :
        system("cls");
        Masa();
        break;
    case 8 :
        system("cls");
        Energie();
        break;
    case 9 :
        system("cls");
        Presiune();
        break;

    }

    cout<<endl<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"Tastati:"<<endl<<endl;

        cout<<"a : "<<" Pentru Resetare"<<endl;
        cout<<"Orice alta tasta pentru a inchide programul"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
        cout<<endl<<endl;
        cout<<"Selectati operatia dorita: "<<endl;;
        cin>>c;

        if(c == 'a')
        {
            system("cls");
            goto loop;
        }
        else
        {
            system("cls");
            ok = 0;
        }
}
    return 0;
}

#include "tempreature.h"
#include "calculator.h"



double celciusToFahenheit(double celcius){
    return (celcius * C_TO_F_FACTOR) + FREZZING_POINT_F;
}

double fahrenhietToCelcius(double fahrenheit){
    return (fahrenheit - FREZZING_POINT_F) * F_TO_C_FACTOR;
}
double celsiusToKelvin(double celcius){
    return celcius - ABSOLUTE_ZERO_C;
}
double kelvinToCelsius(double kelvin){
    return kelvin + ABSOLUTE_ZERO_C;
}
double fahrenheitToKelvin(double fahrenheit){
    return (fahrenheit - FREZZING_POINT_F) * F_TO_C_FACTOR - ABSOLUTE_ZERO_C;
}
double kelvinToFahrenheit(double kelvin){
    return (kelvin + ABSOLUTE_ZERO_C) * C_TO_F_FACTOR + FREZZING_POINT_F;
}
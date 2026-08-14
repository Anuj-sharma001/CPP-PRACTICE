#ifndef TEMPREATURE_H
#define TEMPREATURE_H
const double FREZZING_POINT_C = 0.0;
const double FREZZING_POINT_F = 32.0;
const double ABSOLUTE_ZERO_C = -273.15;
const double F_TO_C_FACTOR = 5.0/9.0;
const double C_TO_F_FACTOR = 9.0/5.0;

//FOR THE TEMPREATURE CONVERTER
double celciusToFahenheit(double celcius);
double fahrenhietToCelcius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);

#endif
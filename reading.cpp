#include "reading.h"

Reading::Reading(int w,double h,double f,double c){
	windSpeed=w;
	humidity=h;
	temperature.fahrenheit=f;
	temperature.celsius=c;
}
Reading::Reading(const Reading&obj){
	windSpeed=obj.windSpeed;
	humidity=obj.humidity;
	temperature=obj.temperature;
}
void Reading::showReading(){
        cout << "Wind Speed: " << windSpeed << " mph" << endl;
        cout << "Humidity: " << humidity << " %" << endl;
        cout << "Temperature: " << temperature.fahrenheit << " F / "
             << temperature.celsius << " C" << endl;
}
void Reading::inputReading() {
        cout << "Enter wind speed (mph): ";
        cin >> windSpeed;
        cout << "Enter humidity (%): ";
        cin >> humidity;
        cout<<"To input Temperature use:"<<endl
        	<<"f-Fahrenheit."<<endl
        	<<"c-Celcius."<<endl;
        char ch;
        cin>>ch;
        switch (ch){
        	case 'F':
        	case 'f':
        		cout<<"Input your temperature in Fahrenheit>> ";
        		cin>>temperature.fahrenheit;
        		temperature.celsius=(temperature.fahrenheit-32.0)*(5.0/9.0);
        		break;
        	case 'C':
        	case 'c':
        		cout<<"Input your temperature in Celcius>> ";
        		cin>>temperature.celsius;
        		temperature.fahrenheit=(temperature.celsius*(9.0/5.0))+32.0;
        		break;
        	default :
        		cout<<"Invalid input!";
		}
        /*
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature.fahrenheit;
        cout << "Enter temperature in Celsius: ";
        cin >> temperature.celsius;
        */
    }

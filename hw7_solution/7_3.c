# include <stdio.h>
# include <math.h>
void get_circumference(double radius);
void get_area(double radius);
void get_volume(double radius);
void (*func_ptr_array[4])(double);
double pi = 3.14;

int main(void){
    // UI
    func_ptr_array[0] = get_circumference;
    func_ptr_array[1] = get_area;
    func_ptr_array[2] = get_volume;

    int user_input, val;
    double radius;

    printf("Enter the radius of the circle : \n");
    scanf("%lf", &radius);
    printf("Enter a number between 0 and 2, 3 to end :\n");
    scanf("%d", &user_input);
    
    (*func_ptr_array[user_input])(radius);
}

void get_circumference(double radius){
    double circum;
    circum = 2 * pi * radius;
    printf("circumference calculation is performed! \n");
    printf("radius = %.2lf, circumference = %.2lf\n", radius, circum);
}
void get_area(double radius){
    double area;
    area = radius * radius * pi;
    printf("area calculation is performed! \n");
    printf("radius = %.2lf, area = %.2lf\n", radius, area);
}
void get_volume(double radius){
    double pi = 3.14;
    double volume;
    volume = 3./4. * pi * pow(radius, 3);
    printf("volume of sphere calculation is performed! \n");
    printf("radius = %.2lf, volume = %.2lf\n", radius, volume);
    
}
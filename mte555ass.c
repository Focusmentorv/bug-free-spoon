// Omotosho mutiu Mte assignment  MTE/2020/1093 //

#include <stdio.h>
#include <math.h>

#define PI 3.14

// Program to evaluate Area of a Circle//
float area_circle(float radius)
{
    return PI * radius * radius;
}

// Program to evaluate Perimeter of a Rectangle //
float perimeter_rectangle(float length, float width)
{
    return 2 * (length + width);
}

// Program to evaluate the Area of a Rectangle //
float area_rectangle(float length, float width)
{
    return length * width;
}

// Program to evaluate the Area of a Triangle //
float area_triangle(float base, float height)
{
    return 0.5 * base * height;
}

// Program to evaluate the Volume of a Cube //
float volume_cube(float side)
{
    return pow(side, 3);
}

// Program to evaluate the Volume of a Cylinder //
float volume_cylinder(float radius, float height)
{
    return PI * radius * radius * height;
}

int main()
{
    float radius, length, width, base, height, side;

    // Evaluate and print the Area of a circle //
    printf("HI WELCOME TO MY SIMPLE CALCULATOR C PROJECT. Kindly Enter the radius r to Evaluate Area of a circle: ");
    scanf("%f", &radius);
    printf("Congrats the Area of the circle is: %.2f\n", area_circle(radius));

    // Evaluate and print the Area  of a Rectangle //
 
    printf("Kindly Enter the length and width of the rectangle to Evaluate the Area of the Rectangle: ");
    scanf("%f%f", &length, &width);
    printf("Congrats the Area of the rectangle is: %.2f\n", area_rectangle(length, width)); 

    // Evaluate and print the Area of a Triangle //

    printf("Kindly Enter the base and height of the triangle to Evaluate the Area of the Triangle: ");
    scanf("%f%f", &base, &height);
    printf("Congrats the Area of the triangle is: %.2f\n", area_triangle(base, height));

    // Evaluate and print the Volume of a Cube //
    printf("Kindly Enter the length of a side of the cube to Evaluate Volume of the Cube: ");
    scanf("%f", &side);
    printf("Congrats the Volume of the cube is: %.2f\n", volume_cube(side));

    // Evaluate and print the Volume of a Cylinder //
    printf("Kindly Enter the radius and height of the cylinder to Evaluate Volume of the Cylinder: ");
    scanf("%f%f", &radius, &height);
    printf("Congrats the Volume of the cylinder is: %.2f\n", volume_cylinder(radius, height));

    return 0;
}

// Omotosho mutiu Mte assignment  MTE/2020/1093 //

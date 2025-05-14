void main() 
{
    float length = 93, breadth = 37;	//initialization
	float radius;						//declaration
	float pi = 3.14;
	radius = 28;						//assignment
    
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    
    printf("Area of rectangle = %.2f\nPerimeter of rectangle = %.2f\n", area, perimeter);
    
    area = pi * radius *radius;
    perimeter = 2 * pi * radius;
    
    printf("Area of circle = %.2f\nCircumference of a circle = %.2f\n", area, perimeter);
} 

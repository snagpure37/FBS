
public class Shape {
	private double area;
	
	public void calculateArea(Circle c)
	{
		this.area = 2* 3.14* c.getRadius();
		System.out.println("Area of circle = "+this.area);
	}
	
	public void calculateArea(Rectangle r)
	{
		this.area = r.getLength() * r.getBreadth();
		System.out.println("Area of Rectangle = "+this.area);
	}
	
	public void calculateArea(Triangle t)
	{
		this.area = t.getBase() * t.getHeight() * 0.5;
		System.out.println("Area of Triangle = "+this.area);
	}
}

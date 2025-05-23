
public class ShapeMain {
	
	public static void main(String[] args)
	{
		Circle c = new Circle(10);
		Rectangle r = new Rectangle(5,10);
		Triangle t = new Triangle(5,10);
		
		Shape sh = new Shape();
		sh.calculateArea(t);
		sh.calculateArea(c);
		sh.calculateArea(r);
	}
}

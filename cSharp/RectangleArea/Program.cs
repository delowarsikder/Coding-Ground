using System;

namespace RectangleArea
{
    class Rectangle
    {
        double width;
        double height;

        public void ReadDetails()
        {
            // Console.WriteLine("Enter Weidth and Height: ");
            // width = Console.Read();
            // height = Console.Read();
            width = 4;
        }
        public double Area()
        {
            return width * height;
        }
        public void Display()
        {
            Console.WriteLine("Width: " + width);
            Console.WriteLine("Height: " + height);
            Console.WriteLine("Area: " + Area());
        }
    }
    class Program
    {
            static void Main(string[] args)
            {
                Rectangle rectangle = new Rectangle();
                // rectangle.ReadDetails();
                // rectangle.Display();
                double d = 54.46;
                int i;
                Console.WriteLine("type conversion: ", d);
                Console.ReadKey();
            }
        
    }
}

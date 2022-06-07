using System;

namespace Lab01
{
    
    class Program
    {
        static void Main(string[] args)
        {
            Double a;
            Double b;
            Double c;

            Console.Write("Введите число ");
            a = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите степень в которую хотите возвесли число " + a + " ");
            b = Convert.ToDouble(Console.ReadLine());
            c = a;
            while (b>1) 
            {  
                a *= c;
                b -= 1;
            };

            Console.WriteLine("Результат: " + a);
        }
    }
}

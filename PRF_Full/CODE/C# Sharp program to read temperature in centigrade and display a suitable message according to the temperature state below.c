//Write a C# Sharp program to read temperature in centigrade and display a suitable message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

class Program
{
    static void Main()
    {
        Console.Write("Enter temperature in centigrade: ");
        if (!double.TryParse(Console.ReadLine(), out double temperature))
        {
            Console.WriteLine("Invalid input. Please enter a numeric value.");
            return;
        }

        string message = "";
        if (temperature < 0)
        {
            message = "Freezing weather";
        }
        else if (temperature >= 0 && temperature <= 10)
        {
            message = "Very Cold weather";
        }
        else if (temperature > 10 && temperature <= 20)
        {
            message = "Cold weather";
        }
        else if (temperature > 20 && temperature <= 30)
        {
            message = "Normal in Temp";
        }
        else if (temperature > 30 && temperature <= 40)
        {
            message = "Its Hot";
        }
        else if (temperature > 40)
        {
            message = "Its Very Hot";
        }

        Console.WriteLine($"Temperature {temperature}°C: {message}");
    }
}


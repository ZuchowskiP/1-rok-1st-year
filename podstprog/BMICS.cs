using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BMIc
{
    class Program : BMI
    {
        static void Main(string[] args)
        {
            int gender;
            int _age;
            double _calorieNeed;
        start:
            Console.WriteLine("Wybierz swoja płeć: ");
            Console.WriteLine("1." + EnumAll.enumGen.Mężczyzna);
            Console.WriteLine("2." + EnumAll.enumGen.Kobieta);
            gender = int.Parse(Console.ReadLine());
            Console.Clear();
            if (gender != 1 && gender != 2)
            {
                Console.WriteLine("Wybierz swoja plec wpisujac 1 lub 2");
                goto start;
            }
            Console.Clear();
            BMI _myBMI = new BMI();
            Console.Write("Wpisz swój wiek: ");
            _age = int.Parse(Console.ReadLine());
            switch (gender)
            {
                case 1:
                    double _pNeed1, _pNeed2, _fNeed, _cNeed;
                    _calorieNeed = 66.5 + (13.8 * _myBMI._weight) + (5.0 * _myBMI._height * 100) - (6.8 * _age);
                    _pNeed1 = 0.8 * _myBMI._weight;
                    _pNeed2 = 1.2 * _myBMI._weight;
                    _fNeed = (_calorieNeed * 0.3) / 9;
                    _cNeed = _calorieNeed * 0.6;
                    Console.WriteLine("Twoje dzienne zapotrzebowanie kaloryczne to: " + _calorieNeed);
                    Console.WriteLine("Twoje dzienne zapotrzebowanie na białko to od: " + _pNeed1 + " g do " + _pNeed2 + " g. W zależności od trybu życia.");
                    Console.WriteLine("Twoje dzienne zapotrzebowanie na tłuszcze to: " + _fNeed + " g.");
                    Console.WriteLine("Twoje dzienne zapotrzebowanie na węglowodany w kcal to: " + _cNeed + "kcal.");
                    break;
                case 2:
                    _calorieNeed = 655.1 + (9.6 * _myBMI._weight) + (1.9 * _myBMI._height * 100) - (_age * 4.7);
                    Console.WriteLine("Twoje dzienne zapotrzebowanie kaloryczne to: " + _calorieNeed);
                    _pNeed1 = 0.8 * _myBMI._weight;
                    _pNeed2 = 1.2 * _myBMI._weight;
                    _fNeed = (_calorieNeed * 0.3) / 9;
                    _cNeed = _calorieNeed * 0.6;
                    Console.WriteLine("Twoje dzienne zapotrzebowanie na białko to od: " + _pNeed1 + " g do " + _pNeed2 + " g. W zależności od trybu życia.");
                    Console.WriteLine("Twoje dzienne zapotrzebowanie na tłuszcze to: " + _fNeed + " g.");
                    Console.WriteLine("Twoje dzienne zapotrzebowanie na węglowodany w kcal to: " + _cNeed + "kcal.");
                    break;

            }
        }
    }
    class EnumAll
    {
        public enum enumGen
        {
            Mężczyzna,
            Kobieta
        }
    }
    class BMI
    {
        public double _weight, _height;
        public BMI()
        {
            Console.Write("Wpisz swoja wagę w kg: ");
            _weight = double.Parse(Console.ReadLine());
            Console.Write("Wpisz swoj wzrost w metrach: ");
            _height = double.Parse(Console.ReadLine());
            Console.WriteLine("Twoje BMI to: " + _weight / (Math.Pow(_height, 2)));
        }

    }

    //class Needs : Program
    //{
    //    public double _pNeed1, _pNeed2, _cNeed, _fNeed;

    //    public Reqs()
    //    {
    //        _pNeed1 = 0.8 * _weight;
    //        _pNeed2 = 1.2 * _weight;
    //        _fNeed = (_calorieNeed * 0.3) / 9;
    //        _cNeed = _calorieNeed * 0.6;
    //        Console.WriteLine("Twoje dzienne zapotrzebowanie na białko to od: " + _pNeed1 + " g do " + _pNeed2 + " g. W zależności od trybu życia.");
    //        Console.WriteLine("Twoje dzienne zapotrzebowanie na tłuszcze to: " + _fNeed + "g,");
    //        Console.WriteLine("Twoje dzienne zapotrzebowanie na węglowodany w kcal to: " + _cNeed + "kcal.");
    //    }
    //}
}

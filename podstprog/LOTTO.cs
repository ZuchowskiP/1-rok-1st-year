using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lotto
{
    class Program : Results
    {
        static void Main(string[] args)
            
        {
            int score = 0;
            Console.WriteLine("Wpisz swoje numery Lotto od 1 do 49: ");
            numChoice _numChoice = new numChoice();
            int[] _choice = new int[6];
            for (int i = 0; i <= 5; i++)
            {
                _choice[i] = _numChoice._Lotto();
                //_numChoice[i]._Lotto();
            }
            Results _Results = new Results();
            for (int i = 0; i<=5; i++)
            {
                for(int x=0; x<=5; x++)
                {

                if (_choice[x] == _Results.res[i])
                
                    score++;
                }
            }
            Console.WriteLine("Trafiles: " + score + " liczb");
        }
    }
    class numChoice
    {
        public int _numLotto;
        public int _Lotto()
        {
            _numLotto = int.Parse(Console.ReadLine());
            return _numLotto;
        }
    }
    class Results
    {
        Random rnd = new Random();
        public int[] res = new int[6];
        int _results;

        public Results()
        {
            for(int i = 0; i <=5; i++)
            {
                _results = rnd.Next(1, 49);
                if (!res.Contains(_results))
                    res[i] = _results;
                else
                    i--;
            }
            Console.WriteLine("Wyniki losowania to: " + " " + res[0] + " " + res[1] + " " + res[2] + " " + res[3] + " " + res[4] + " " + res[5]);
        }
    }

}
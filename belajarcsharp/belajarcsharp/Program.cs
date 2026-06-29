using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace blogoop1
{
    class mahasiswa
    {
        private string nama;
        private UInt32 NIM;
        private string jurusan;

        //public method
        public void getdata()
        {
            Console.Write("masukkan Nama mahasiswa : ");
            nama = Convert.ToString(Console.ReadLine());
            Console.Write("masukkan Nomor induk mahasiswa : ");
            NIM = Convert.ToUInt32(Console.ReadLine());
        }
        public void taruhdata()
        {
            Console.WriteLine(nama);
            Console.WriteLine(NIM);

        }
        public void Prodi()
        {
            if (NIM > 1000000000 && NIM < 2999999999)
            {
                Console.WriteLine("anda merupakan mahasiswa prodi S1 Teknik Informatika");
                jurusan = Convert.ToString(Console.ReadLine());
            }
            else if (NIM > 3000000000 && NIM < 4000000000)
            {
                Console.WriteLine("anda merupakan mahasiswa prodi D3 manajemen Informatika");
                jurusan = Convert.ToString(Console.ReadLine());
            }
            else
            {
                Console.WriteLine("anda bukan mahasiswa");


            }
        }
    }
    class Program
    {
        public static void Main(string[] args)
        {
            mahasiswa m1 = new mahasiswa();
            Console.WriteLine("masukkan data mahasiswa \n");

            m1.getdata();

            Console.WriteLine("data mahasiswa ");
            m1.taruhdata();

            m1.Prodi();
            Console.ReadKey(true);
        }
    }
}
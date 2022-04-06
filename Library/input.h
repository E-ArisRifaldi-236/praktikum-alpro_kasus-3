using namespace std;

class Input {
  public :
      void cetak(){
        cout << "Aplikasi Penjualan Ayam \n";
        cout << "Menu yang tersedia : ";
        cout << "1) Ayam Geprek Rp.21.000 \n";
        cout << "2) Ayam Goreng Rp.17.000 \n\n";
        cout << "3) Udang Goreng Rp.19.000 \n\n\n";
        cout << "4) Cumi Goreng Rp.20.000 \n\n\n\n";
        cout << "5) Ayam Bakar Rp.25.000 \n\n\n\n\n";
        cout << "Pesan Ayam Geprek  -> " ; cin >> bnyk_aymGPRK;
        cout << "Pesan Ayam Goreng  -> " ; cin >> bnyk_aymGR;
        cout << "Pesan Udang Goreng -> " ; cin >> bnyk_UdangGR;
        cout << "Pesan Cumi Goreng  -> " ; cin >> bnyk_CumiGR;
        cout << "Pesan Ayam Bakar  -> " ; cin >> bnyk_aymBKR;
      }
    void toFile(){
        tulis_data.open("api_data.txt");
        tulis_data << bnyk_aymGPRK << endl;
        tulis_data << bnyk_aymGR
        tulis_data << bnyk_UdangGR
        tulis_data << bnyk_CumiGR;
        tulis_data << bnyk_ayamBKR;
        tulis_data.close();
  private :
      ofstream tulis_data;
      int bnyk_aymGPRK, bnyk_ayamGR, bnyk_UdangGR, bnyk_CumiGR ,       bnyk aymBKR;
    }
};
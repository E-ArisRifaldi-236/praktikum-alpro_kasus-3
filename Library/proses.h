using namespace std;

class Proses 
{
  public :
      void cetak()
      {
        cout << "Anda Sebagai Proses\n";
      }
      void getData()
      {
          ambil_data.open("../dummy/out_input.txt);
          bool ayam_goreng=true; 
          while(!ambil_data.eof())
          {
            if (ayam_goreng)
            {
              ambil_data>>bnyk_aymGr;
              ayam_goreng = false;
            }
            else
            {
              ambil_data>>byn
            cout<<t<<endl;
          }
          
      }
  private :
  ifstream ambil_data;
  int bnyk_aymGPRK
  int bnyk_aymGR
  int bnyk_UdangGR
  int bnyk_CumiGR
  int bnyk_aymBKR
};
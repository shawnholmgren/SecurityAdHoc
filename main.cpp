// WORKING VERSION
// Shawn Holmgren
// Security Ad Hoc Assignment

#include <string>
#include <algorithm>
#include <iostream>
#include <array>

using namespace std;

int main() {
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";

  // for_each( alphabet.begin(), alphabet.end(), &doSomething);

  string ciphertext = "EV KLFGZXSH "
  "KMLTWDDUAZWNZTBERSSIXYZWGKTUEHPNZEHPOXTSWZBXVNDUTU "
  "FXGTL NXYWYXALJIZSWNGXLPZKUVYUVNGNNGJ "
  "PZFVDNKXCLOIYUTYAFYXZEMHXKWGLGAJJUVVIVOLHPOIFHHFBTY "
  "TZKZWGMKAIVNAVJYUEHGOHZGO X "
  "GXRAGYEZBEZWNVJKWZISINKVCGETUHYXINAJAFWQGXTSSH "
  "AZJZXXSSPPFCKGPNZGYAZCVHHRSSWKYMAIHKULVWHLXHGFMMJDFVSZUYNXTWHOLGEZUAZWOHYLXYCUSAFNGG " 
  "UUKVWHSSHJDUCUKBHSWNGXLPZGFSTAGHKGPNZKLWYX "
  "LIKMSHNKULOAXZYVNKULLNSZWGZUGHAPGNAVJGFDEWYZVANKULOAULX "
  "EIVDGXJPTUZKMSLCFCEWNUPXTATNKGETUAUPKAXYWLVV "
  "KXCRHPOIFGXRAGYEZBEZWGHWGBGMLLNFXGTL NAUCFNXJDTIDVCDUJLM "
  "CJLWZBXZAFMGSQZCGUOFNGGYKUVVJZCFAXRFQGXJVH AJULOAXZSLTOMLGET GYIGNAVJFN "
  "LKXZLPZGFDEWYZVANKUKJDKGXZWZBT WVLGBXHFQGZGHFVPFWXGYXICLJFZNLJFQA DFOFSESCLL FXGTL "
  "NAUCFJGCAXUTUWKRTTLRZSPOFN LWUHXGPOGXGLGYSIQZULOAYZSZZNZELOFVJLWSIJLWJCYMEIOD "
  "WZISPIVFXTATNS DGHS DKUULOZULOAULX EIVDSUFWJLXQVUSAFWM "
  "WIIEWQZVLPKTVDSUFMXJQXZSTAIBTUEYGK";

  string col1 = "";
  string col2 = "";
  string col3 = "";
  string col4 = "";
  string col5 = "";

  // FILL COLUMN 1
  for (int i = 0; i < (ciphertext.length()/5); i++)
  {
    col1 += ciphertext.at(i*5);
  }

  // FILL COLUMN 2
  for (int i = 0; i < (ciphertext.length()/5); i++)
  {
    col2 += ciphertext.at((i*5)+1);
  }

  // FILL COLUMN 3
  for (int i = 0; i < (ciphertext.length()/5); i++)
  {
    col3 += ciphertext.at((i*5)+2);
  }

  // PRINT COLUMN 1
  for (int i = 0; i < col1.length(); i++)
  {
    cout << col1.at(i) << " ";
  }

  cout << endl;
  cout << endl;

  // PRINT COLUMN 2
  for (int i = 0; i < col2.length(); i++)
  {
    cout << col2.at(i) << " ";
  }

  cout << endl;
  cout << endl;


  // PRINT COLUMN 3
  for (int i = 0; i < col3.length(); i++)
  {
    cout << col3.at(i) << " ";
  }


  cout << endl;
  cout << endl;

  int freq1[27];
  int freq2[27];
  int freq3[27];
  int freq4[27];
  int freq5[27];

  // FILL FREQUENCIES FOR COL 1
  for (int i = 0; i < alphabet.length(); i++)
  {
    for (int j = 0; j < col1.length(); j++)
    {
      if (alphabet.at(i) == col1.at(j))
        freq1[i] += 1;
    }
  }

  // FILL FREQUENCIES FOR COL 2
  for (int i = 0; i < alphabet.length(); i++)
  {
    for (int j = 0; j < col2.length(); j++)
    {
      if (alphabet.at(i) == col2.at(j))
        freq2[i] += 1;
    }
  }





  cout << endl;

  // PRINT COLUMN 1
  cout << "COL1" << endl;
  for (int i = 0; i < (sizeof(freq1)/4); i++)
  {
    cout << "'" << alphabet.at(i) << "'" << freq1[i] << endl;
  }

  cout << endl;

  // PRINT COLUMN 2
  cout << "COL2" << endl;
  for (int i = 0; i < (sizeof(freq2)/4); i++)
  {
    cout << "'" << alphabet.at(i) << "'" << freq2[i] << endl;
  }



  cout << endl;
  return 0;
}




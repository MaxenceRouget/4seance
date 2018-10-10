#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class etudiant{
public:
    string nom;
    int note;
};
int main()
{
  string chaine;
  int y;
  vector<etudiant> epsi;
  string tmp_name;
  int tmp_note;
      for(int i = 0;i<3;i++){
        cout <<"entrez le nom d'un etudiant"<<endl;
          cin >> tmp_name;
        cout << "entrez la note de l'étudiant"<<endl;
          cin>>tmp_note;
          epsi.push_back(etudiant());
          epsi[i].nom = tmp_name;
          epsi[i].note = tmp_note;
      };

      cout << "La liste des étudiants"<< endl;
        for (int i = 0;i<epsi.size();i++){
          cout << epsi[i].nom <<"                "<<epsi[i].note<<endl;
        };

        cout <<"recherche etudiant"<< endl;
        cin >> chaine;

        int i= 0;

          while(chaine != epsi[i].nom)
            {
              i++;
            };
              cout <<"la note est "<< epsi[i].note<<endl;
      return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int i=0;
  //creation du tableau
  vector<int> tab(3);

  tab[0]=3;
  tab[1]=4;
  tab[2]=5;

  //fonction push_back
  tab.push_back(1000);

  //affichage
  /*cout <<tab[0]<<endl;
  cout <<tab[1]<<endl;
  cout <<tab[2]<<endl;
  cout <<tab[3]<<endl;*/

  tab[3]= 10;
  cout << tab.size()<<endl;
    cout <<tab[3]<<endl;
while (i!=tab.size())
{
  cout <<tab[i]<<endl;
  i++;
}
  tab.pop_back(); //on vire la dernière ligne
return 0;
}

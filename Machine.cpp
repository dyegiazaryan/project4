#include"Machine.h"
#include"Rotor.h"
Machine::Machine(vector<Rotor> &rotorList, vector<char> &letter, vector<int> &numList)
{
    int multiplier, adder;

    ifstream inf;
    inf.open("Rotor.txt");

    while (!inf.eof())
    {
        inf >> multiplier;
        inf.ignore();
        inf >> adder;
        inf.ignore();

        if (!inf.eof())
        {
            rotorList.push_back(Rotor (multiplier, adder));
        }

    }

    inf.close();
  }


  void Machine::encode(vector<Rotor> &rotorList, vector<char> &letter)
  {

    cout<<"Enter in a sentence you want encrypted"<<endl;
    //cin.ignore(Text.length());
    getline(cin, Text);

    for(int i=0; i<Text.size(); ++i)
    {
      char character = Text[i];
      letter.push_back(character);
    }

    cout<<"Encrytped: "<<endl;
    for (int i=0; i<Text.size(); ++i)
    {
      int convert = (int)Text[i];
      int encoded = (convert * rotorList[i].getMultiplier()) + rotorList[i].getAdder();
      cout<<encoded<<" ";
    }
  }

  void Machine::decode(vector<Rotor> &rotorList, vector<int> &numList)
  {
    cout<<"Enter in an encrypted message you want decrypted (use -1 to denote end)"<<endl;

    while (numbers!=-1)
    {
      cin>>numbers;

      if (numbers!=-1)
      {
        numList.push_back(numbers);
      }
    }


    for (int i=0; i<rotorList.size(); ++i)
    {
    int decrypt = (numList[i] - rotorList[i].getAdder()) / rotorList[i].getMultiplier();
    //int decrypt = numList[i] - rotorList[i].getAdder();
    //decrypt/rotorList[i].getMultiplier();

    char decoded = char(decrypt);

    cout<<decoded;
    }
  }

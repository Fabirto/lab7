#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void saveToFile(const string& filename, const vector<string>& data)
{
   ofstream out;                   
   out.open(file);       //начинаем вводить в файл
   
   if (out.is_open()) {
       
       
   for (int i=0;i<data.size();i++)      // вводим в файл пока есть что вводить
   {
      out << data[i] << endl;
   }
   
   
   out.close(); }           //закрываем файл
}

void loadFromFile(const string& filename, vector<string>& outData)
{
    
   ifstream in;
   in.open(file);           // открываем
   
   string line;
   
   
   if (in.is_open())
   {
                                // если файл открыт то читаем и записываем
      while (getline(in,line))
      {
         outData.push_back(line);
      }
      
   }
   in.close(); //закрываем
}
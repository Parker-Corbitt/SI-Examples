/**
 *        @file: struct.cc
 *      @author: Parker Corbitt
 *        @date: April 02, 2024
 *       @brief: An example as to how structures work
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <random>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Quest
{
   string name;
   string description;
   int recommendedLevel;
   int reward;
   bool completed;
};

struct Story
{
   string title;
   string description;
   vector<Quest> quests;
   int completedQuests;
   bool completed;
};

vector<Quest> loadQuests(string filename);
void chooseQuest(Story &story);
bool tryQuest(Story &story, int questIndex);

void printArt(string filename);
void printQuests(Story &story);

int main(int argc, char const *argv[])
{
   printArt("ascii/title.txt");
   printArt("ascii/ascii.txt");
   Story actOne;
   actOne.quests = loadQuests("act1.txt");
   actOne.title = "Act 1";
   actOne.description = "The beginning of your journey.";
   actOne.completedQuests = 0;

   while (actOne.completedQuests < actOne.quests.size())
   {
      chooseQuest(actOne);
   }

   return 0;
} // main

vector<Quest> loadQuests(string filename)
{
   ifstream ins(filename);
   if (ins.fail())
   {
      cout << "Error opening file." << endl;
      exit(1);
   }

   vector<Quest> quests;
   string line;

   // Walk through the prototype of this loop
   while (getline(ins, line))
   {
      Quest quest;
      stringstream ss(line);
      string completed_str;

      // Why do I use getline here?
      getline(ss, quest.name, ',');
      getline(ss, quest.description, ',');

      // Why do I NOT use getline here?
      ss >> quest.recommendedLevel;
      ss.ignore(); // Ignore the comma
      ss >> quest.reward;
      ss.ignore(); // Ignore the comma

      getline(ss, completed_str);

      quest.completed = (completed_str == "true");

      quests.push_back(quest);
   }

   ins.close();
   return quests;
}

void chooseQuest(Story &story)
{
   int questIndex;
   cout << "Choose a quest!" << endl;
   printQuests(story);
   cout << "Your choice: ";
   cin >> questIndex;
   cout << "You have chosen to " << story.quests[questIndex - 1].name << endl;
   questIndex--;
   if (!story.quests[questIndex + 1].completed)
   {

      if (tryQuest(story, questIndex))
      {
         story.quests[questIndex + 1].completed = true;
         story.completedQuests++;
         printArt("ascii/ascii3.txt");
      }
      else
      {
         printArt("ascii/ascii4.txt");
         exit(0);
      }
   }
   else
   {
      cout << "You have already completed this quest!" << endl << "The town sings your praises!" << endl;
   }
   return;
}

void printQuests(Story &story)
{
   for (int i = 0; i < story.quests.size(); i++)
   {
      cout << i + 1 << ". " << story.quests[i].name << endl;
   }
   return;
}

bool tryQuest(Story &story, int questIndex)
{
   srand(time(0));                     // seed the random number generator
   int randomNumber = rand() % 10 + 1; // generate a random number between 1 and 10

   if (randomNumber <= 5)
   {
      return false; // quest fails
   }
   else
   {
      return true; // quest passes
   }
}

void printArt(string filename)
{

   ifstream ins(filename);
   if (ins.fail())
   {
      cout << "Error opening file." << endl;
      exit(1);
   }
   string line;
   while (getline(ins, line))
   {
      cout << line << endl;
      usleep(100000);
   }
   ins.close();
   return;
}

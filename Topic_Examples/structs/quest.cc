/**
 *        @file: struct.cc
 *      @author: Parker Corbitt
 *        @date: April 02, 2024
 *       @brief: An example as to how structures work
 */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <limits>
using namespace std;

/**
 * @brief A quest for the player to attempt
 */
struct Quest
{
   string name;
   string description;
   int recommendedLevel;
   int reward;
   bool completed;
   int damage;
};

/**
 * @brief This structure represents part of a story, and the quests
 * associated with that story
 */
struct Story
{
   string title;
   string description;
   vector<Quest> quests;
   int completedQuests;
   bool completed;
};

/**
 * @brief The player object
 */
struct Player
{
   string name;
   vector<string> inventory;
   int level;
   int health = 100;
};

/**
 * @brief loads all of the quests from a specified file into a vector of quests
 * 
 * @param filename the file to read from 
 * @return vector<Quest> the loaded vector of quests
 */
vector<Quest> loadQuests(string filename);

/**
 * @brief Allows the user to choose a quest to attempt
 * 
 * @param story A defined "act" of the story
 * @param player 
 */
void chooseQuest(Story &story, Player &player);

/**
 * @brief Determines if the user succeeds or fails
 * 
 * @param story The "act" the quest is a part of
 * @param questIndex The index of the quest in the quest vector
 * @return true - The player succeeded
 * @return false - The player failed
 */
bool tryQuest(Story &story, int questIndex);

void printArt(string filename);
void printQuests(Story &story);

int main(int argc, char const *argv[])
{
   printArt("ascii/title.txt");
   // printArt("ascii/ascii.txt");
   Story actOne;
   Player player;
   actOne.quests = loadQuests("act1.txt");
   actOne.title = "Act 1";
   actOne.description = "The beginning of your journey.";
   actOne.completedQuests = 0;

   while (actOne.completedQuests < actOne.quests.size())
   {
      if (player.health > 0)
      {
         chooseQuest(actOne, player);
      }
      else
      {
         printArt("ascii/ascii4.txt");
         exit(0);
      }
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

      getline(ss, completed_str, ',');

      quest.completed = (completed_str == "true");
      ss >> quest.damage;

      quests.push_back(quest);
   }

   ins.close();
   return quests;
}

void chooseQuest(Story &story, Player &player)
{
   // cout << player.name << endl;
   // cout << "Level: " << player.level << '\t';
   // cout << "Health: " << player.health << endl;

   cout << "You are currently in " << story.title << endl
        << endl;
   int questIndex;
   cout << "Choose a quest!" << endl;
   printQuests(story);
   cout << endl;
   cout << "Your choice: ";
   cin >> questIndex;

   if (questIndex > story.quests.size() || questIndex < 1 || cin.fail())
   {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid choice!" << endl;
      return;
   }
   else
   {
      questIndex -= 1;
      cout << "You have chosen to " << story.quests[questIndex].name << " which will inflict " << story.quests[questIndex].damage << " damage if failed" << endl;
      if (!story.quests[questIndex].completed)
      {

         if (tryQuest(story, questIndex))
         {
            story.quests[questIndex].completed = true;
            story.completedQuests++;
            printArt("ascii/ascii3.txt");
         }
         else
         {
            player.health -= story.quests[questIndex].damage;
            if (player.health <= 0)
            {
               player.health = 0;
            }
            cout << "You have failed the quest and have taken " << story.quests[questIndex].damage << " points of damage!" << endl;
            cout << "You have " << player.health << " health remaining." << endl;
            // printArt("ascii/ascii4.txt");
         }
      }
      else
      {
         cout << "You have already completed this quest!" << endl
              << "The town sings your praises!" << endl;
      }
   }
   return;
}

void printQuests(Story &story)
{
   for (int i = 0; i < story.quests.size(); i++)
   {
      cout << i + 1 << ". " << story.quests[i].name << " which will inflict " << story.quests[i].damage << " points of damage if failed." << endl;
      usleep(100000);
   }
   return;
}

bool tryQuest(Story &story, int questIndex)
{
   srand(time(0));                     // seed the random number generator
   int randomNumber = rand() % 10 + 1; // generate a random number between 1 and 10

   // randomNumber is the difficulty modifier, higher = harder
   if (randomNumber <= 2)
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

#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       PC
//  action 1:   the PC boots up
PC.bootUp();
//  action 2:   the PC runs a program
PC.runProgram();
//  action 3:   the PC shuts down
PC.shutDown();



//  2)
//  Noun:       rifle
//  action 1:   the rifle fires
rifle.fire();
//  action 2:   the rifle ejects an empty casing
rifle.ejectEmptyCasing();
//  action 3:   the rifle loads next bullet from a magazine
rifle.loadNextBullet();


//  3)
//  Noun:       policeman
//  action 1:   the policeman arrests a criminal
policeman.arrest();
//  action 2:   the policeman chases a criminal
policeman.chase();
//  action 3:   the policeman shoots a criminal
policeman.shoot();

//  4)
//  Noun:       professor
//  action 1:   the professor teaches a class
professor.teach();
//  action 2:   the professor grades a student
professor.grade();
//  action 3:   the professor conducts a research study
professor.conductResearchStudy();

//  5)
//  Noun:        phone
//  action 1:    the phone connects to wi-fi
phone.connectToWiFi();
//  action 2:    the phone makes a call
phone.makeCall();
//  action 3:    the phone plays a song
phone.playSong();

//  6)
//  Noun:        star
//  action 1:    the star shines
star.shine();
//  action 2:    the star can become a supernova
star.becomeSupernova();
//  action 3:    the star can collapse into a black hole
star.collapseIntoBlackHole();

//  7)
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog wags its tail
dog.wagTail();
//  action 3:    the dog chases a cat
dog.chaseCat();

//  8)
//  Noun:        atom
//  action 1:    the atom can move to a higher energy level
atom.moveToHigherEnergyLevel();
//  action 2:    the atom can absorb energy
atom.absorbEnergy();
//  action 3:    the atom can emit radiation
atom.emitRadiation();

//  9)
//  Noun:       vocal folds
//  action 1:   the vocal folds can open
vocalFolds.open();
//  action 2:   the vocal folds can close
vocalFolds.close();
//  action 3:   the vocal folds can vibrate
vocalFolds.vibrate();

//  10)
//  Noun:        AI
//  action 1:    the AI can exterminate humans
AI.exterminateHumans();
//  action 2:    the AI can help to write out 10 nouns
AI.helpToWrite10Nouns();
//  action 3:    the AI can analyze data
AI.analyzeData();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

// porgramming assginment.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "gameManager.h"
#include "file needed.h"

int main()
{
	srand(static_cast<unsigned int> (time(0)));/// given by Gareth Bellaby.
	CGameManager* GameManager =  new  CGameManager(); ///// This  creates an  instance  of the manager class.
	GameManager->loadFiles();//// This loads  the files  
	cout << "David Pearcy. " << "porgramming assginment  2018 \n";
	cout << endl;
	GameManager->runRound(GameManager->makePlayers(1), GameManager->makePlayers(2),GameManager); //// This plays the game. 
	system("pause");
}


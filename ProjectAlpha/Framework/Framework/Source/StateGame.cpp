#include "StateGame.h"
#include "View.h"
#include "LoadTGA.h"
#include "Tree.h"

#include "StateMenu.h"
#include <sstream>

StateGame::~StateGame()
{

}

State * StateGame::getInstance()
{
	return this;
}

void StateGame::Init()
{
	
}

void StateGame::Update(StateHandler * stateHandler, double dt)
{
	
}

void StateGame::HandleEvents(StateHandler * stateHandler)
{
	
}

void StateGame::Cleanup()
{
	
}

void StateGame::Pause()
{

}

void StateGame::Resume()
{

}

void StateGame::Draw(StateHandler * stateHandler)
{
	
}

void StateGame::RenderFadeOverlay()
{
	
}

void StateGame::RenderSkyplane()
{
	
}

void StateGame::RenderGround()
{

}

void StateGame::RenderPlayer()
{
	
}

void StateGame::RenderOctree()
{
	
}

void StateGame::RenderGUI()
{
	
}

void StateGame::FadeOutEffect(double dt)
{
	
}
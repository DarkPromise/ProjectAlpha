#include "StateGame.h"
#include "View.h"
#include "LoadTGA.h"
#include "Tree.h"

#include "StateMenu.h"
#include <sstream>

StateGame::~StateGame()
{
	if (!m_meshList.empty())
	{
		for (int i = 0; i < m_meshList.size(); i++)
		{
			delete m_meshList[i];
		}
	}
	m_meshList.clear();
	m_meshList.~vector(); // There will be a memory leak if you dont deallocate the memory given to the vector itself
}

State * StateGame::getInstance()
{
	return this;
}

void StateGame::Init()
{
	theView->LoadPerspectiveCamera(90);

	// Create Meshes
	Mesh * newMesh;
	newMesh = MeshBuilder::GenerateText("Source Font", 16, 16);
	newMesh->textureID = LoadTGA("Fonts//source.tga");
	newMesh->alpha = 1.f;
	m_meshList.push_back(newMesh);
}

void StateGame::Update(StateHandler * stateHandler, double dt)
{
	theView->Update(dt);
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
	theView->RenderTextOnScreen(m_meshList[TEXT_FONT], "Alpha Test", Color(0, 1, 0), 24.f, 2, 1);
	theView->SwapBuffers();
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
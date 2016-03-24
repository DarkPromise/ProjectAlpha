#ifndef STATE_GAME_H	
#define STATE_GAME_H

#include "State.h"
#include <string>
#include "MeshBuilder.h"

#include "Camera.h"
#include "LuaReader.h"

class StateGame : public State
{
public:
	StateGame(std::string name, View * theView, int Level = 1) : State(name, theView)
	{ 
		this->theView = theView; 
		m_bStartFadeOut = false;
	}
	~StateGame();

	State * getInstance();
	void Init();
	void Update(StateHandler * stateHandler, double dt);
	void Cleanup();
	void Pause();
	void Resume();
	void HandleEvents(StateHandler * stateHandler);
	void Draw(StateHandler * stateHandler);

	// Rendering Functions
	void RenderFadeOverlay();
	void RenderSkyplane();
	void RenderGround();
	void RenderPlayer();
	void RenderOctree();
	void RenderBorders();
	void RenderGUI();

	// Fade Effect
	void FadeOutEffect(double dt);
private:
	Camera * theCamera;

	std::vector<Mesh*> m_meshList;
	std::vector<Entity*> m_entityList;

	int m_iScore;

	View * theView;

	// Fade Effect
	bool m_bStartFadeOut;
};

#endif

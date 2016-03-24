#ifndef STATE_MENU_H
#define STATE_MENU_H

#include "State.h"
#include "GuiButton.h"

#define TEXT_FONT 0

class StateMenu : public State
{
public:
	enum MENU_BUTTONS
	{

	};

	StateMenu(std::string name, View * theView, bool alpha) : State(name, theView)
	{
		this->theView = theView;
		this->alpha = alpha;
	}
	~StateMenu();

	State* getInstance();
	void Init();
	void Update(StateHandler * stateHandler, double dt);
	void Cleanup();
	void Pause();
	void Resume();
	void HandleEvents(StateHandler * stateHandler);
	void Draw(StateHandler * stateHandler);

	// State Specific Functions
	void UpdateSelection(StateHandler * stateHandler);
	void FadeInEffect(double dt);
	void FadeOutEffect(double dt, StateHandler * stateHandler);

	// Rendering Functions
	void RenderBackground();
	void RenderButtons();
private:
	View * theView;
	std::vector<Mesh*> m_meshList;
	std::vector<Gui*> m_guiList;

	// Fade Effect
	double m_dFadeDelay;
	bool m_bStartFadeIn;
	bool m_bStartFadeOut;
	bool alpha;
	static bool runOnce;
};

#endif
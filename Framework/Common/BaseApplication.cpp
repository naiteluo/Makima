#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int Ma::BaseApplication::Initialize()
{
	m_bQuit = false;

	return 0;
}


// Finalize all sub modules and clean up all runtime temporary files.
void Ma::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void Ma::BaseApplication::Tick()
{
}

bool Ma::BaseApplication::IsQuit()
{
	return m_bQuit;
}
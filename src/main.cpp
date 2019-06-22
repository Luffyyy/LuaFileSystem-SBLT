// Include SuperBLT
#include <superblt_flat.h>
#include "lfs.h"

// See superblt_flat.h for a description of what these functions do

void Plugin_Init() {
	// Put your one-time initialization code here
}

void Plugin_Update() {
	// Put your per-frame update code here
}

void Plugin_Setup_Lua(lua_State *L) {
	// Deprecated, see this function's documentation (in superblt_flat.h) for more detail
	luaopen_lfs(L);
}

//Doesn't seem to work. I have to use the deprecated method instead.
int Plugin_PushLua(lua_State *L) {
	// Put your Lua setup code here
	// Please note that this will likely be called many times, so
	//  don't do actual important setup here - use Plugin_Init for that.
	// More specifically, this is called every time blt.load_native is called
	//  for this DLL, even if it has already been loaded.

	// And read this until you understand what's happening: https://www.lua.org/pil/24.html
	// For a comprehensive reference of what all the functions do, please
	// read the Lua 5.1 manual:	http://www.lua.org/manual/5.1/manual.html
	// (note that on Windows, only some of the functions in the manual are avaiable).

	// Create a Lua table
	//lua_newtable(L);

	// Add a hello-world string to it
	//lua_pushstring(L, "Hello, World!");
	///lua_setfield(L, -2, "mystring");

	// Add a C function to it
	//lua_pushcfunction(L, say_hello);
	//lua_setfield(L, -2, "myfunction");

	// Now return the table to Lua
	
	return 1;
}

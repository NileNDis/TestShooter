Create a game, a first-person shooter, in which there will be N static targets on the stage. By default, the player's weapon does not fire when the fire button is pressed.
Each target must receive damage according to the same principle. The target receives damage when a projectile or bullet (implementation optional) of the player reaches it. She should have a logical scale of lives and when it ends, the target should disappear from the level.
The target must be implemented in the engine as a Blueprint inherited from a C++ class.
Each target should be considered as a separate case, not related to other targets.
Mandatory requirements:
The player can shoot at the first target only if he approaches it within 500 units.
The player can shoot at the second target only if he aimed directly at it
The player can only shoot at the third target if it is within a certain radius from the center of the screen
The life parameters of each target must be a parameter in the Blueprint.
In the GameMode of the game make an array of pointers to all the targets that are on the map. While playing in a separate thread, you should keep this array sorted with up-to-date data.
Save the target's HP state to disk and make sure that the next time you start the map, their HP is loaded from the saved data (make functionality so that you can restore the targets during the game)

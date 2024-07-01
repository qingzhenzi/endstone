

# Class endstone::Player



[**ClassList**](annotated.md) **>** [**endstone**](namespaceendstone.md) **>** [**Player**](classendstone_1_1Player.md)



_Represents a player._ 

* `#include <endstone/player.h>`



Inherits the following classes: [endstone::Actor](classendstone_1_1Actor.md)






























































































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Player**](#function-player-13) () = default<br> |
|   | [**Player**](#function-player-23) (const [**Player**](classendstone_1_1Player.md) &) = delete<br> |
|   | [**Player**](#function-player-33) ([**Player**](classendstone_1_1Player.md) &&) = delete<br> |
| virtual [**Player**](classendstone_1_1Player.md) \* | [**asPlayer**](#function-asplayer) () override const<br>_Gets a_ [_**CommandSender**_](classendstone_1_1CommandSender.md) _as_[_**Player**_](classendstone_1_1Player.md) _._ |
| virtual const [**SocketAddress**](classendstone_1_1SocketAddress.md) & | [**getAddress**](#function-getaddress) () const = 0<br>_Gets the socket address of this player._  |
| virtual bool | [**getAllowFlight**](#function-getallowflight) () const = 0<br>_Determines if the_ [_**Player**_](classendstone_1_1Player.md) _is allowed to fly via jump key double-tap._ |
| virtual [**endstone::UUID**](classendstone_1_1UUID.md) | [**getDeviceId**](#function-getdeviceid) () const = 0<br>_Gets the player's current device id._  |
| virtual std::string | [**getDeviceOS**](#function-getdeviceos) () const = 0<br>_Gets the player's current device's operation system (OS)._  |
| virtual int | [**getExpLevel**](#function-getexplevel) () const = 0<br>_Gets the players current experience level._  |
| virtual float | [**getExpProgress**](#function-getexpprogress) () const = 0<br>_Gets the players current experience progress towards the next level._  |
| virtual float | [**getFlySpeed**](#function-getflyspeed) () const = 0<br>_Gets the current allowed speed that a client can fly._  |
| virtual GameMode | [**getGameMode**](#function-getgamemode) () const = 0<br>_Gets this player's current GameMode._  |
| virtual [**PlayerInventory**](classendstone_1_1PlayerInventory.md) & | [**getInventory**](#function-getinventory) () const = 0<br>_Get the player's inventory._  |
| virtual std::string | [**getLocale**](#function-getlocale) () const = 0<br>_Gets the player's current locale._  |
| virtual std::chrono::milliseconds | [**getPing**](#function-getping) () const = 0<br>_Gets the player's average ping._  |
| virtual int | [**getTotalExp**](#function-gettotalexp) () const = 0<br>_Gets the players total experience points._  |
| virtual [**endstone::UUID**](classendstone_1_1UUID.md) | [**getUniqueId**](#function-getuniqueid) () const = 0<br>_Returns the_ [_**UUID**_](classendstone_1_1UUID.md) _of this player._ |
| virtual float | [**getWalkSpeed**](#function-getwalkspeed) () const = 0<br>_Gets the current allowed speed that a client can walk._  |
| virtual void | [**giveExp**](#function-giveexp) (int amount) = 0<br>_Gives the player the amount of experience specified._  |
| virtual void | [**giveExpLevels**](#function-giveexplevels) (int amount) = 0<br>_Gives the player the amount of experience levels specified._  |
| virtual bool | [**isFlying**](#function-isflying) () const = 0<br>_Checks to see if this player is currently flying or not._  |
| virtual void | [**kick**](#function-kick) (std::string message) const = 0<br>_Kicks player with custom kick message._  |
|  [**Player**](classendstone_1_1Player.md) & | [**operator=**](#function-operator) (const [**Player**](classendstone_1_1Player.md) &) = delete<br> |
|  [**Player**](classendstone_1_1Player.md) & | [**operator=**](#function-operator_1) ([**Player**](classendstone_1_1Player.md) &&) = delete<br> |
| virtual bool | [**performCommand**](#function-performcommand) (std::string command) const = 0<br>_Makes the player perform the given command._  |
| virtual void | [**sendPopup**](#function-sendpopup) (std::string message) const = 0<br>_Sends this player a popup message._  |
| virtual void | [**sendTip**](#function-sendtip) (std::string message) const = 0<br>_Sends this player a tip message._  |
| virtual void | [**setAllowFlight**](#function-setallowflight) (bool flight) = 0<br>_Sets if the_ [_**Player**_](classendstone_1_1Player.md) _is allowed to fly via jump key double-tap._ |
| virtual void | [**setExpLevel**](#function-setexplevel) (int level) = 0<br>_Sets the players current experience level._  |
| virtual void | [**setExpProgress**](#function-setexpprogress) (float progress) = 0<br>_Sets the players current experience progress towards the next level._  |
| virtual void | [**setFlySpeed**](#function-setflyspeed) (float value) const = 0<br> |
| virtual void | [**setFlying**](#function-setflying) (bool value) = 0<br>_Makes this player start or stop flying._  |
| virtual void | [**setGameMode**](#function-setgamemode) (GameMode mode) = 0<br>_Sets this player's current GameMode._  |
| virtual void | [**setWalkSpeed**](#function-setwalkspeed) (float value) const = 0<br> |
| virtual void | [**updateCommands**](#function-updatecommands) () const = 0<br>_Send the list of commands to the client._  |
|   | [**~Player**](#function-player) () override<br> |


## Public Functions inherited from endstone::Actor

See [endstone::Actor](classendstone_1_1Actor.md)

| Type | Name |
| ---: | :--- |
|   | [**Actor**](classendstone_1_1Actor.md#function-actor-13) () = default<br> |
|   | [**Actor**](classendstone_1_1Actor.md#function-actor-23) (const [**Actor**](classendstone_1_1Actor.md) &) = delete<br> |
|   | [**Actor**](classendstone_1_1Actor.md#function-actor-33) ([**Actor**](classendstone_1_1Actor.md) &&) = delete<br> |
| virtual [**Dimension**](classendstone_1_1Dimension.md) & | [**getDimension**](classendstone_1_1Actor.md#function-getdimension) () const = 0<br> |
| virtual [**Level**](classendstone_1_1Level.md) & | [**getLevel**](classendstone_1_1Actor.md#function-getlevel) () const = 0<br> |
| virtual [**Location**](classendstone_1_1Location.md) | [**getLocation**](classendstone_1_1Actor.md#function-getlocation) () const = 0<br> |
| virtual std::uint64\_t | [**getRuntimeId**](classendstone_1_1Actor.md#function-getruntimeid) () const = 0<br> |
| virtual [**Vector**](classendstone_1_1Vector.md)&lt; float &gt; | [**getVelocity**](classendstone_1_1Actor.md#function-getvelocity) () const = 0<br> |
| virtual bool | [**isInLava**](classendstone_1_1Actor.md#function-isinlava) () const = 0<br> |
| virtual bool | [**isInWater**](classendstone_1_1Actor.md#function-isinwater) () const = 0<br> |
| virtual bool | [**isOnGround**](classendstone_1_1Actor.md#function-isonground) () const = 0<br> |
|  [**Actor**](classendstone_1_1Actor.md) & | [**operator=**](classendstone_1_1Actor.md#function-operator) (const [**Actor**](classendstone_1_1Actor.md) &) = delete<br> |
|  [**Actor**](classendstone_1_1Actor.md) & | [**operator=**](classendstone_1_1Actor.md#function-operator_1) ([**Actor**](classendstone_1_1Actor.md) &&) = delete<br> |
|   | [**~Actor**](classendstone_1_1Actor.md#function-actor) () override<br> |


## Public Functions inherited from endstone::CommandSender

See [endstone::CommandSender](classendstone_1_1CommandSender.md)

| Type | Name |
| ---: | :--- |
|   | [**CommandSender**](classendstone_1_1CommandSender.md#function-commandsender) () = default<br> |
| virtual [**CommandSender**](classendstone_1_1CommandSender.md) \* | [**asCommandSender**](classendstone_1_1CommandSender.md#function-ascommandsender) () override const<br>_Casts a_ [_**Permissible**_](classendstone_1_1Permissible.md) _as_[_**CommandSender**_](classendstone_1_1CommandSender.md) _._ |
| virtual [**CommandSender**](classendstone_1_1CommandSender.md) \* | [**asConsole**](classendstone_1_1CommandSender.md#function-asconsole) () const<br>_Gets a_ [_**CommandSender**_](classendstone_1_1CommandSender.md) _as Console._ |
| virtual [**Player**](classendstone_1_1Player.md) \* | [**asPlayer**](classendstone_1_1CommandSender.md#function-asplayer) () const<br>_Gets a_ [_**CommandSender**_](classendstone_1_1CommandSender.md) _as_[_**Player**_](classendstone_1_1Player.md) _._ |
| virtual std::string | [**getName**](classendstone_1_1CommandSender.md#function-getname) () const = 0<br>_Gets the name of this command sender._  |
| virtual [**Server**](classendstone_1_1Server.md) & | [**getServer**](classendstone_1_1CommandSender.md#function-getserver) () const = 0<br>_Returns the server instance that this command is running on._  |
| virtual void | [**sendErrorMessage**](classendstone_1_1CommandSender.md#function-senderrormessage-13) (const std::string & message) const = 0<br>_Sends this sender a error message._  |
| virtual void | [**sendErrorMessage**](classendstone_1_1CommandSender.md#function-senderrormessage-23) (const [**Translatable**](classendstone_1_1Translatable.md) & message) const = 0<br>_Sends this sender a translatable error message._  |
|  void | [**sendErrorMessage**](classendstone_1_1CommandSender.md#function-senderrormessage-33) (const fmt::format\_string&lt; Args... &gt; format, Args &&... args) const<br> |
| virtual void | [**sendMessage**](classendstone_1_1CommandSender.md#function-sendmessage-13) (const std::string & message) const = 0<br>_Sends this sender a message._  |
| virtual void | [**sendMessage**](classendstone_1_1CommandSender.md#function-sendmessage-23) (const [**Translatable**](classendstone_1_1Translatable.md) & message) const = 0<br>_Sends this sender a translatable message._  |
|  void | [**sendMessage**](classendstone_1_1CommandSender.md#function-sendmessage-33) (const fmt::format\_string&lt; Args... &gt; format, Args &&... args) const<br> |
|   | [**~CommandSender**](classendstone_1_1CommandSender.md#function-commandsender) () override<br> |


## Public Functions inherited from endstone::Permissible

See [endstone::Permissible](classendstone_1_1Permissible.md)

| Type | Name |
| ---: | :--- |
| virtual [**PermissionAttachment**](classendstone_1_1PermissionAttachment.md) \* | [**addAttachment**](classendstone_1_1Permissible.md#function-addattachment-12) ([**Plugin**](classendstone_1_1Plugin.md) & plugin, const std::string & name, bool value) = 0<br> |
| virtual [**PermissionAttachment**](classendstone_1_1PermissionAttachment.md) \* | [**addAttachment**](classendstone_1_1Permissible.md#function-addattachment-22) ([**Plugin**](classendstone_1_1Plugin.md) & plugin) = 0<br> |
| virtual [**CommandSender**](classendstone_1_1CommandSender.md) \* | [**asCommandSender**](classendstone_1_1Permissible.md#function-ascommandsender) () const = 0<br> |
| virtual std::unordered\_set&lt; [**PermissionAttachmentInfo**](classendstone_1_1PermissionAttachmentInfo.md) \* &gt; | [**getEffectivePermissions**](classendstone_1_1Permissible.md#function-geteffectivepermissions) () const = 0<br> |
| virtual bool | [**hasPermission**](classendstone_1_1Permissible.md#function-haspermission-12) (std::string name) const = 0<br> |
| virtual bool | [**hasPermission**](classendstone_1_1Permissible.md#function-haspermission-22) (const [**Permission**](classendstone_1_1Permission.md) & perm) const = 0<br> |
| virtual bool | [**isOp**](classendstone_1_1Permissible.md#function-isop) () const = 0<br>_Checks if this object is a server operator._  |
| virtual bool | [**isPermissionSet**](classendstone_1_1Permissible.md#function-ispermissionset-12) (std::string name) const = 0<br> |
| virtual bool | [**isPermissionSet**](classendstone_1_1Permissible.md#function-ispermissionset-22) (const [**Permission**](classendstone_1_1Permission.md) & perm) const = 0<br> |
| virtual void | [**recalculatePermissions**](classendstone_1_1Permissible.md#function-recalculatepermissions) () = 0<br> |
| virtual bool | [**removeAttachment**](classendstone_1_1Permissible.md#function-removeattachment) ([**PermissionAttachment**](classendstone_1_1PermissionAttachment.md) & attachment) = 0<br> |
| virtual void | [**setOp**](classendstone_1_1Permissible.md#function-setop) (bool value) = 0<br>_Sets the operator status of this object._  |
| virtual  | [**~Permissible**](classendstone_1_1Permissible.md#function-permissible) () = default<br> |










































































































## Public Functions Documentation




### function Player [1/3]

```C++
endstone::Player::Player () = default
```




<hr>



### function Player [2/3]

```C++
endstone::Player::Player (
    const Player &
) = delete
```




<hr>



### function Player [3/3]

```C++
endstone::Player::Player (
    Player &&
) = delete
```




<hr>



### function asPlayer 

_Gets a_ [_**CommandSender**_](classendstone_1_1CommandSender.md) _as_[_**Player**_](classendstone_1_1Player.md) _._
```C++
inline virtual Player * endstone::Player::asPlayer () override const
```





**Returns:**

[**Player**](classendstone_1_1Player.md), nullptr if not a [**Player**](classendstone_1_1Player.md) 





        
Implements [*endstone::CommandSender::asPlayer*](classendstone_1_1CommandSender.md#function-asplayer)


<hr>



### function getAddress 

_Gets the socket address of this player._ 
```C++
virtual const SocketAddress & endstone::Player::getAddress () const = 0
```





**Returns:**

the player's socket address 





        

<hr>



### function getAllowFlight 

_Determines if the_ [_**Player**_](classendstone_1_1Player.md) _is allowed to fly via jump key double-tap._
```C++
virtual bool endstone::Player::getAllowFlight () const = 0
```





**Returns:**

True if the player is allowed to fly. 





        

<hr>



### function getDeviceId 

_Gets the player's current device id._ 
```C++
virtual endstone::UUID endstone::Player::getDeviceId () const = 0
```





**Returns:**

the player's device id 





        

<hr>



### function getDeviceOS 

_Gets the player's current device's operation system (OS)._ 
```C++
virtual std::string endstone::Player::getDeviceOS () const = 0
```





**Returns:**

the player's device OS 





        

<hr>



### function getExpLevel 

_Gets the players current experience level._ 
```C++
virtual int endstone::Player::getExpLevel () const = 0
```





**Returns:**

Current experience level 





        

<hr>



### function getExpProgress 

_Gets the players current experience progress towards the next level._ 
```C++
virtual float endstone::Player::getExpProgress () const = 0
```



This is a percentage value. 0.0 is "no progress" and 1.0 is "next level".




**Returns:**

Current experience points 





        

<hr>



### function getFlySpeed 

_Gets the current allowed speed that a client can fly._ 
```C++
virtual float endstone::Player::getFlySpeed () const = 0
```





**Returns:**

The current allowed speed, default is 0.05. 





        

<hr>



### function getGameMode 

_Gets this player's current GameMode._ 
```C++
virtual GameMode endstone::Player::getGameMode () const = 0
```





**Returns:**

Current game mode 





        

<hr>



### function getInventory 

_Get the player's inventory._ 
```C++
virtual PlayerInventory & endstone::Player::getInventory () const = 0
```





**Returns:**

The inventory of the player, this also contains the armor slots. 





        

<hr>



### function getLocale 

_Gets the player's current locale._ 
```C++
virtual std::string endstone::Player::getLocale () const = 0
```





**Returns:**

the player's locale 





        

<hr>



### function getPing 

_Gets the player's average ping._ 
```C++
virtual std::chrono::milliseconds endstone::Player::getPing () const = 0
```





**Returns:**

player ping 





        

<hr>



### function getTotalExp 

_Gets the players total experience points._ 
```C++
virtual int endstone::Player::getTotalExp () const = 0
```



This refers to the total amount of experience the player has collected over time and is not currently displayed to the client.




**Returns:**

Current total experience points 





        

<hr>



### function getUniqueId 

_Returns the_ [_**UUID**_](classendstone_1_1UUID.md) _of this player._
```C++
virtual endstone::UUID endstone::Player::getUniqueId () const = 0
```





**Returns:**

[**Player**](classendstone_1_1Player.md) [**UUID**](classendstone_1_1UUID.md) 





        

<hr>



### function getWalkSpeed 

_Gets the current allowed speed that a client can walk._ 
```C++
virtual float endstone::Player::getWalkSpeed () const = 0
```





**Returns:**

The current allowed speed, default is 0.10. 





        

<hr>



### function giveExp 

_Gives the player the amount of experience specified._ 
```C++
virtual void endstone::Player::giveExp (
    int amount
) = 0
```





**Parameters:**


* `amount` Exp amount to give 




        

<hr>



### function giveExpLevels 

_Gives the player the amount of experience levels specified._ 
```C++
virtual void endstone::Player::giveExpLevels (
    int amount
) = 0
```





**Parameters:**


* `amount` amount of experience levels to give or take 




        

<hr>



### function isFlying 

_Checks to see if this player is currently flying or not._ 
```C++
virtual bool endstone::Player::isFlying () const = 0
```





**Returns:**

True if the player is flying, else false. 





        

<hr>



### function kick 

_Kicks player with custom kick message._ 
```C++
virtual void endstone::Player::kick (
    std::string message
) const = 0
```





**Parameters:**


* `message` kick message 




        

<hr>



### function operator= 

```C++
Player & endstone::Player::operator= (
    const Player &
) = delete
```




<hr>



### function operator= 

```C++
Player & endstone::Player::operator= (
    Player &&
) = delete
```




<hr>



### function performCommand 

_Makes the player perform the given command._ 
```C++
virtual bool endstone::Player::performCommand (
    std::string command
) const = 0
```





**Parameters:**


* `command` [**Command**](classendstone_1_1Command.md) to perform 



**Returns:**

true if the command was successful, otherwise false 





        

<hr>



### function sendPopup 

_Sends this player a popup message._ 
```C++
virtual void endstone::Player::sendPopup (
    std::string message
) const = 0
```





**Parameters:**


* `message` Message to be displayed 




        

<hr>



### function sendTip 

_Sends this player a tip message._ 
```C++
virtual void endstone::Player::sendTip (
    std::string message
) const = 0
```





**Parameters:**


* `message` Message to be displayed 




        

<hr>



### function setAllowFlight 

_Sets if the_ [_**Player**_](classendstone_1_1Player.md) _is allowed to fly via jump key double-tap._
```C++
virtual void endstone::Player::setAllowFlight (
    bool flight
) = 0
```





**Parameters:**


* `flight` If flight should be allowed. 




        

<hr>



### function setExpLevel 

_Sets the players current experience level._ 
```C++
virtual void endstone::Player::setExpLevel (
    int level
) = 0
```





**Parameters:**


* `level` New experience level 




        

<hr>



### function setExpProgress 

_Sets the players current experience progress towards the next level._ 
```C++
virtual void endstone::Player::setExpProgress (
    float progress
) = 0
```



This is a percentage value. 0.0 is "no progress" and 1.0 is "next level".




**Parameters:**


* `progress` New experience progress 




        

<hr>



### function setFlySpeed 


```C++
virtual void endstone::Player::setFlySpeed (
    float value
) const = 0
```



Sets the speed at which a client will fly.




**Parameters:**


* `value` The new speed. 




        

<hr>



### function setFlying 

_Makes this player start or stop flying._ 
```C++
virtual void endstone::Player::setFlying (
    bool value
) = 0
```





**Parameters:**


* `value` True to fly. 




        

<hr>



### function setGameMode 

_Sets this player's current GameMode._ 
```C++
virtual void endstone::Player::setGameMode (
    GameMode mode
) = 0
```





**Parameters:**


* `mode` New game mode 




        

<hr>



### function setWalkSpeed 


```C++
virtual void endstone::Player::setWalkSpeed (
    float value
) const = 0
```



Sets the speed at which a client will walk.




**Parameters:**


* `value` The new speed. 




        

<hr>



### function updateCommands 

_Send the list of commands to the client._ 
```C++
virtual void endstone::Player::updateCommands () const = 0
```



Generally useful to ensure the client has a complete list of commands after permission changes are done. 


        

<hr>



### function ~Player 

```C++
endstone::Player::~Player () override
```




<hr>

------------------------------
The documentation for this class was generated from the following file `include/endstone/player.h`


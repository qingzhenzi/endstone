

# Class endstone::Server



[**ClassList**](annotated.md) **>** [**endstone**](namespaceendstone.md) **>** [**Server**](classendstone_1_1Server.md)



_Represents a server implementation._ 

* `#include <endstone/server.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const std::string | [**BroadcastChannelAdmin**](#variable-broadcastchanneladmin)   = = "endstone.broadcast.admin"<br>_Used for all administrative messages, such as an operator using a command._  |
|  const std::string | [**BroadcastChannelUser**](#variable-broadcastchanneluser)   = = "endstone.broadcast.user"<br>_Used for all announcement messages, such as informing users that a player has joined._  |














## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Server**](#function-server-12) () = default<br> |
|   | [**Server**](#function-server-22) (const [**Server**](classendstone_1_1Server.md) &) = delete<br> |
| virtual void | [**broadcast**](#function-broadcast) (const std::string & message, const std::string & permission) const = 0<br>_Broadcasts the specified message to every user with the given permission name._  |
| virtual void | [**broadcastMessage**](#function-broadcastmessage-12) (const std::string & message) const = 0<br>_Broadcasts the specified message to every user with permission endstone.broadcast.user._  |
|  void | [**broadcastMessage**](#function-broadcastmessage-22) (const fmt::format\_string&lt; Args... &gt; format, Args &&... args) const<br> |
| virtual bool | [**dispatchCommand**](#function-dispatchcommand) ([**CommandSender**](classendstone_1_1CommandSender.md) & sender, std::string command) const = 0<br>_Dispatches a command on this server, and executes it if found._  |
| virtual [**CommandSender**](classendstone_1_1CommandSender.md) & | [**getCommandSender**](#function-getcommandsender) () const = 0<br>_Gets a_ [_**CommandSender**_](classendstone_1_1CommandSender.md) _for this server._ |
| virtual [**Level**](classendstone_1_1Level.md) \* | [**getLevel**](#function-getlevel) (std::string name) const = 0<br>_Gets the level with the given name._  |
| virtual std::vector&lt; [**Level**](classendstone_1_1Level.md) \* &gt; | [**getLevels**](#function-getlevels) () const = 0<br>_Gets a list of all levels on this server._  |
| virtual [**Logger**](classendstone_1_1Logger.md) & | [**getLogger**](#function-getlogger) () const = 0<br>_Returns the primary logger associated with this server instance._  |
| virtual int | [**getMaxPlayers**](#function-getmaxplayers) () const = 0<br>_Get the maximum amount of players which can login to this server._  |
| virtual std::string | [**getMinecraftVersion**](#function-getminecraftversion) () const = 0<br>_Gets the Minecraft version that this server is running._  |
| virtual std::string | [**getName**](#function-getname) () const = 0<br>_Gets the name of this server implementation._  |
| virtual std::vector&lt; [**Player**](classendstone_1_1Player.md) \* &gt; | [**getOnlinePlayers**](#function-getonlineplayers) () const = 0<br>_Gets a list of all currently online players._  |
| virtual [**Player**](classendstone_1_1Player.md) \* | [**getPlayer**](#function-getplayer-12) ([**endstone::UUID**](classendstone_1_1UUID.md) id) const = 0<br>_Gets the player with the given_ [_**UUID**_](classendstone_1_1UUID.md) _._ |
| virtual [**Player**](classendstone_1_1Player.md) \* | [**getPlayer**](#function-getplayer-22) (std::string name) const = 0<br>_Gets the player with the exact given name, case insensitive._  |
| virtual [**PluginCommand**](classendstone_1_1PluginCommand.md) \* | [**getPluginCommand**](#function-getplugincommand) (std::string name) const = 0<br>_Gets a_ [_**PluginCommand**_](classendstone_1_1PluginCommand.md) _with the given name or alias._ |
| virtual [**PluginManager**](classendstone_1_1PluginManager.md) & | [**getPluginManager**](#function-getpluginmanager) () const = 0<br>_Gets the plugin manager for interfacing with plugins._  |
| virtual [**Scheduler**](classendstone_1_1Scheduler.md) & | [**getScheduler**](#function-getscheduler) () const = 0<br>_Gets the scheduler for managing scheduled events._  |
| virtual std::string | [**getVersion**](#function-getversion) () const = 0<br>_Gets the version string of this server implementation._  |
| virtual bool | [**isPrimaryThread**](#function-isprimarythread) () const = 0<br>_Checks the current thread against the expected primary server thread._  |
|  [**Server**](classendstone_1_1Server.md) & | [**operator=**](#function-operator) (const [**Server**](classendstone_1_1Server.md) &) = delete<br> |
| virtual void | [**setMaxPlayers**](#function-setmaxplayers) (int max\_players) = 0<br>_Set the maximum amount of players allowed to be logged in at once._  |
| virtual  | [**~Server**](#function-server) () = default<br> |




























## Public Static Attributes Documentation




### variable BroadcastChannelAdmin 

```C++
const std::string endstone::Server::BroadcastChannelAdmin;
```




<hr>



### variable BroadcastChannelUser 

```C++
const std::string endstone::Server::BroadcastChannelUser;
```




<hr>
## Public Functions Documentation




### function Server [1/2]

```C++
endstone::Server::Server () = default
```




<hr>



### function Server [2/2]

```C++
endstone::Server::Server (
    const Server &
) = delete
```




<hr>



### function broadcast 

_Broadcasts the specified message to every user with the given permission name._ 
```C++
virtual void endstone::Server::broadcast (
    const std::string & message,
    const std::string & permission
) const = 0
```





**Parameters:**


* `message` message to broadcast 
* `permission` the required permission Permissibles must have to receive the broadcast 




        

<hr>



### function broadcastMessage [1/2]

_Broadcasts the specified message to every user with permission endstone.broadcast.user._ 
```C++
virtual void endstone::Server::broadcastMessage (
    const std::string & message
) const = 0
```





**Parameters:**


* `message` the message 




        

<hr>



### function broadcastMessage [2/2]

```C++
template<typename... Args>
inline void endstone::Server::broadcastMessage (
    const fmt::format_string< Args... > format,
    Args &&... args
) const
```




<hr>



### function dispatchCommand 

_Dispatches a command on this server, and executes it if found._ 
```C++
virtual bool endstone::Server::dispatchCommand (
    CommandSender & sender,
    std::string command
) const = 0
```





**Parameters:**


* `sender` the apparent sender of the command 
* `command` the command + arguments. 



**Returns:**

true if execution is successful, false otherwise 





        

<hr>



### function getCommandSender 

_Gets a_ [_**CommandSender**_](classendstone_1_1CommandSender.md) _for this server._
```C++
virtual CommandSender & endstone::Server::getCommandSender () const = 0
```





**Returns:**

a console command sender 





        

<hr>



### function getLevel 

_Gets the level with the given name._ 
```C++
virtual Level * endstone::Server::getLevel (
    std::string name
) const = 0
```





**Parameters:**


* `name` the name of the level to retrieve 



**Returns:**

a level with the given name, or nullptr if none exists 





        

<hr>



### function getLevels 

_Gets a list of all levels on this server._ 
```C++
virtual std::vector< Level * > endstone::Server::getLevels () const = 0
```





**Returns:**

a list of levels 





        

<hr>



### function getLogger 

_Returns the primary logger associated with this server instance._ 
```C++
virtual Logger & endstone::Server::getLogger () const = 0
```





**Returns:**

[**Logger**](classendstone_1_1Logger.md) associated with this server 





        

<hr>



### function getMaxPlayers 

_Get the maximum amount of players which can login to this server._ 
```C++
virtual int endstone::Server::getMaxPlayers () const = 0
```





**Returns:**

the amount of players this server allows 





        

<hr>



### function getMinecraftVersion 

_Gets the Minecraft version that this server is running._ 
```C++
virtual std::string endstone::Server::getMinecraftVersion () const = 0
```





**Returns:**

version of Minecraft 





        

<hr>



### function getName 

_Gets the name of this server implementation._ 
```C++
virtual std::string endstone::Server::getName () const = 0
```





**Returns:**

name of this server implementation 





        

<hr>



### function getOnlinePlayers 

_Gets a list of all currently online players._ 
```C++
virtual std::vector< Player * > endstone::Server::getOnlinePlayers () const = 0
```





**Returns:**

a list of currently online players. 





        

<hr>



### function getPlayer [1/2]

_Gets the player with the given_ [_**UUID**_](classendstone_1_1UUID.md) _._
```C++
virtual Player * endstone::Server::getPlayer (
    endstone::UUID id
) const = 0
```





**Parameters:**


* `id` [**UUID**](classendstone_1_1UUID.md) of the player to retrieve 



**Returns:**

a player object if one was found, null otherwise 





        

<hr>



### function getPlayer [2/2]

_Gets the player with the exact given name, case insensitive._ 
```C++
virtual Player * endstone::Server::getPlayer (
    std::string name
) const = 0
```





**Parameters:**


* `name` Exact name of the player to retrieve 



**Returns:**

a player object if one was found, null otherwise 





        

<hr>



### function getPluginCommand 

_Gets a_ [_**PluginCommand**_](classendstone_1_1PluginCommand.md) _with the given name or alias._
```C++
virtual PluginCommand * endstone::Server::getPluginCommand (
    std::string name
) const = 0
```





**Parameters:**


* `name` the name of the command to retrieve 



**Returns:**

a plugin command if found, null otherwise 





        

<hr>



### function getPluginManager 

_Gets the plugin manager for interfacing with plugins._ 
```C++
virtual PluginManager & endstone::Server::getPluginManager () const = 0
```





**Returns:**

a plugin manager for this [**Server**](classendstone_1_1Server.md) instance 





        

<hr>



### function getScheduler 

_Gets the scheduler for managing scheduled events._ 
```C++
virtual Scheduler & endstone::Server::getScheduler () const = 0
```





**Returns:**

a scheduling service for this server 





        

<hr>



### function getVersion 

_Gets the version string of this server implementation._ 
```C++
virtual std::string endstone::Server::getVersion () const = 0
```





**Returns:**

version of this server implementation 





        

<hr>



### function isPrimaryThread 

_Checks the current thread against the expected primary server thread._ 
```C++
virtual bool endstone::Server::isPrimaryThread () const = 0
```





**Returns:**

true if the current thread matches the expected primary thread, false otherwise 





        

<hr>



### function operator= 

```C++
Server & endstone::Server::operator= (
    const Server &
) = delete
```




<hr>



### function setMaxPlayers 

_Set the maximum amount of players allowed to be logged in at once._ 
```C++
virtual void endstone::Server::setMaxPlayers (
    int max_players
) = 0
```





**Parameters:**


* `maxPlayers` The maximum amount of concurrent players 




        

<hr>



### function ~Server 

```C++
virtual endstone::Server::~Server () = default
```




<hr>

------------------------------
The documentation for this class was generated from the following file `include/endstone/server.h`


# Workings of the Mario Clone

<p float="left">
  <img src="Documentation/../../../images/mario1.png" width="400" /> 
</p>

<br>

## UML Diagram Of the Project
<br>

<p float="left">
  <img src="Documentation/images/../../uml.png" width="500" /> 
</p>

<br>

## Selecting and Setting up Graphics for the project :
I have use the SFML (Simple and Fast Multi-media Library) . The reason for selection was its emphasis on OOP concepts and the configurable DLL (dynamically linked libraries) .

Setting it up was a
hastle but overall it was rewarding . 

<br>

The character and the graphics are rendered 

<br>

## Taking inputs from Keyboard
To do that I used a build-in class from the SFML , the class KEYBOARD 
Takes in a bool  ‘IS PRESSED’  with is triggered by another instance of the KEYBOARD class that takes a bool that takes in a defined key from the keyboard as a parameter . 
<p float="left">
  <img src="Documentation/images/../../key1.png" width="500" /> 
</p>
Similar when applied with negation changes the values of bool that updates the player state .
<p float="left">
  <img src="Documentation/../key2.png" width="500" /> 
</p>

<br>

## Mapping keys to controls to objects 
The main function has the Event class objects that is inside the object of RenderWindow class object .

This object takes in the input states On/Off  and passes that to the ‘PlayerClass’
It has Update function that takes in the bool function .
And  
Ingerited object from the PlatformClass 
<p float="left">
  <img src="Documentation/../key_in1.png" width="500" /> 
</p>
<p float="left">
  <img src="Documentation/../key_in2.png" width="500" /> 
</p>

<br>

## Object to Object Collison Function 
The PlatformClass is inhterited to the PlayerClass , so that  PlayerObject iamge can access the coordinates of the platform image objects .
<p float="left">
  <img src="Documentation/../coll1.png" width="500" /> 
</p>



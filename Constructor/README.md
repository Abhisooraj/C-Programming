# Constructor Theory in CPP 🌈🪞:
The constructor uses the identical name as the class and it is automatically called when the object of the class is constructed. It is a member function of the class but it cannot produce a return type. 
<br/> In a CPP program, if the constructor is not created then the compiler will create a default constructor for the program. Which expects no parameters and has an empty body. <b>The Constructors are used to solving the enigma of initilization</b>

<h3>Types of Constructor:</h3>
<ul type = "square">  
    <li> Default Constructor : <b> class_name() </b> </li>
    <li> Parameterized constructor : <b> class_name(parameters) </b> </li>
    <li> Copy Constructor : <b> class_name(const class_name old object) </b> </li>
</ul>

<b>Constructor Overloading </b>is similar as function overloading. In a class if more than one constructor is existing with a
different list of arguments then it is called constructor overloading.

<h3>File Details:</h3>
<ol type = "I">  
    <li> Constructor_0.1.CPP : Constructor and its types introduction and </li>
    <li> Constructor_0.2.CPP : Destructor introduction </b> </li>
</ol>

<h4>Destructor</h4>
Destructor is an instance member function of the class. Destructor can not be static. <b> "~" symbol</b> is used create Destructor.
<br/> No parameter can be passed in Destructor. Destructor is automatically called when object is going to destroy. Destructor is useful for releasing all the resources.

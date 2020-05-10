# Structure🏗️:
A Structure is a collection of distinct data-type of variables under one name. Sometimes this collection is also known as
 <b>"Conglomerate"</b> data type. A Structure is a class declared with keyword <b>struct</b> and by default all the members in a structure
 is public. When a structure is defined, the needed sufficient memory is automatically allocated by the Compiler.
<h3>Syntax of defining Structure:</h3>
strct tag_name
</br>{
</br>variable_name_01;
</br>variable_name_02;
</br>variable_name_03;
</br>variable_name_04;
<br/>}structure variable;
<br/>
<br/>Where either tag_name or structure variable maybe omitted, but not both. Once a Structure variable is defined, its members can be accessed by using <b>.(dot operator)</b>. 

<h3>Example of Structure:</h3>
A structure naming as address with 4 variables: house_no, area_name, city_name, state_name. 
strct address
</br>{
</br>int house_no;
</br>char area[25];
</br>char city[25];;
</br>char state[25];;
<br/>};

## File Details 📂:
<li> Structures_0.1 <b>"Examples of Structures"</b> Declaration, Definition with various use cases</li>
<li> Structures_0.2 <b>"Working of Structures with function"</b> input values in a Structure by function and passing values to a function</li>
<li> Structures_0.3 <b>"Concept of Encapsulation and access modifiers"</b> Definition and Declaration of member function and variable using access modifiers. Acheive Encapsulation in structure</li>

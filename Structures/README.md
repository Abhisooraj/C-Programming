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
<li> Structures_0.1 <b>"Some example of Structures"</b> Declaration, Definition with various cases.</li>

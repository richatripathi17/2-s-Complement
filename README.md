# 2-s-Complement
2's Complement using Mealy and Moore transition table
<br><br>

<h3>Mealy Transition Table</h3>
<table>
  <tr>
    <th> States </th>
    <th> Input 0</th>
    <th> Input 1</th>
  </tr>
  <tr> 
    <th></th>
    <th> State -> Output</th> 
     <th> State -> Output</th> 
    </tr>
  <tr>
    <td>X</td>
    <td>X -> 0</td>
    <td>Y -> 1 </td>
  </tr>
     <tr>
    <td>Y</td>
    <td>Y -> 1</td>
    <td>Y -> 0 </td>
  </tr>
    </table>
   <h3>Moore Transition Table</h3>
    <table>
     <tr>
    <th> States </th>
    <th> Next State(Input 0)</th>
    <th> Next State(Input 1)</th>
    <th> Output</th>
  </tr>
  <tr> 
  <td> X </td>
  <td> X</td>
  <td> Z </td>
  <td> 0</td>
  </tr>
   <tr> 
  <td> Y </td>
  <td> Z</td>
  <td> Y </td>
  <td> 0</td>
  </tr>
   <tr> 
  <td> Z </td>
  <td> Z</td>
  <td> Y </td>
  <td> 1</td>
  </tr>
  </table>

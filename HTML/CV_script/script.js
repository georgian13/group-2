jQuery(document).ready(function($) {
    $("#myModal").modal('show');
  });
var count = 0;
function push() {  
    if(document.getElementById('gender_Male').checked) {
        $("#h1").html("Mister");
    } 
    if(document.getElementById('gender_Female').checked) {
        $("#h1").html("Misis");
    }
    $('#h1').append("  "+$("#name1").val()+"  ");
    $("#h1").append($("#surname1").val());
}
function addinfo() {
    var add = "Address: " + $("#address").val();
    var cty = "City: " + $("#city").val(); 
    var co  = "Country: " + $("#country").val(); 
    var ph  = "Phone: " + $("#phone").val(); 
    var nm  = "Name: " + $("#name").val(); 
    var snm = "Surname: " + $("#surname").val();       
    var arr = [add,cty,co,ph,nm,snm];
       var content = "<table>"
        for(i=0; i<6; i++){
            content += '<tr><td>' + arr[i] + '</td></tr>';
        }
        content += "</table>"
        $('#area').append(content); 
    $("#form2")[0].reset();
    }
window.onload = function saveSettings() {
    var name = document.getElementById("name1").value;
    var surname = document.getElementById("surname1").value;
    var gender;
    if (document.getElementById("surname1").checked) {
        gender = "Mister";
    } else if(document.getElementById("surname1").checked) {
        gender = "Misis";
    }
    ​var test = { name: name, surname: "thing2", test3: [0, 2, 44] }​​​​​​​;
    localStorage.setItem("test", JSON.stringify(test));
    var test2 = localStorage.getItem("test");
    test = JSON.parse(test2);
}
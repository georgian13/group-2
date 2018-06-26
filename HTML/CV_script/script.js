jQuery(document).ready(function($)  {
    if (sessionStorage.getItem("name") == null) {
        $("#myModal").modal("show");
    } else {
        load();
    }
    if (sessionStorage.getItem("area")) {
        var res = sessionStorage.getItem("area");
        $("#area").html(res);
    }

});
function push() {  
    if(document.getElementById('gender_Male').checked) {
        $("#h1").html("Mister");
    } 
    if(document.getElementById('gender_Female').checked) {
        $("#h1").html("Misis");
    }
    $('#h1').append("  "+sessionStorage.getItem("name")+"  ");
    $("#h1").append($("#surname1").val());
    save();
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
    sessionStorage.setItem("area", $("#area").html());
 }
   
 
 function load() {
    var name = sessionStorage.getItem("name");
    var surname = sessionStorage.getItem("surname")

    if (sessionStorage.getItem("gender") == "Male") {
        $("#modal").html("Mister ");
    }
    if (sessionStorage.getItem("gender") == "Female") {
        $("#modal").html("Misis ");
    }

    $("#modal").text($("#modal").html() + " " + name + " " + surname);
}

function save() {
     var gender = "";

    if ($("#gender_Male").is(":checked")) {
        gender = "Male";
    }
    else {
        gender = "Female";
    }

    sessionStorage.setItem("name", $("#name1").val());
    sessionStorage.setItem("surname", $("#surname1").val());
    sessionStorage.setItem("gender", gender);
    load();
}
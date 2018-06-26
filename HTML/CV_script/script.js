jQuery(document).ready(function($)  {
    if (sessionStorage.getItem("name") == null) {
        $("#myModal").modal("show");
    } else {
        loading();
    }
    if (sessionStorage.getItem("key") != null) {
        var res = JSON.parse(sessionStorage["key"]);
        $("#resultBox").html(res);
    }
    $("#myModal").submit(function() {
        if ($("#gender_Male").is(":checked")) {
            $("#modal").html("Misis");
        }

        if ($("#gender_Female").is(":checked")) {
            $("#modal").html("Misis");
        }

        push();
        saveing();
        $("#myModal").modal("hide");
        return false;
    });
});
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
   
 
 function loading() {
    var name = sessionStorage.getItem("name1");
    var surname = sessionStorage.getItem("surname1")

    if (sessionStorage.getItem("gender") == "Male") {
        $("#modal").html("Mister ");
    }
    if (sessionStorage.getItem("gender") == "Female") {
        $("#modal").html("Misis ");
    }

    $("#mame1").text(name);
    $("surname1").text(surname);
}

function saveing() {
     var gender = "";

    if ($("#gender_Male").is(":checked")) {
        gender = "Male";
    }
    if ($("#gender_Female").is(":checked")) {
        gender = "Female";
    }

    sessionStorage.setItem("name", $("#name1").val());
    sessionStorage.setItem("surname", $("#surname1").val());
    sessionStorage.setItem("gender", gender);
    loading();
}
function resultsave() {
    var json1 = JSON.stringify($("#area").html());
    sessionStorage.setItem("key", json1);
}






    

        
       

        
       
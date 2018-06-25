var count = 0;
function myFunc (F) { 
    var gender; 
    if(document.getElementById('gender_Male').checked) {
        gender = "Mister";
    }else if(document.getElementById('gender_Female').checked) {
        gender = "Misis";
    }
    var txt = [ gender, F ['Name'].value,F ['Surname'].value ].join('  ');
    mt = document.getElementById ('tool');
    mt.innerHTML = txt;
    mc   = document.getElementById ('modal');
    mc.style.display = 'block';
    form = document.getElementById ('form1');
    form.style.display = 'none';
    fromyou = document.getElementById ('fromyou');
    fromyou.style.display = 'block';
}
function addinfo (G) {
    var info = [ G['address'].value, G['sity'].value, G['country'].value, G['phone'].value, G['name'].value, G['surname'].value ].join('\n');
    document.getElementById ('area').innerHTML += '<textarea readonly rows="6"></textarea>';
    i = document.getElementsByTagName ('textarea')[count];
    i.innerHTML = info;
    count = count + 1;
    }
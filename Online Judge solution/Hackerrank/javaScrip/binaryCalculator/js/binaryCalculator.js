var button_no_0 = document.getElementById('btn0');
var button_no_1 = document.getElementById('btn1');
var button_no_Clr = document.getElementById('btnClr');
var button_no_Eql = document.getElementById('btnEql');
var button_no_sum = document.getElementById('btnSum');
var button_no_sub = document.getElementById('btnSub');
var button_no_mul = document.getElementById('btnMul');
var button_no_div = document.getElementById('btnDiv');
var display = document.getElementById('res');

button_no_0.onclick = function() {
    display.innerHTML += '0';
};

button_no_1.onclick = function() {
    display.innerHTML += '1';
};

button_no_Clr.onclick = function() {
    display.innerHTML = '';
};

button_no_Eql.onclick = function() {
    // display.innerHTML = Math.floor(eval(display.innerHTML));

    var expr = display.innerHTML;
    var nums = /(\d+)/g;
    // Replace all base 2 nums with base 10 equivs
    expr = expr.replace(nums, function(match) {
            return parseInt(match, 2);
        })
        // eval in base 10 and convert to base 2
    display.innerHTML = eval(expr).toString(2);

};

button_no_sum.onclick = function() {
    display.innerHTML += '+';
};

button_no_sub.onclick = function() {
    display.innerHTML += '-';
};

button_no_mul.onclick = function() {
    display.innerHTML += '*';
};

button_no_div.onclick = function() {
    display.innerHTML += '/';
};
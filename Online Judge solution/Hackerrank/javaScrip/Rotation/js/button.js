let nums = [1, 2, 3, 6, 9, 8, 7, 4];
const ids = [1, 2, 3, 6, 9, 8, 7, 4];
var button_no_5 = document.getElementById('btn5');

button_no_5.onclick = function() {
    /* This changes the button's label */
    nums.unshift(nums.pop());
    for (var i = 0; i <= 7; i++) {
        document.getElementById("btn" + ids[i]).innerHTML = nums[i];
    }

};
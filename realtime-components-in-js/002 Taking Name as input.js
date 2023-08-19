const firstName = "aKARsh";
const lastName = "raJpuT";
const arr = [firstName, lastName];
const newArr = arr.join(" ").toLowerCase().split(" ");
const newArr2 = newArr.forEach(function (mov, i, arr) {
  mov[0].toUpperCase.slice(1, -1);
});
console.log(newArr2);

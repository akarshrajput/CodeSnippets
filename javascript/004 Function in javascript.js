// Function Declaration
function calcAge1(birthyear) {
  const age = 2023 - birthyear;
  return age;
}
console.log(calcAge1(2003));

// Function expression
const calcAge2 = function (birthyear) {
  age = 2023 - birthyear;
  return age;
};
console.log(calcAge2(2003));

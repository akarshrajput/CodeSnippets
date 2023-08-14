const inputName = `Akarsh Rajput`;
const userName = inputName
  .toLowerCase()
  .split(" ")
  .map((arr) => arr[0])
  .join("");
console.log(userName);

const arr = ["Akarsh", 2003, ["1,2,3"]];
const newArr = [];
for (let i = 0; i < arr.length; i++) {
  newArr[i] = arr[i];
  console.log(newArr[i], typeof newArr[i]);
}

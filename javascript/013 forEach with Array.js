const num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
num.forEach(function (movement, i, arr) {
  console.log(`${String(i + 1).padStart(2, 0)} : ${movement}`);
});

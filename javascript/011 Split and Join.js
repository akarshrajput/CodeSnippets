const a = `This+is-a 
very good-sport.`
  .split("+")
  .join(" ")
  .split("-")
  .join(" ")
  .split(" ")
  .join(" ")
  .split("\n")
  .join("");
console.log(a);

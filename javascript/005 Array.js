const a = ["Akarsh", "Steven", "John"];
const b = ["Jimmy", "Peter", "Hulk"];
a.push(...b);
console.log(a);
const c = [...a, ...b];
console.log(c);
c.includes("Akarsh") ? console.log("Yes") : console.log("No");

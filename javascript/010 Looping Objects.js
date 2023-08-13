const obj = {
  name: "Akarsh",
  friends: ["Raj", "Priyanshu", "Rishi"],
  classTime: {
    open: 10,
    close: 6,
  },
};
const properties = obj.entries(friends);
for (const i of properties) {
  console.log(i);
}

const obj = {
  name: "Akarsh",
  friends: ["Raj", "Priyanshu", "Rishi"],
  classTime: {
    mon: {
      open: 10,
      close: 6,
    },
    tue: {
      open: 9,
      close: 5,
    },
  },
};
const {
  name,
  friends,
  classTime: { mon, tue },
} = obj;
console.log(mon);
const { open, close } = mon;
console.log(open);
console.log(tue.open);
const newFriendsArray = [friends];
console.log(...newFriendsArray);

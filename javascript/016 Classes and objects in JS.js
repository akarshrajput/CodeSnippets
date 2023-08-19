const Car = function (carName, speed) {
  this.carName = carName;
  this.speed = speed;
};
const bmw = new Car("BMW", 120);
const bugatti = new Car("Bugatti", 95);
Car.prototype.accelerate = function () {
  this.speed = this.speed + this.speed * 0.1;
  return this.speed;
};
Car.prototype.break = function () {
  this.speed = this.speed - this.speed * 0.05;
  return this.speed;
};
console.log(bmw.accelerate());
console.log(bmw.break());
console.log(bugatti.accelerate());
console.log(bugatti.break());

const newmovements=function(movements){
  containerMovements.innerHTML='' // Edit the HTML content
  movements.forEach(function(mov,i){ // ForEach loop foe each movements
    const item=mov>0?"deposit":"withdrawal"; // Used to change class name here
    const html=
    `
    <div class="movements__row">
     <div class="movements__type movements__type--${item}">2 deposit</div>
     <div class="movements__date">${i}</div>
     <div class="movements__value">${mov}</div>
    </div>
    `;
    containerMovements.insertAdjacentHTML("afterbegin",html) // Insert the html element in website
  });
};
newmovements(account1.movements); // Calling the input data
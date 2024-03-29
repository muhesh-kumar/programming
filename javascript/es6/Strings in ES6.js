const firstName = "John";
const lastName = "Smith";
const yearOfBirth = 1990;

function calcAge(year) {
  return 2021 - year;
}

// ES5
console.log("This is " + firstName + " " + lastName + ". He was born in " + yearOfBirth + ". Today, he is " + calcAge(yearOfBirth) + " years old.");

// ES6
console.log(`This is ${firstName} ${lastName}. He was born in ${yearOfBirth}. Today, he is ${calcAge(yearOfBirth)} years old.`);

const n = `${firstName} ${lastName}`;
console.log(n.startsWith("J"));
console.log(n.startsWith("j"));
console.log(n.endsWith("h"));
console.log(n.includes(" "));
console.log(firstName.repeat(5));
console.log(`${firstName} `.repeat(5));
const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim();
const [a, b] = input.split(" ").map(Number);

if(a == b) console.log("exception");
else{
    let result = ((a+b)/(a-b)).toFixed(2);
    console.log(`${result}`);
}
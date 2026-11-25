const fs = require("fs");
input = fs.readFileSync(0, "utf8").trim();
const [a, b] = input.split(" ").map(Number);
if(a > b) {
    console.log(a * b);
}
else {
    console.log(parseInt(b / a));
}
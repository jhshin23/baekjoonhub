const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim().split(" ");
let [a, b] = input.map(Number);
if(a>b) {
    console.log(a-b);
}
else if(a<b) {
    console.log(b-a);
}
else {
    console.log(0);
}
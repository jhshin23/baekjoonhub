const fs = require("fs");
let input = fs.readFileSync(0, "utf8").trim().split(" ");
let [h, w] = input.map(Number);
let b = parseInt((10000 * w) / (h * h));
console.log(b);
if (b >= 25) {
    console.log("Obesity");
}
const fs = require("fs");
const input = Number(fs.readFileSync(0, "utf8").trim());
if (input >= 80) {
    console.log("pass");
}
else {
    console.log(`${80-input} more score`);
}
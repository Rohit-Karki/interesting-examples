const express = require("express");
const app = express();

app.get("/", function (req, res) {
  res.send("Hello, world!");
});
app.listen(3000, (error) => {
  if (error) {
    console.log(error);
  } else {
    console.log("Accepting Conncetions");
  }
});

// HTTP Sever
// Network Programming
// Someone will

import net from "net";
const SERVER_IP = "127.0.0.1";
const SERVER_PORT = 3000;
// const REQUEST_BUFFER = new Uint8Array(
//   stringToCharCode("GET / HTTP/1.1\r\nHost: 127.0.0.1\r\n\r\n")
// );

const REQUEST_BUFFER = Buffer.from("GET / HTTP/1.1\r\nHost: 127.0.0.1\r\n\r\n");
console.log(REQUEST_BUFFER);

var socket = new net.Socket();
socket.connect(SERVER_PORT, SERVER_IP, () => {
  socket.write(REQUEST_BUFFER);
});
socket.on("data", (data, error) => {
  console.log(data.toString());
  socket.destroy();
});
socket.on("close", (data, error) => {
  console.log("close");
});

// Helper functions
function stringToCharCode([...string]) {
  const array = string.map((c) => {
    return c.charCodeAt(0);
  });
  return array;
}

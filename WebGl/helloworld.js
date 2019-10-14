// var canvas = document.getElementById('mycanvas');
// var context = canvas.getContext('2d');
// context.font = '20pt Calibri';
// context.fillStyle = 'blue';
// context.fillText('Happy Diwali', 250, 200);
// context.fillText('-CED16I002', 470, 260);
//
// var gl = canvas.getContext('experimental-webgl');
//       gl.clearColor(0.9,0.9,0.8,1);
//       gl.clear(gl.COLOR_BUFFER_BIT);

function main() {
  const canvas = document.querySelector("#glCanvas");
  // Initialize the GL context
  const gl = canvas.getContext("webgl");

  // Only continue if WebGL is available and working
  if (gl === null) {
    alert("Unable to initialize WebGL. Your browser or machine may not support it.");
    return;
  }

  // Set clear color to black, fully opaque
  gl.clearColor(0.0, 0.0, 0.0, 1.0);
  // Clear the color buffer with specified clear color
  gl.clear(gl.COLOR_BUFFER_BIT);

  gl.font = '20pt Calibri';
  gl.fillStyle = 'blue';
  gl.fillText('Happy Diwali', 250, 200);
  gl.fillText('-CED16I002', 470, 260);
}

window.onload = main;

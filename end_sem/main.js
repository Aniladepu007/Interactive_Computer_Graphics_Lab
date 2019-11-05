var canvas = document.getElementById('my_canvas');
var gl = canvas.getContext('webgl');

var vertices = [
      -0.4,-0.25,0,
      0.1,-0.25,0,

      -0.15,0.20,0,
      -0.4,-0.25,0,

      -0.15,0.20,0,
      0.1,-0.25,0,

      //inevrted triangle
      -0.15,0.20,0,
      0.35,0.20,0,

      0.35,0.20,0,
      0.1,-0.25,0,
]
var vertex_buffer = gl.createBuffer();
gl.bindBuffer(gl.ARRAY_BUFFER, vertex_buffer);
gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(vertices), gl.STATIC_DRAW);
gl.bindBuffer(gl.ARRAY_BUFFER, null);

var vertCode =
'attribute vec3 coordinates;' +
'void main(void) {' +
   ' gl_Position = vec4(coordinates, 1.0);' +
'}';

var vertShader = gl.createShader(gl.VERTEX_SHADER);
gl.shaderSource(vertShader, vertCode);
gl.compileShader(vertShader);
var fragCode =
'void main(void) {' +
   'gl_FragColor = vec4(0.0, 0.0, 0.0, 0.1);' +
'}';

var fragShader = gl.createShader(gl.FRAGMENT_SHADER);
gl.shaderSource(fragShader, fragCode);
gl.compileShader(fragShader);

var shaderProgram = gl.createProgram();
gl.attachShader(shaderProgram, vertShader);
gl.attachShader(shaderProgram, fragShader);
gl.linkProgram(shaderProgram);
gl.useProgram(shaderProgram);

gl.bindBuffer(gl.ARRAY_BUFFER, vertex_buffer);
var coord = gl.getAttribLocation(shaderProgram, "coordinates");
gl.vertexAttribPointer(coord, 3, gl.FLOAT, false, 0, 0);
gl.enableVertexAttribArray(coord);

gl.clearColor(0.2, 0.1, 0.1, 0.9); //modified

gl.enable(gl.DEPTH_TEST);
gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);
gl.viewport(0,0,canvas.width,canvas.height);

gl.lineWidth(3);   //modified

//all below modified

var i;
for(i=0;i<568;i+=2)
      gl.drawArrays(gl.LINES, i ,2);

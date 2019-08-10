document.getElementById('player').addEventListener("mouseover",sumarPuntos);

puntos = 0;
function sumarPuntos(){
	puntos++;
	document.getElementById("puntos").innerHTML = "Puntos: <b>" + puntos + "</b>";
}
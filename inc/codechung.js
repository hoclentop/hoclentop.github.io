function xoacodedu() {
	var txt = window.location.search+"";
	if (!txt.includes("pas")) xoacode("pas");
	if (!txt.includes("cpp")) xoacode("cpp");
	if (!txt.includes("py")) xoacode("py");
}
function xoacode(cl) {
	var e = document.getElementsByClassName("code-"+cl);
	for (var i=e.length-1; i>=0; i--) e[i].remove();
}
setTimeout(xoacodedu, 1000);
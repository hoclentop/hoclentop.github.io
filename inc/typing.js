var hoanthanh=true;
		var txt="Tran Huu Nam";
		var speed = 60;
		var cho=100;
		function chay() {
			
			hoanthanh=false;
			new TypeIt(".typing", {
			  strings: txt,
			  speed: speed,
			  lifeLike: true,
			  cursorChar: "█",
			  afterComplete: function(go) {
					go.destroy();
					hoanthanh=true;
					//go[1].cursor=false;
			  }
			}).go();
			
			
		}
		
		function kiemsoat() {
			if (hoanthanh==false) setTimeout(kiemsoat,1000);
			else {
				var t=document.getElementsByClassName("typing");
				if (t.length==0) return;
				txt=t[0].innerHTML;
				cho=10;
				if(!window.location.search.includes("norun")) {
					t[0].innerHTML="";
					chay();
					cho=(txt.length<100?txt.length:100);
				}
				
				t[0].classList.remove("typing");
				
				setTimeout(kiemsoat,cho * speed);
			}
		}
		function showfooter() {
			document.getElementById("footer").style.display="block";
		}
		 	
		setTimeout(kiemsoat,2000);
		setTimeout(showfooter,90000);
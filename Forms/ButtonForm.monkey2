Namespace VectorSite


Class ButtonForm Extends VectorUIForm
	
	Field ButCol:Color = New Color(0.8,0.8,0.8,0.8)
	
	Method New(x:Int,y:Int,w:Int,h:Int,text:String)
		
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		Text = text;
		BackImg = Image.Load("asset::button1.png")
		
	End 
	
	Method OnDraw() Override 
		
		DrawImage(BackImg,DrawX(),DrawY(),Size.x,Size.y,ButCol)
		
		DrawText(Text,DrawX()+(Size.x/2)-TextW(Text)/2,DrawY()+(Size.y/2)-TextH(Text)/2,TextCol)
		
		
		
	End 
	
End 
Namespace VectorSite

#Import "data/textbox1.png"

Class TextBoxForm Extends VectorUIForm
	
	Method New(x:Int,y:Int,w:Int,h:Int,def:String)
	
		Text = def
		
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		BackImg = Image.Load("asset::textbox1.png")
		
		
	
	End 
	
	Method OnDraw() Override
		
		Local x:Int = DrawX()
		Local y:Int = DrawY()
		
		DrawImage(BackImg,x,y,Size.x,Size.y,New Color(1,1,1,1))
		
		
	End 
	
	
End 
Namespace VectorSite

#Import "data/button1.png"

Class ButtonForm Extends VectorUIForm
	
	Field ButCol:Color = New Color(1,1,1,1)
	
	Method New(x:Int,y:Int,w:Int,h:Int,text:String)
		
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		Text = text;
		TextCol = New Color(0.1,0.1,0.1,1.0)
		BackImg = Image.Load("asset::button1.png")
		
	End 
	
	Method OnMouseEnter() Override
		
		ButCol = New Color(0.6,1,1,1)
		
	End 
	
	Method OnMouseLeave() Override 
		
		ButCol = New Color(1,1,1,1.0)
		
	End 
	
	Method OnMouseDown(b:Button) Override 
		
		ButCol = New Color(1,0.6,1,1)
		Down = True
		
		If OnClick <> Null
			
			OnClick(0)
			
		End 
		
	End 
	
	Field Down:Bool = False
	
	Method OnMouseUp(b:Button) Override 
		
		ButCol = New Color(1,1,1,1)
		Down = False
		
		
	End 
	
	Method OnMouseMove( x:Int,y:Int,dx:Int,dy:Int ) Override
		
		If Not Down Return
		

		
	End 
	
	Method OnDraw() Override 
		
		DrawImage(BackImg,DrawX(),DrawY(),Size.x,Size.y,ButCol)
		
		DrawText(Text,DrawX()+(Size.x/2)-TextW(Text)/2,DrawY()+(Size.y/2)-TextH(Text)/2,TextCol)
		
		
		
	End 
	
End 
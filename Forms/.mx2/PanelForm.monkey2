Namespace VectorSite

#Import "data/panelbg1.png"

Class PanelForm Extends VectorUIForm
	
	Field PanelCol:Color 
	
	Method New(x:Int,y:Int,w:Int,h:Int)
		
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		
		PanelCol = New Color(1,1,1,1)
		
		BackImg = Image.Load("asset::panelbg1.png")
		
	End 
	
	Method OnDraw() Override 
	
		Local dx:Int,dy:Int
		
		dx = DrawX()
		dy = DrawY()
		
		DrawImage(BackImg,dx,dy,Int(Size.x),Int(Size.y),PanelCol)
	
	End 
	
	
End 
Namespace VectorSite

Class PanelForm Extends VectorUIForm
	
	Field PanelCol:Color 
	
	Method New(x:Int,y:Int,w:Int,h:Int)
		
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		
		PanelCol = New Color(0.7,0.7,0.7,0.7)
		
	End 
	
	Method OnDraw() Override 
	
		Local dx:Int,dy:Int
		
		dx = DrawX()
		dy = DrawY()
		
		DrawRect(dx,dy,Int(Size.x),Int(Size.y),PanelCol)
	
	End 
	
	
End 
Namespace VectorSite

Class LabelForm Extends VectorUIForm
	
	Method New(text:String,x:Int,y:Int)
		
		Pos = New Vec2f(x,y)
		
		Text = text
		
	End 
	
	Method OnDraw() Override 
		
		DrawText(Text,DrawX(),DrawY(),TextCol)
		
	End 
	
End 
	
Namespace VectorSite

Enum Button
	
	Left = 0
	Right = 1
	Middle = 2
	
End
	

Class VectorUIForm Extends VectorObject
	
	Field Root:VectorUIForm 
	Field Sub:List<VectorUIForm> = New List<VectorUIForm>
	
	Method DrawX:Int()
	
		Local rx:Int = 0 
	
		If Root = Null
		
		Else
			
			rx = Root.DrawX()	
			
		End 	
		
		Return rx+Int(Pos.x)
		
	End 
		
	Method DrawY:Int()
	
		Local ry:Int = 0 
	
		If Root = Null
		
		Else
			
			ry = Root.DrawX()	
			
		End 	
		
		Return ry+Int(Pos.y)
		
	End 	
		
	
	Method OnDraw() Virtual
	
	End Method
	
	Method OnUpdate() Virtual
		
	End 
	
	Method OnMouseMove(x:Int,y:Int,dx:Int,dy:Int)
	
	End 
	
	Method OnMouseDown(b:Button)
	
	End 
	
	
	Method DrawRect(x:Int,y:Int,w:Int,h:Int,col:Color)
		
		VectorSite.Rect(x,y,w,h,col)
		
	End Method 
	
End 
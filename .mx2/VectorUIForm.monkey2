Namespace VectorSite

Enum Button
	
	Left = 0
	Right = 1
	Middle = 2
	
End
	

Class VectorUIForm Extends VectorObject
	
	Field Root:VectorUIForm 
	Field Sub:List<VectorUIForm> = New List<VectorUIForm>
	Field BackImg:Image
	Field Text:String 
	Field TextCol:Color = New Color(1,1,1,1)
	Field OnClick:Bool(b:Int)
	Field OnDrag:Bool(mx:Int,my:Int)
	
	Method Add:VectorUIForm(add:VectorUIForm)
		
		Sub.Add(add)
		add.Root = Self 
		Return add
		
	End 
	
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
			
			ry = Root.DrawY()	
			
		End 	
		
		Return ry+Int(Pos.y)
		
	End 	
		
	Method InBounds:Bool(mx:Int,my:Int)
		
		Local dx:Int,dy:Int
		
		dx = DrawX()
		dy = DrawY()
		
		If mx>=dx And my>=dy And mx<=(dx+Size.x) And my<=(dy+Size.y)
			
			Return True
			
		End 
		
		Return False
		
	End 
	
	Method Activate() Virtual
		
	End 
	
	Method Deactivate() Virtual
		
	End 
	
	Method OnMouseLeave() Virtual 
		
	End 
	
	Method OnMouseEnter() Virtual 
	
	End 
	
	Method OnDraw() Virtual
	
	End Method
	
	Method OnUpdate() Virtual
		
	End 
	
	Method OnMouseMove(x:Int,y:Int,dx:Int,dy:Int) Virtual
	
	End 
	
	Method OnMouseDown(b:Button) Virtual 
	
	End 
	
	Method OnMouseUp(b:Button) Virtual 
		
	End 
	
	Method DrawText(text:String,x:Int,y:Int,col:Color)
		
		VectorSite.DrawText(text,x,y,col)
		
	End 
	
	Method TextW:Int(text:String)
		
		Return VectorSite.TextW(text)
	
	End 
	
	Method TextH:Int(text:String)
		
		Return VectorSite.TextH(Text)
		
	End 
	
	Method DrawImage(img:Image,x:Int,y:Int,w:Int,h:Int,col:Color)
		
		VectorSite.RectImg(img,x,y,w,h,col)
		
	End 
	
	Method DrawRect(x:Int,y:Int,w:Int,h:Int,col:Color)
		
		VectorSite.Rect(x,y,w,h,col)
		
	End Method 
	
End 
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
	
	Method Add:VectorUIForm(add:VectorUIForm)
		
		Sub.Add(add)
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
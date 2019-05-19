Namespace VectorSite

#Import "data/textbox1.png"

Class TextBoxForm Extends VectorUIForm
	
	Field Active:Bool = False
	Field ClaretOn:Bool = True
	Field NextOn:Int = 0
	Field KeyDown:Int = 0 
	Field KeyNext:Int = 0
	Field ClaretX:Int = 0
	Field StartX:Int = 0
	
	Method New(x:Int,y:Int,w:Int,h:Int,def:String)
	
		Text = def
		
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		BackImg = Image.Load("asset::textbox1.png")
		
		
	
	End 
	
	Method Activate() Override
		
		Active=True
		NextOn = Millisecs()+300
		ClaretOn = True
		
		
	End 
	
	Method Deactivate() Override
	
		Active = False
	
	End 
	
	Method ProcessKey(c:Int)
	
		Local sa:String = String.FromChar(c)
		
		Text = Text + sa
		
		ClaretX = ClaretX+1
		
	
	End 
	
	Method OnKeyDown(c:Int) Override
		
		KeyDown = c
		ProcessKey(c)
		KeyNext = Millisecs()+350
		
	End 
	
	Method OnKeyUp(c:Int) Override 
		
		KeyDown = 0
		
	End 
	
	Method OnDraw() Override
		
		If KeyDown <> 0
			
			If Millisecs()>KeyNext
				
				ProcessKey(KeyDown)
				KeyNext = Millisecs()+200
				
			End 
			
		End 
		
		Local x:Int = DrawX()
		Local y:Int = DrawY()
		
		DrawImage(BackImg,x,y,Size.x,Size.y,New Color(1,1,1,1))
		
			Local rs:String = Text.Mid(StartX,Text.Length-StartX)
		
		DrawText(rs,x+5,y+3,New Color(0,0,0,1))
		
		If ClaretOn And Active
			
	
			
			Local cx:Int = ClaretX - StartX
			
			cx = cx * 10
			
			DrawRect(x+5+cx,y+3,2,Size.y-6,New Color(0,0,0,1))
			
		End 
		
		If Millisecs()>NextOn
			
			If ClaretOn
				ClaretOn=False
			Else
				ClaretOn = True
			End 
			NextOn = NextOn+305
			
		End 
		
	End 
	
	
End 
Namespace VectorSite

#Import "data/textbox1.png"

Class TextBoxForm Extends VectorUIForm
	
	Field Active:Bool = False
	Field ClaretOn:Bool = True
	Field NextOn:Int = 0
	
	Method New(x:Int,y:Int,w:Int,h:Int,def:String)
	
		Text = def
		
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		BackImg = Image.Load("asset::textbox1.png")
		
		
	
	End 
	
	Method Activate() Override
		
		Active=True
		NextOn = Millisecs()+300
		ClaretOn = true
		
		
	End 
	
	Method Deactivate() Override
	
		Active = False
	
	End 
	
	Method OnDraw() Override
		
		Local x:Int = DrawX()
		Local y:Int = DrawY()
		
		DrawImage(BackImg,x,y,Size.x,Size.y,New Color(1,1,1,1))
		
		If ClaretOn And Active
			
			DrawRect(x+5,y+3,2,Size.y-6,New Color(0,0,0,1))
			
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
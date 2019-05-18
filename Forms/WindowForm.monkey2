 Namespace VectorSite
 
 
Class WindowForm Extends VectorUIForm
	
	Field Body:PanelForm 
	Field Title:ButtonForm
	Field Resize:ButtonForm
	Field Close:ButtonForm
	
	Method New(x:Int,y:Int,w:Int,h:Int,title:String)
	
		Text = title
		Pos = New Vec2f(x,y)
		Size = New Vec2f(w,h)
		
		Body = New PanelForm(0,0,w,h)
		Title = New ButtonForm(0,0,w-24,25,title)
		Resize = New ButtonForm(w-24,h-24,24,24,"o")
		Close = New ButtonForm(w-24,0,24,25,"x")
		
		Body.PanelCol = New Color(0.7,0.7,0.7,1.0)
		
		Title.OnDrag = ON_TitleDrag
		
		Add(Body)
			
		Body.Add(Title)
		Body.Add(Resize)
		Body.Add(Close)
		
		
		
		
	End 
	
	Method ON_TitleDrag:Bool(x:Int,y:Int)
		
		Pos.x = Pos.x + x
		Pos.y = Pos.y + y
		
		Return False
	End 
	
End 
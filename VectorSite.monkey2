Namespace VectorSite

#Import "<std>"
'Mojo handles all of our graphics drawing
#Import "<mojo>"
'Our own individual files for including

#Import "VectorObject"
#Import "VectorUIForm"
#Import "VectorUI"
#Import "Forms/PanelForm"
#Import "Forms/LabelForm"
#Import "Forms/ButtonForm"
#Import "Forms/WindowForm"
#Import "Forms/TextBoxForm"
#Import "data/"
#Import "VectorPage"
#Import "Pages/LoginPage"

Using std..
Using mojo..

Class VectorSite Extends Window
	
	Field Settings:VectorUIForm 
	
	Field UI:VectorUI
	
	Global CC:Canvas 
	
	Method New( title:String="VectorSite",width:Int=1024,height:Int=768,flags:WindowFlags=WindowFlags.Resizable )
		
		Super.New(title,width,height,flags)

		VirRes = New Vec2f(width,height)
		
		ClearCol = New Color(0,0,0,0)

		InitSite()
			
	End 
	
	Method InitSite()
	
		UI = New VectorUI()
		
	End
	

	
	Global VirRes:Vec2f 
	
	Global Can:Canvas 
	
	Global ClearCol:Color 
	
	Function Rect(x:Int,y:Int,w:Int,h:Int,col:Color)
		
		Local rr:Rectf = New Rectf(x,y,w,h)
		
		Can.Color = col 
		
		Can.DrawRect(x,y,w,h)
		
	End 
	
	Function DrawText(text:String,x:Int,y:Int,col:Color)
		
		Can.Color = col
		
		Can.DrawText(text,x,y)
		
		
	End 
	
	Function TextW:Int(text:String)
		
		Return Can.Font.TextWidth(text)
		
		
	End 
	
	Function TextH:Int(text:String)
		
		Return Can.Font.Height
		
	End 
	
	Function RectImg(img:Image,x:Int,y:Int,w:Int,h:Int,col:Color)
		
		Can.Color = col
		
		Can.DrawRect(x,y,w,h,img)
	End 
	
	Method BeginRender()
		
		Can.PushMatrix()
		
		Can.Scale(Width/VirRes.x,Height/VirRes.y)
		
	End 
	
	Method UpdateUI()
		
		UI.Update()
		
	End 
	
	Method RenderUI()
		
		UI.Render()
		
	End 
	
	Method EndRender()
		
		Can.PopMatrix()
		
	End 
	
	Method DrawString(txt:String,x:Int,y:Int)
		
		Can.DrawText(txt,x,y)
			
	End 
		
	Method DoRender() Virtual 
		
	End 
	
	Method OnRender(canvas:Canvas) Override
		
		Can = canvas

		CC = Can
		
		App.RequestRender()
		
		canvas.Clear(ClearCol)
		
		DoRender()
		
	End 
	
End 



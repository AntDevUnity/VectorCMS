Namespace VectorSite

#Import "VectorSite"

' Built in site editor.

Class VectorEngineSite Extends VectorSite
	
	Method New()
		
		Super.New("VectorEngine-Official Website",1024,768)

		UI.Root = New PanelForm(10,10,700,400)
		
		Local test:LabelForm = New LabelForm("Welcome to our - VectorEngine - Website.",80,100)
		
		UI.Root.Add(test)
		
		Local but1:ButtonForm = New ButtonForm(20,30,180,35,"VectorEngine")
		Local but2:ButtonForm = New ButtonForm(220,30,180,35,"Starlit Empire")
		Local but3:ButtonForm = New ButtonForm(420,30,180,35,"Forums")
		
		but1.OnClick = But1
		
		test.Add(but1)
		test.Add(but2)
		test.Add(but3)
		
	End 
	
	Function But1:Bool(b:Int)
		
		Print("Button 1!")
		
		Return True
		
	End 
		
	Method DoRender() Override 
		
	
		UpdateUI()
		
		BeginRender()
		
		RenderUI()
		
		EndRender()
		
		DrawString("Hey!",5,5)
		
		
	End 
	
End 

Function Main()
	
	New AppInstance
	
	New VectorEngineSite
	
	App.Run()
	
End
	

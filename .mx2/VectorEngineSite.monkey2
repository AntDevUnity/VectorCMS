Namespace VectorSite

#Import "VectorSite"



Class VectorEngineSite Extends VectorSite
	
	Method New()
		
		Super.New("VectorEngine-Official Website",1024,768)

		UI.Root = New PanelForm(10,10,400,400)
		
		Local test:LabelForm = New LabelForm("Testing",5,5)
		
		UI.Root.Add(test)
		
		Local but1:ButtonForm = New ButtonForm(40,50,180,35,"VectorEngine")
		
		test.Add(but1)
		
	End 
		
	Method DoRender() Override 
		
	

		
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
	

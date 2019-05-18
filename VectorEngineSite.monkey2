Namespace VectorSite

#Import "VectorSite"

' Built in site editor.

Class VectorEngineSite Extends VectorSite
	
	Field CurPage:VectorPage
	
	Method New()
		
		Super.New("VectorEngine-Official Website",1024,768)

		CurPage = New LoginPage()
	
		
	End 
	

	Method DoRender() Override 
		
	
		CurPage.OnUpdate()
		
		BeginRender()
		
		CurPage.OnRender()
		
		EndRender()
		
		
		'DrawString("Hey!",5,5)
		
		
	End 
	
End 

Function Main()
	
	New AppInstance
	
	New VectorEngineSite
	
	App.Run()
	
End
	

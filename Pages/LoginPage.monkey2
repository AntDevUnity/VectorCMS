Namespace VectorSite

Class LoginPage Extends VectorPage
	
	
	Method New()
		
			UI = New VectorUI()
		OnInit()
		
		
	End 
	
	Method OnInit() Override
		
		Local back:VectorUIForm = New PanelForm(10,10,VectorSite.VirRes.x-20,VectorSite.VirRes.y-20)
	
		UI.Root = back 
		
	End 
	
	Method OnUpdate() Override
		
		UI.Update()
		
	End 
	
	Method OnRender() Override
		
		UI.Render()
		
	End 
	
End 
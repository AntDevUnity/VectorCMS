Namespace VectorSite

Class LoginPage Extends VectorPage
	
	Field LoginWin:WindowForm
	
	Method New()
		
			UI = New VectorUI()
		OnInit()
		
		
	End 
	
	Method OnInit() Override
		
		Local back:VectorUIForm = New PanelForm(10,10,VectorSite.VirRes.x-20,VectorSite.VirRes.y-20)
	
		UI.Root = back 
	
		LoginWin = New WindowForm(VectorSite.VirRes.x/2-200,VectorSite.VirRes.y/2-150,400,300,"VectorEngine - Login")
		
		Print "LX:"+LoginWin.Pos.x
		
		back.Add(LoginWin)	
		
		Local user:TextBoxForm = New TextBoxForm(20,40,180,25,"Admin")
		Local pass:TextBoxForm = New TextBoxForm(20,75,180,25,"")
		
		LoginWin.Add(user)
		LoginWin.Add(pass)
		
	End 
	
	Method OnUpdate() Override
		
		UI.Update()
		
	End 
	
	Method OnRender() Override
		
		UI.Render()
		
	End 
	
End 
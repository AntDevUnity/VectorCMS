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
		
		Local user_lab:LabelForm = New LabelForm("Username",10,46)
		Local pass_lab:LabelForm = New LabelForm("Password",10,81)
		
		Local user:TextBoxForm = New TextBoxForm(85,40,300,25,"Admin")
		Local pass:TextBoxForm = New TextBoxForm(85,75,300,25,"")
		
		Local login:ButtonForm = New ButtonForm(20,260,100,30,"Login")
		Local signup:ButtonForm = New ButtonForm(140,260,100,30,"SignUp")
		
		LoginWin.Add(user)
		LoginWin.Add(pass)
		LoginWin.Add(user_lab)
		LoginWin.Add(pass_lab)
		LoginWin.Add(login)
		LoginWin.Add(signup)
		
	End 
	
	Method OnUpdate() Override
		
		UI.Update()
		
	End 
	
	Method OnRender() Override
		
		UI.Render()
		
	End 
	
End 
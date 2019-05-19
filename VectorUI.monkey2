Namespace VectorSite 


Class VectorUI

	Field Root:VectorUIForm
	
	Method New()
		
	End 
	
	Field LastMx:Int,LastMy:Int 
	
	Global OverForm:VectorUIForm
	
	Global PressedForm:VectorUIForm[] = New VectorUIForm[32]
	
	Global ActiveForm:VectorUIForm
	
	Method Update()
		
		Local update_list:List<VectorUIForm> = New List<VectorUIForm>
		
		AddToListForward(Root,update_list)
		
		update_list = InvertList(update_list)
		
		Local mx:Int,my:Int
		
		mx = Mouse.Location.x
		my = Mouse.Location.y 
		
		Local dx:Int,dy:Int
		
		dx = mx - LastMx
		dy = my - LastMy
		
		LastMx = mx
		LastMy = my
		
		If PressedForm[0] = Null
		
		For Local form:=Eachin update_list
			
			If form.InBounds(mx,my)
				
				If OverForm = form
					
					If Not PressedForm[0] = OverForm
					
						OverForm.OnMouseMove(mx,my,dx,dy)
					
					End 
					
				Else
			
					If Not OverForm = Null
						
						OverForm.OnMouseLeave()
						
					End 
					
					OverForm = form
					OverForm.OnMouseEnter()
				
				End 
				
				Exit 
				
			End 
			
		Next
		
		End 
		

		If Mouse.ButtonDown(MouseButton.Left)
		
			If OverForm
				
				If PressedForm[0] = Null
					
					PressedForm[0] = OverForm
					
					If ActiveForm <> OverForm And ActiveForm <> Null
						
						ActiveForm.Deactivate()
						
					End 
					
					ActiveForm = OverForm
					ActiveForm.Activate()
				
					PressedForm[0].OnMouseDown(Button.Left)
				
				Else If PressedForm[0] = OverForm
					
					OverForm.OnMouseMove(mx,my,dx,dy)
					If OverForm.OnDrag <> Null
						
						OverForm.OnDrag(dx,dy)
						
					End 
					
				End 
				
			End 
			
		Else
			
			If PressedForm[0] 
				
				PressedForm[0].OnMouseUp(Button.Left)
				PressedForm[0] = Null
				
			End 
			
		End 
			
				
		If ActiveForm <> Null
			
			
			While True
				
				Local c:Int = Keyboard.GetChar()
				
				If c = 0 Exit 
				
				Local cs:String = String.FromChar(c)
				
				If okeys.Contains(cs)
					
					ckey = c
					ActiveForm.OnKeyDown(c)
					
				End 
				
			
			Wend 
			
			If ckey <>0
				
				Local cs:String = String.FromChar(ckey)
				cs = cs.ToLower()
				
				Local ck:Key = Key.Pause
				
				If cs = "a"
					
					ck = Key.A
					
				End 
				
				If cs = "b" ck = Key.B
					
				If cs = "c" ck = Key.C
				
				If cs = "d" ck = Key.D
					
				If cs = "e" ck = Key.E
					
				If cs = "f" ck = Key.F
					
				If cs = "g" ck = Key.G
					
				If cs = "h" ck = Key.H
					
				If cs = "i" ck = Key.I
					
				If cs = "j" ck = Key.J
					
				If cs = "k" ck = Key.K
					
				If cs = "l" ck = Key.L
					
				If cs = "m" ck = Key.M
					
				If cs = "n"  ck = Key.N
				
				If cs = "o" ck = Key.O
					
				If cs = "p" ck = Key.P
					
				If cs = "q" ck = Key.Q
					
				If cs= "r" ck = Key.R
					
				If cs = "s" ck = Key.S
					
			 	If cs = "t" ck = Key.T
				 
				If cs = "u" ck = Key.U
				
				If cs= "v" ck = Key.V
					
				If cs= "w" ck = Key.W
					
				If cs = "x" ck = Key.X
					
				If cs = "y" ck = Key.Y
				
				If cs = "z" ck = Key.Z
					
				
				If ck <> Key.Pause
					
					ActiveForm.OnKeyUp(ckey)
					ckey = 0
					
				End 
				
				
			End 
		
			
		End 
				

	End 
	Global ckey:Int = 0
	
	Global okeys:String = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

	Method Render()
		
		Local render_list:List<VectorUIForm> = New List<VectorUIForm>
		
		AddToListForward(Root,render_list)
		
		RenderList(render_list)
		
	End 
	
	Method RenderList(list:List<VectorUIForm>)
		
		For Local form:=Eachin list
		
			form.OnDraw()
			
		Next
			
		
	End 

	Method AddToListForward(ui:VectorUIForm,list:List<VectorUIForm>)

		If ui = Null Return 

		list.Add(ui)
		
		If ui.Sub = Null Return 
		
		If ui.Sub.Count() = 0 Return 
		
		For Local form:=Eachin ui.Sub
			
		 	AddToListForward(form,list)
			
		Next 

	End 
	
	Method InvertList:List<VectorUIForm>(list:List<VectorUIForm>)
		
		Local item_c:Int = list.Count()
		
		If item_c = 0
			
			Return list
			
		End 
		
		Local new_list:List<VectorUIForm> = New List<VectorUIForm>
		
		Local items:VectorUIForm[] = list.ToArray()
		
		For Local i:Int = item_c-1 To 0 Step -1
			
			Local item:VectorUIForm = items[i]
			
			
			new_list.Add(item)
			
			
		Next
			
		
		Return new_list 
		
	End 

End 
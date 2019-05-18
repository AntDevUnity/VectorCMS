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
					ActiveForm = OverForm
				
					PressedForm[0].OnMouseDown(Button.Left)
				
				Else If PressedForm[0] = OverForm
					
					OverForm.OnMouseMove(mx,my,dx,dy)
					
				End 
				
			End 
			
		Else
			
			If PressedForm[0] 
				
				PressedForm[0].OnMouseUp(Button.Left)
				PressedForm[0] = Null
				
			End 
			
		End 
			
				
				
				

	End 

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
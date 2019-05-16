Namespace VectorSite 


Class VectorUI

	Field Root:VectorUIForm
	
	Method New()
		
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

		list.Add(ui)
		
		For Local form:=Eachin ui.Sub
			
		 	AddToListForward(form,list)
			
		Next 

	End 
	
	Method InvertList:List<VectorUIForm>(list:List<VectorUIForm>)
		
		Return list 
		
	End 

End 
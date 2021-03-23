void singen(){

	TF1 *f1 = new TF1("f1","sin(x)",0,3.14);
	f1->SetLineWidth(3);
	TF1 *f2 = new TF1("f1","10*sin(x)",0,3.14);
	f2->SetLineWidth(3);
	f2->SetLineColor(kBlack);
	f2->GetXaxis()->SetTitle("Time [a.u.]");
	f2->GetYaxis()->SetTitle("Amplitude [a.u.]");
	f2->SetTitle("");
	f1->SetTitle("");
	
	TCanvas *c1 = new TCanvas("c1","c1",1600,1200);
	f2->Draw();
	f1->Draw("SAME");
	c1->SaveAs("../amplisin.png");




}

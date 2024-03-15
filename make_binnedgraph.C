void make_binnedgraph()
{
    vector<Double_t> vecbinContentse1;
    vector<Double_t> vecbinContentse2;
    vector<Double_t> vecbinContentse3;
    vector<Double_t> vecbinContentse4;
    vector<Double_t> vecbinContentsmu1;
    vector<Double_t> vecbinContentsmu2;
    vector<Double_t> vecbinContentsmu3;
    vector<Double_t> vecbinContentsmu4;
    vector<Double_t> vecbinEdges;
    vector<Double_t> vecbinErrorse1;
    vector<Double_t> vecbinErrorse2;
    vector<Double_t> vecbinErrorse3;
    vector<Double_t> vecbinErrorse4;
    vector<Double_t> vecbinErrorsmu1;
    vector<Double_t> vecbinErrorsmu2;
    vector<Double_t> vecbinErrorsmu3;
    vector<Double_t> vecbinErrorsmu4;

    fstream file_e1;
    fstream file_e2;
    fstream file_e3;
    fstream file_e4;
    fstream file_mu1;
    fstream file_mu2;
    fstream file_mu3;
    fstream file_mu4;
    
    //file_e.open("eventrate_e.dat",ios::in);
    //file_mu.open("eventrate_mu.dat",ios::in);
    file_e1.open("eventrate_e_cmue_1.0e-27_arg1.dat",ios::in);
    file_e2.open("eventrate_e_cmue_1.0e-27_arg2.dat",ios::in);
    file_e3.open("eventrate_e_cmue_1.0e-27_arg3.dat",ios::in);
    file_e4.open("eventrate_e_cmue_1.0e-27_arg4.dat",ios::in);
    file_mu1.open("eventrate_mu_cmue_1.0e-27_arg1.dat",ios::in);
    file_mu2.open("eventrate_mu_cmue_1.0e-27_arg2.dat",ios::in);
    file_mu3.open("eventrate_mu_cmue_1.0e-27_arg3.dat",ios::in);
    file_mu4.open("eventrate_mu_cmue_1.0e-27_arg4.dat",ios::in);

    Double_t x,y,res;

    while(x<8)
    {
        file_e1 >> x >> y >> res;
        vecbinContentse1.push_back(y);
        vecbinErrorse1.push_back(res);
        file_e2 >> x >> y >> res;
        vecbinContentse2.push_back(y);
        vecbinErrorse2.push_back(res);
        file_e3 >> x >> y >> res;
        vecbinContentse3.push_back(y);
        vecbinErrorse3.push_back(res);
        file_e4 >> x >> y >> res;
        vecbinContentse4.push_back(y);
        vecbinErrorse4.push_back(res);
        vecbinEdges.push_back(x);
        file_mu1 >> x >> y >> res;
        vecbinContentsmu1.push_back(y);
        vecbinErrorsmu1.push_back(res);
        file_mu2 >> x >> y >> res;
        vecbinContentsmu2.push_back(y);
        vecbinErrorsmu2.push_back(res);
        file_mu3 >> x >> y >> res;
        vecbinContentsmu3.push_back(y);
        vecbinErrorsmu3.push_back(res);
        file_mu4 >> x >> y >> res;
        vecbinContentsmu4.push_back(y);
        vecbinErrorsmu4.push_back(res);
        if(file_e1.eof()) break;
    }

    Double_t binContentse1[vecbinContentse1.size()];
    Double_t binContentse2[vecbinContentse2.size()];
    Double_t binContentse3[vecbinContentse3.size()];
    Double_t binContentse4[vecbinContentse4.size()];
    Double_t binContentsmu1[vecbinContentsmu1.size()];
    Double_t binContentsmu2[vecbinContentsmu2.size()];
    Double_t binContentsmu3[vecbinContentsmu3.size()];
    Double_t binContentsmu4[vecbinContentsmu4.size()];
    Double_t binErrorse1[vecbinErrorse1.size()];
    Double_t binErrorse2[vecbinErrorse2.size()];
    Double_t binErrorse3[vecbinErrorse3.size()];
    Double_t binErrorse4[vecbinErrorse4.size()];
    Double_t binErrorsmu1[vecbinErrorsmu1.size()];
    Double_t binErrorsmu2[vecbinErrorsmu2.size()];
    Double_t binErrorsmu3[vecbinErrorsmu3.size()];
    Double_t binErrorsmu4[vecbinErrorsmu4.size()];
    Double_t binEdges[vecbinEdges.size()];
    for (size_t i = 0; i < vecbinEdges.size(); ++i) {
        binContentse1[i] = vecbinContentse1[i];
        binContentse2[i] = vecbinContentse2[i];
        binContentse3[i] = vecbinContentse3[i];
        binContentse4[i] = vecbinContentse4[i];
        binContentsmu1[i] = vecbinContentsmu1[i];
        binContentsmu2[i] = vecbinContentsmu2[i];
        binContentsmu3[i] = vecbinContentsmu3[i];
        binContentsmu4[i] = vecbinContentsmu4[i];
        binErrorse1[i] = vecbinErrorse1[i];
        binErrorse2[i] = vecbinErrorse2[i];
        binErrorse3[i] = vecbinErrorse3[i];
        binErrorse4[i] = vecbinErrorse4[i];
        binErrorsmu1[i] = vecbinErrorsmu1[i];
        binErrorsmu2[i] = vecbinErrorsmu2[i];
        binErrorsmu3[i] = vecbinErrorsmu3[i];
        binErrorsmu4[i] = vecbinErrorsmu4[i];
        binEdges[i] = vecbinEdges[i];
    }
    
    file_e1.close();
    file_e2.close();
    file_e3.close();
    file_e4.close();
    file_mu1.close();
    file_mu2.close();
    file_mu3.close();
    file_mu4.close();
    
    int numBinse1 = sizeof(binContentse1) / sizeof(binContentse1[0]) - 1;
    int numBinse2 = sizeof(binContentse2) / sizeof(binContentse2[0]) - 1;
    int numBinse3 = sizeof(binContentse3) / sizeof(binContentse3[0]) - 1;
    int numBinse4 = sizeof(binContentse4) / sizeof(binContentse4[0]) - 1;
    int numBinsmu1 = sizeof(binContentsmu1) / sizeof(binContentsmu1[0]) - 1;
    int numBinsmu2 = sizeof(binContentsmu2) / sizeof(binContentsmu2[0]) - 1;
    int numBinsmu3 = sizeof(binContentsmu3) / sizeof(binContentsmu3[0]) - 1;
    int numBinsmu4 = sizeof(binContentsmu4) / sizeof(binContentsmu4[0]) - 1;

    TH1D *hist_e1 = new TH1D("hist", "Event Rate", numBinse1,binEdges);
    TH1D *hist_e2 = new TH1D("hist", "Event Rate", numBinse2,binEdges);
    TH1D *hist_e3 = new TH1D("hist", "Event Rate", numBinse3,binEdges);
    TH1D *hist_e4 = new TH1D("hist", "Event Rate", numBinse4,binEdges);
    TH1D *hist_mu1 = new TH1D("hist", "Event Rate", numBinsmu1,binEdges);
    TH1D *hist_mu2 = new TH1D("hist", "Event Rate", numBinsmu2,binEdges);
    TH1D *hist_mu3 = new TH1D("hist", "Event Rate", numBinsmu3,binEdges);
    TH1D *hist_mu4 = new TH1D("hist", "Event Rate", numBinsmu4,binEdges);

    for (Int_t i = 0; i < numBinse1; ++i) {
        hist_e1->SetBinContent(i+1, binContentse1[i]);
    }
    for (Int_t i = 0; i < numBinse2; ++i) {
        hist_e2->SetBinContent(i+1, binContentse2[i]);
    }
    for (Int_t i = 0; i < numBinse3; ++i) {
        hist_e3->SetBinContent(i+1, binContentse3[i]);
    }
    for (Int_t i = 0; i < numBinse4; ++i){
        hist_e4->SetBinContent(i+1, binContentse4[i]);
    }
    for (Int_t i = 0; i < numBinsmu1; ++i) {
        hist_mu1->SetBinContent(i+1, binContentsmu1[i]);
    }
    for (Int_t i = 0; i < numBinsmu2; ++i) {
        hist_mu2->SetBinContent(i+1, binContentsmu2[i]);
    }
    for (Int_t i = 0; i < numBinsmu3; ++i) {
        hist_mu3->SetBinContent(i+1, binContentsmu3[i]);
    }
    for (Int_t i = 0; i < numBinsmu4; ++i) {
        hist_mu4->SetBinContent(i+1, binContentsmu4[i]);
    }

    hist_e1->SetStats(0);
    hist_e2->SetStats(0);
    hist_e3->SetStats(0);
    hist_e4->SetStats(0);
    hist_mu1->SetStats(0);
    hist_mu2->SetStats(0);
    hist_mu3->SetStats(0);
    hist_mu4->SetStats(0);


    TCanvas *canvas_e = new TCanvas("canvas", "Binned Graph", 800, 600);

    hist_e1->GetXaxis()->SetTitle("Energy");
    hist_e1->GetYaxis()->SetTitle("Event Rate");
    hist_e1->SetTitle("Energia x tx. de eventos no canal de aparecimento do #nu_{e}");
    hist_e1->GetXaxis()->CenterTitle(true);
    hist_e1->GetYaxis()->CenterTitle(true);
    hist_e1->SetLineColor(6);
    hist_e1->Draw();
    hist_e2->SetLineColor(4);
    hist_e2->Draw("same");
    hist_e3->SetLineColor(3);
    hist_e3->Draw("same");
    hist_e4->SetLineColor(2);
    hist_e4->Draw("same");

    //canvas_e->SaveAs("eventratebingraph_e.png");
    canvas_e->SaveAs("eventratebingraph_e_cmue_1.0e-27.png");

    TCanvas *canvas_mu = new TCanvas("canvas", "Binned Graph", 800, 600);

    hist_mu1->GetXaxis()->SetTitle("Energy");
    hist_mu1->GetYaxis()->SetTitle("Event Rate");
    hist_mu1->SetTitle("Energia x tx. de eventos no canal de desaparecimento do #nu_{#mu}");
    hist_mu1->GetXaxis()->CenterTitle(true);
    hist_mu1->GetYaxis()->CenterTitle(true);
    hist_mu1->SetLineColor(6);
    hist_mu1->Draw();
    hist_mu2->SetLineColor(4);
    hist_mu2->Draw("same");
    hist_mu3->SetLineColor(3);
    hist_mu3->Draw("same");
    hist_mu4->SetLineColor(2);
    hist_mu4->Draw("same");

    //canvas_mu->SaveAs("eventratebingraph_mu.png");
    canvas_mu->SaveAs("eventratebingraph_mu_cmue_1.0e-27.png");

}

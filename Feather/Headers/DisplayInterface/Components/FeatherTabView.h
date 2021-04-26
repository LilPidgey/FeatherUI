﻿#pragma once
#include <DisplayInterface/FeatherComponent.h>
#include <DisplayInterface/Components/FeatherButton.h>
#include <DisplayInterface/Components/FeatherContainer.h>

struct FeatherTabViewTab
{
    int tabId;
    FeatherButton* button;
    FeatherContainer* view;
};

class FeatherTabView : public FeatherComponent
{
public:
    FeatherTabView(int x, int y, int width, int height, int buttonHeight, ID3DXFont* font, std::vector<const char*> tabNames);

    void SetActiveTab(int tabIndex);
    bool AddToTab(FeatherComponent* component, int tabIndex);

private:
    std::vector<FeatherTabViewTab> tabs;
    
    void OnTabButtonClick(FeatherButton* button);
};

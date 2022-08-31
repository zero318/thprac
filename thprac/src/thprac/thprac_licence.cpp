﻿#include "thprac_licence.h"
#include <imgui.h>

namespace THPrac {
namespace Gui {
    void ShowLicenceInfo()
    {
        if (ImGui::BeginTabBar("COPYING_TABS", ImGuiTabBarFlags_None)) {
            if (ImGui::BeginTabItem("distorm")) {
                ImGui::BeginChild("COPYING.distorm");
                ImGui::TextUnformatted((const char*)COPYING_distorm);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Freetype")) {
                ImGui::BeginChild("COPYING.Freetype");
                ImGui::TextUnformatted((const char*)COPYING_FreeType);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("imgui")) {
                ImGui::BeginChild("COPYING.imgui");
                ImGui::TextUnformatted((const char*)COPYING_imgui);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("MetroHash")) {
                ImGui::BeginChild("COPYING.MetroHash");
                ImGui::TextUnformatted((const char*)COPYING_MetroHash);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("rapidjson")) {
                ImGui::BeginChild("COPYING.rapidjson");
                ImGui::TextUnformatted((const char*)COPYING_rapidjson);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("robin-map")) {
                ImGui::BeginChild("COPYING.robin-map");
                ImGui::TextUnformatted((const char*)COPYING_robin_map);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("thprac")) {
                ImGui::BeginChild("COPYING.thprac");
                ImGui::TextUnformatted((const char*)COPYING_thprac);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
            ImGui::EndTabBar();
        }
    }
}
}

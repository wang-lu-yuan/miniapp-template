// Copyright (C) 2025 Template Author
//
// This file is part of miniapp-template.
//
// miniapp-template is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// miniapp-template is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with miniapp-template. If not, see <https://www.gnu.org/licenses/>.

#include "JSAPI.hpp"

// Register your JS API functions here.
// Each function registered here becomes callable from the Vue/JS layer via window.jsapi.*
//
// Example:
//   JSAPI_REGISTER("myFunction", [](const nlohmann::json &params) -> nlohmann::json {
//       std::string input = params["input"].get<std::string>();
//       return nlohmann::json{{"result", "Hello, " + input}};
//   });
//
// In JS (ui/src):
//   const result = await window.jsapi.myFunction({ input: "world" });
//   console.log(result.result); // "Hello, world"

void JSAPI::RegisterFunctions() {
    // TODO: register your API functions here
}

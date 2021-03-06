// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/extensions/extension_apitest.h"
#include "net/base/mock_host_resolver.h"

// Disabled, http://crbug.com/63589.
IN_PROC_BROWSER_TEST_F(ExtensionApiTest, DISABLED_JavaScriptURLPermissions) {
  host_resolver()->AddRule("a.com", "127.0.0.1");
  host_resolver()->AddRule("b.com", "127.0.0.1");
  ASSERT_TRUE(StartTestServer());

  ASSERT_TRUE(RunExtensionTest("tabs/javascript_url_permissions")) << message_;
}

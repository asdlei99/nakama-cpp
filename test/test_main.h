/*
 * Copyright 2019 The Nakama Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <chrono>
#include <thread>
#include <iostream>
#include "nakama-cpp/Nakama.h"

namespace Nakama {
namespace Test {

    class NTest
    {
    public:
        NTest(const char* name);

        void createWorkingClient();
        void createClientWithParameters(const DefaultClientParameters& parameters);

        void runTest();
        void stopTest(bool succeeded = false);

        NClientPtr client;

    protected:
        bool _continue_loop = true;
        bool _testSucceeded = false;
    };

    void setWorkingClientParameters(DefaultClientParameters& parameters);

} // namespace Test
} // namespace Nakama

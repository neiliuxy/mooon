/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: eyjian@qq.com or eyjian@gmail.com
 */
#ifndef MOOON_ECHO_SERVER_CONFIG_IMPL_H
#define MOOON_ECHO_SERVER_CONFIG_IMPL_H
#include <mooon/server/server.h>

class CConfigImpl: public mooon::server::IConfig
{
public:
    bool init(uint16_t port);

private:
    virtual const mooon::net::ip_port_pair_array_t& get_listen_parameter() const;

private:
    mooon::net::ip_port_pair_array_t _ip_port_pair_array;
};

#endif // MOOON_ECHO_SERVER_CONFIG_IMPL_H

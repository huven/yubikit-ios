// Copyright 2018-2019 Yubico AB
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef YKFAPDUPrivate_h
#define YKFAPDUPrivate_h

#import "YKFAPDU.h"

@interface YKFAPDU()

/*!
 The APDU raw data which cotains the YubiKey iAP2 Protocol framing.
 */
@property (nonatomic, readonly) NSData *ylpApduData;

/*!
The APDU raw data.
*/
@property (nonatomic, readonly) NSData *apduData;

@end

#endif

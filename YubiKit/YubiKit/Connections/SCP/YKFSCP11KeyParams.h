// Copyright Yubico AB
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

#ifndef YKFSCP11KeyParams_h
#define YKFSCP11KeyParams_h

#import "YKFSCPKeyParamsProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class YKFSCPKeyRef, YKFSCPStaticKeys;


@interface YKFSCP11KeyParams : NSObject <YKFSCPKeyParamsProtocol>

@property (nonatomic, strong, readonly) YKFSCPKeyRef *keyRef;
@property (nonatomic, assign, readonly) SecKeyRef pkSdEcka;
@property (nonatomic, strong, nullable, readonly) YKFSCPKeyRef *oceKeyRef;
@property (nonatomic, assign, nullable, readonly) SecKeyRef skOceEcka;
@property (nonatomic, strong, readonly) NSArray *certificates;

- (instancetype)initWithKeyRef:(YKFSCPKeyRef *)keyRef
                     pkSdEcka:(SecKeyRef)pkSdEcka
                   oceKeyRef:(nullable YKFSCPKeyRef *)oceKeyRef
                   skOceEcka:(nullable SecKeyRef)skOceEcka
                 certificates:(NSArray *)certificates NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

#endif /* YKFSCP11KeyParams_h */

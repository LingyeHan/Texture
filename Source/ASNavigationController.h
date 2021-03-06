//
//  ASNavigationController.h
//  Texture
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the /ASDK-Licenses directory of this source tree. An additional
//  grant of patent rights can be found in the PATENTS file in the same directory.
//
//  Modifications to this file made after 4/13/2017 are: Copyright (c) 2017-present,
//  Pinterest, Inc.  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//

#import <UIKit/UIKit.h>

#import <AsyncDisplayKit/ASVisibilityProtocols.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * ASNavigationController
 *
 * @discussion ASNavigationController is a drop in replacement for UINavigationController
 * which improves memory efficiency by implementing the @c ASManagesChildVisibilityDepth protocol.
 * You can use ASNavigationController with regular UIViewControllers, as well as ASViewControllers. 
 * It is safe to subclass or use even where AsyncDisplayKit is not adopted.
 *
 * @see ASManagesChildVisibilityDepth
 */
@interface ASNavigationController : UINavigationController <ASManagesChildVisibilityDepth>

@end

NS_ASSUME_NONNULL_END

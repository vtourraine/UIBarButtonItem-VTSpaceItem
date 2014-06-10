//
// UIBarButtonItem+VTSpaceItem.h
//
// Copyright (c) 2014 Vincent Tourraine (http://www.vtourraine.net)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

/**
 `UIBarButtonItem` category for easy to instantiate space items.
 */
@interface UIBarButtonItem (VTSpaceItem)

/**
 Creates a flexible space item (`UIBarButtonSystemItemFlexibleSpace`).

 @return A newly created item.
 */
+ (instancetype)vt_flexibleSpaceItem;

/**
 Creates a fixed space item (`UIBarButtonSystemItemFixedSpace`).

 @param width Size for the fixed space.

 @return A newly created item.
 */
+ (instancetype)vt_fixedSpaceItemWithWidth:(CGFloat)width;

@end

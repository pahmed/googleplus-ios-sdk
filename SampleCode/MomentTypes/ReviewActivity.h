//
//  ReviewActivity.h
//
//  Copyright 2013 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "Activity.h"

@interface ReviewActivity : Activity

@property(copy, nonatomic) NSString *reviewURL;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *ratingValue;
@property(copy, nonatomic) NSString *bestRating;
@property(copy, nonatomic) NSString *worstRating;

@end

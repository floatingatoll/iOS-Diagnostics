//
//  ELLEnergyBreakdownReportModel.h
//  iOS Diagnostics
//
//  Created by Christopher Anderson on 10/11/2014.
//  Copyright (c) 2014 Electric Labs. All rights reserved.
//

#import "ELLReportSectionModel.h"

@interface ELLEnergyBreakdownReportModel : ELLReportSectionModel

- (instancetype)initWithLogAnalyser:(ELLSqlPowerLogAnalyser *)logAnalyser startDate:(NSDate *)startDate endDate:(NSDate *)endDate processName:(NSString *)processName;

@end

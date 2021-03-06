/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2MPMetric : PBCodable <NSCopying> {
    C2MPClientInfo * _clientInfo;
    struct { 
        unsigned int metricType : 1; 
    }  _has;
    int  _metricType;
    C2MPNetworkStatistic * _networkStatistic;
}

@property (nonatomic, retain) C2MPClientInfo *clientInfo;
@property (nonatomic, readonly) bool hasClientInfo;
@property (nonatomic) bool hasMetricType;
@property (nonatomic, readonly) bool hasNetworkStatistic;
@property (nonatomic) int metricType;
@property (nonatomic, retain) C2MPNetworkStatistic *networkStatistic;

- (void).cxx_destruct;
- (int)StringAsMetricType:(id)arg1;
- (id)clientInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientInfo;
- (bool)hasMetricType;
- (bool)hasNetworkStatistic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)metricType;
- (id)metricTypeAsString:(int)arg1;
- (id)networkStatistic;
- (bool)readFrom:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setHasMetricType:(bool)arg1;
- (void)setMetricType:(int)arg1;
- (void)setNetworkStatistic:(id)arg1;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser.
 */

@protocol MTLAccelerationStructureCommandEncoderSPI <MTLAccelerationStructureCommandEncoder>

@required

- (void)deserializeAccelerationStructure:(id <MTLAccelerationStructure>)arg1 fromBuffer:(id <MTLBuffer>)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)deserializeAccelerationStructure:(id <MTLAccelerationStructure>)arg1 primitiveAccelerationStructures:(NSArray *)arg2 fromBuffer:(id <MTLBuffer>)arg3 serializedBufferOffset:(unsigned long long)arg4;
- (void)serializeAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 serializedBufferOffset:(unsigned long long)arg3;
- (void)writeDeserializedAccelerationStructureSize:(id <MTLBuffer>)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id <MTLBuffer>)arg3 sizeBufferOffset:(unsigned long long)arg4;
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id <MTLBuffer>)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id <MTLBuffer>)arg3 sizesBufferOffset:(unsigned long long)arg4;
- (void)writeGeometryOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 geometryBufferOffset:(unsigned long long)arg3;
- (void)writeGeometrySizeOfAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 sizeBufferOffset:(unsigned long long)arg3;
- (void)writeSerializedAccelerationStructureSize:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 sizeBufferOffset:(unsigned long long)arg3;

@end
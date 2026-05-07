// Function: FUN_0099b9f2
// Address: 0099b9f2
// Size: 869 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "The result frame indicated not storage records returned, but extra reslt data (size %d) was returne...
//   "virtual void pace::ILok2Commander::FindAuthRecord_ExtractExtraResultData(const CMD_RsltPayload_Find...
//   "There is not enough extra result data (%d).  Expected at least a size of %d for %d storage record(s...

void FUN_0099b9f2(int64_t *param_1,int64_t *param_2,size_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void*puVar4;
  uint64_t uVar5;
  void *pvVar6;
  void*puVar7;
  int64_t arg1;
  code *pcVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  code *local_60;
  void*puStack_58;
  int64_t local_50;
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  if (param_1 != (int64_t *)0x0) {
    param_1[1] = *param_1;
  }
  if ((uint64_t)*(uint *)(arg1 + 0x20) == 0) {
    if ((int)(lVar1 - lVar2) != 0) {
      FUN_00925fd0();
      uVar3 = FUN_00926010();
      FUN_00983230();
      uVar10 = FUN_00928ab0("virtual void pace::ILok2Commander::FindAuthRecord_ExtractExtraResultData(const CMD_RsltPayload_FindAuthRecord_Struct &, const vector<uint8_t> &, vector<EEPROM_StorageRecordStruct> *)"
                            ,0x5c4);
      FUN_009c720b(uVar10,uVar3);
    }
  }
  else {
    if ((lVar1 - lVar2 & 0xffffffffU) < ((uint64_t)*(uint *)(arg1 + 0x20) << 5 | 4)) {
      FUN_00925fd0();
      uVar3 = FUN_00926010();
      FUN_00983230();
      FUN_00983230();
      local_60 = FUN_009595d8;
      puStack_58 = (void*)&LAB_009977a0;
      FUN_00983230();
      uVar10 = FUN_00928ab0("virtual void pace::ILok2Commander::FindAuthRecord_ExtractExtraResultData(const CMD_RsltPayload_FindAuthRecord_Struct &, const vector<uint8_t> &, vector<EEPROM_StorageRecordStruct> *)"
                            ,0x5cf);
      FUN_009c720b(uVar10,uVar3);
    }
    if ((param_1 != (int64_t *)0x0) && (*(uint *)(arg1 + 0x20) != 0)) {
      puVar7 = (void*)*param_2;
      uVar9 = 0;
      do {
        (**(code **)(*this_ptr + 0x2a0))();
        puVar4 = (void*)param_1[1];
        if (puVar4 == (void*)param_1[2]) {
          if (0x7ffffffffffffff < ((int64_t)puVar4 - *param_1 >> 5) + 1U) {
                                std::__vector_base_common<true>::__throw_length_error();
          }
          FUN_009a8bd0(param_1 + 2);
          puStack_58[3] = puVar7[3];
          puStack_58[2] = puVar7[2];
          uVar3 = *puVar7;
          puStack_58[1] = puVar7[1];
          *puStack_58 = uVar3;
          puVar4 = puStack_58 + 4;
          pcVar8 = *param_1;
          puStack_58 = (void*)param_1[1];
          pvVar6 = (void *)((int64_t)puStack_58 - (int64_t)pcVar8);
          if (0 < (int64_t)pvVar6) {
            _memcpy(puVar4,pvVar6,param_3);
            pcVar8 = *param_1;
            puStack_58 = (void*)param_1[1];
          }
          *param_1 = (int64_t)local_60 - (int64_t)pvVar6;
          param_1[1] = (int64_t)puVar4;
          lVar1 = param_1[2];
          param_1[2] = local_50;
          pvVar6 = (void *)0x0;
          if ((int64_t)puStack_58 - (int64_t)pcVar8 != 0) {
            uVar5 = ~(((int64_t)puStack_58 - (int64_t)pcVar8) - 0x20U >> 5);
            pvVar6 = (void *)(uVar5 * 0x20);
            puStack_58 = puStack_58 + uVar5 * 4;
          }
          local_60 = pcVar8;
          local_50 = lVar1;
          if (pcVar8 != 0x0) {
            operator_delete(pvVar6);
          }
        }
        else {
          puVar4[3] = puVar7[3];
          puVar4[2] = puVar7[2];
          uVar3 = *puVar7;
          puVar4[1] = puVar7[1];
          *puVar4 = uVar3;
          param_1[1] = (int64_t)(puVar4 + 4);
        }
        uVar9 = uVar9 + 1;
        puVar7 = puVar7 + 4;
      } while (uVar9 < *(uint *)(arg1 + 0x20));
    }
  }
  return;
}


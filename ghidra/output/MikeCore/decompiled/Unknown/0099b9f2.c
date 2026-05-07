// Function: FUN_0099b9f2
// Address: 0099b9f2
// Size: 869 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "The result frame indicated not storage records returned, but extra reslt data (size %d) was returne...
//   "virtual void pace::ILok2Commander::FindAuthRecord_ExtractExtraResultData(const CMD_RsltPayload_Find...
//   "There is not enough extra result data (%d).  Expected at least a size of %d for %d storage record(s...


void FUN_0099b9f2(longlong *param_1,longlong *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong unaff_RSI;
  code *pcVar8;
  longlong *unaff_RDI;
  ulonglong uVar9;
  undefined8 uVar10;
  code *local_60;
  undefined8 *puStack_58;
  longlong local_50;
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  if (param_1 != (longlong *)0x0) {
    param_1[1] = *param_1;
  }
  if ((ulonglong)*(uint *)(unaff_RSI + 0x20) == 0) {
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
    if ((lVar1 - lVar2 & 0xffffffffU) < ((ulonglong)*(uint *)(unaff_RSI + 0x20) << 5 | 4)) {
      FUN_00925fd0();
      uVar3 = FUN_00926010();
      FUN_00983230();
      FUN_00983230();
      local_60 = FUN_009595d8;
      puStack_58 = (undefined8 *)&LAB_009977a0;
      FUN_00983230();
      uVar10 = FUN_00928ab0("virtual void pace::ILok2Commander::FindAuthRecord_ExtractExtraResultData(const CMD_RsltPayload_FindAuthRecord_Struct &, const vector<uint8_t> &, vector<EEPROM_StorageRecordStruct> *)"
                            ,0x5cf);
      FUN_009c720b(uVar10,uVar3);
    }
    if ((param_1 != (longlong *)0x0) && (*(uint *)(unaff_RSI + 0x20) != 0)) {
      puVar7 = (undefined8 *)*param_2;
      uVar9 = 0;
      do {
        (**(code **)(*unaff_RDI + 0x2a0))();
        puVar4 = (undefined8 *)param_1[1];
        if (puVar4 == (undefined8 *)param_1[2]) {
          if (0x7ffffffffffffff < ((longlong)puVar4 - *param_1 >> 5) + 1U) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          FUN_009a8bd0(param_1 + 2);
          puStack_58[3] = puVar7[3];
          puStack_58[2] = puVar7[2];
          uVar3 = *puVar7;
          puStack_58[1] = puVar7[1];
          *puStack_58 = uVar3;
          puVar4 = puStack_58 + 4;
          pcVar8 = (code *)*param_1;
          puStack_58 = (undefined8 *)param_1[1];
          pvVar6 = (void *)((longlong)puStack_58 - (longlong)pcVar8);
          if (0 < (longlong)pvVar6) {
            _memcpy(puVar4,pvVar6,param_3);
            pcVar8 = (code *)*param_1;
            puStack_58 = (undefined8 *)param_1[1];
          }
          *param_1 = (longlong)local_60 - (longlong)pvVar6;
          param_1[1] = (longlong)puVar4;
          lVar1 = param_1[2];
          param_1[2] = local_50;
          pvVar6 = (void *)0x0;
          if ((longlong)puStack_58 - (longlong)pcVar8 != 0) {
            uVar5 = ~(((longlong)puStack_58 - (longlong)pcVar8) - 0x20U >> 5);
            pvVar6 = (void *)(uVar5 * 0x20);
            puStack_58 = puStack_58 + uVar5 * 4;
          }
          local_60 = pcVar8;
          local_50 = lVar1;
          if (pcVar8 != (code *)0x0) {
            operator_delete(pvVar6);
          }
        }
        else {
          puVar4[3] = puVar7[3];
          puVar4[2] = puVar7[2];
          uVar3 = *puVar7;
          puVar4[1] = puVar7[1];
          *puVar4 = uVar3;
          param_1[1] = (longlong)(puVar4 + 4);
        }
        uVar9 = uVar9 + 1;
        puVar7 = puVar7 + 4;
      } while (uVar9 < *(uint *)(unaff_RSI + 0x20));
    }
  }
  return;
}



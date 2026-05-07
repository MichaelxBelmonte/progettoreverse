// Function: FUN_00e5e410
// Address: 00e5e410
// Size: 1525 bytes
// Class: GNBinaryArchiveTypeInfoContainer
// String references:
//   "1.2.13"
// === GNBinaryArchiveTypeInfoContainer properties ===
//                   _currentObjectData
//                   _currentObjectDataStream
//                   _currentObjectExcessKVTypeInfos
//                   _currentObjectExcessData
//                   _currentObjectExcessDataStream
//                   _currentObjectCompleteData
//                   _currentObjectCompleteDataStream
//                   _classDescriptionKVTypeInfosMap
//                   _allClassDescriptions
//                   _classDescriptionNotShareableKeys
//                   _allObjects
//                   _archivedObjects
//                   _doneObjects
//                   _todoObjects
//                   _allKeys
//                   _delegate


void FUN_00e5e410(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  double dVar7;
  int64_t in_stack_fffffffffffffea8;
  int64_t lVar8;
  char in_stack_fffffffffffffeb0;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((((in_stack_fffffffffffffeb0 == '\0') && (in_stack_fffffffffffffea8 != 0)) &&
      (lVar8 = in_stack_fffffffffffffea8, FUN_00d50b00(), in_stack_fffffffffffffeb0 != '\0')) &&
     (lVar8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  uVar9 = (uint64_t)*(uint *)(*param_2 + 0x18);
  uVar10 = (uint64_t)*(uint *)(arg1 + 0x14);
  uVar6 = 0xfffffff1;
  if (*(char *)(arg1 + 0x18) == '\0') {
    uVar6 = 0xf;
  }
  iVar3 = FUN_00f43520(uVar6,8,*(void*)(arg1 + 0x10),0,*(void*)(*param_2 + 0x10),
                       uVar9,0,*(void*)(in_stack_fffffffffffffea8 + 0x10),uVar10,0,0,0,0,0,0,
                       0,0,0);
  lVar8 = g_02787228;
  if (iVar3 == -4) {
    uVar6 = extraout_XMM0_Qa;
    if (g_02787228 != 0) {
      uVar6 = FUN_00d50b00();
    }
    lVar2 = g_02787230;
    if (g_02787230 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_d8 = lVar2;
    local_d0 = '\x01';
    FUN_00df3740(uVar6,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = extraout_XMM0_Qa;
    if (iVar3 == 0) {
      do {
        if ((int)uVar10 == 0) {
          FUN_00c8e340(uVar6,0);
          uVar10 = (uint64_t)*(uint *)(arg1 + 0x14);
        }
        iVar3 = FUN_00f43ef0();
        lVar8 = g_02787228;
      } while ((iVar3 == 0) && (uVar6 = extraout_XMM0_Qa_00, (int)uVar9 != 0));
      uVar6 = extraout_XMM0_Qa_00;
      if (iVar3 == 0) {
        do {
          if ((int)uVar10 == 0) {
            FUN_00c8e340(uVar6,0);
            uVar10 = (uint64_t)*(uint *)(arg1 + 0x14);
          }
          iVar3 = FUN_00f43ef0();
          uVar6 = extraout_XMM0_Qa_01;
        } while (iVar3 == 0);
        FUN_00c8e340(extraout_XMM0_Qa_01,0);
        uVar6 = FUN_00f438b0();
        lVar8 = g_02787228;
        if (iVar3 == 1) {
          if (*(char *)(arg1 + 0x18) == '\0') {
            *this_ptr = in_stack_fffffffffffffea8;
            *(void*)(this_ptr + 1) = 1;
            return;
          }
          FUN_00c8e690();
          lVar8 = local_40;
          if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          puVar1 = *(void**)(lVar8 + 0x10);
          *puVar1 = 0x88b1f;
          local_48 = lVar8;
          dVar7 = (double)FUN_00e7d6f0();
          *(int64_t *)(puVar1 + 2) = (int64_t)dVar7;
          cVar5 = '\x04';
          if (*(int *)(arg1 + 0xc) != 1) {
            cVar5 = (*(int *)(arg1 + 0xc) == 9) * '\x02';
          }
          *(char *)(puVar1 + 4) = cVar5;
          *(void*)((int64_t)puVar1 + 0x11) = 0x13;
          local_60 = '\0';
          local_68 = in_stack_fffffffffffffea8;
          FUN_00c8e5b0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          FUN_00c8e690();
          lVar8 = local_40;
          if (((local_38 == '\0') && (local_40 != 0)) &&
             ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
            FUN_00d50b20();
          }
          uVar6 = FUN_00c92170();
          puVar1 = *(void**)(lVar8 + 0x10);
          uVar4 = FUN_00f43510(uVar6,*(void*)(*param_2 + 0x18));
          *puVar1 = uVar4;
          puVar1[1] = *(void*)(*param_2 + 0x18);
          local_58 = lVar8;
          local_50 = '\0';
          FUN_00c8e5b0();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          *this_ptr = local_48;
          *(void*)(this_ptr + 1) = 1;
          FUN_00d50b20();
          goto LAB_00e5e776;
        }
        if (g_02787228 != 0) {
          uVar6 = FUN_00d50b00();
        }
        lVar2 = g_02787240;
        local_88 = lVar8;
        local_80 = '\x01';
        if (g_02787240 != 0) {
          uVar6 = FUN_00d50b00();
        }
        local_78 = lVar2;
        local_70 = '\x01';
        FUN_00df3740(uVar6,&local_78);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_02787228 != 0) {
          uVar6 = FUN_00d50b00();
        }
        lVar2 = g_02787240;
        local_a8 = lVar8;
        local_a0 = '\x01';
        if (g_02787240 != 0) {
          uVar6 = FUN_00d50b00();
        }
        local_98 = lVar2;
        local_90 = '\x01';
        FUN_00df3740(uVar6,&local_98);
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (g_02787228 != 0) {
        uVar6 = FUN_00d50b00();
      }
      lVar2 = g_02787238;
      local_c8 = lVar8;
      local_c0 = '\x01';
      if (g_02787238 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_b8 = lVar2;
      local_b0 = '\x01';
      FUN_00df3740(uVar6,&local_b8);
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_00e5e776:
  if (in_stack_fffffffffffffea8 != 0) {
    FUN_00d50b20();
  }
  return;
}


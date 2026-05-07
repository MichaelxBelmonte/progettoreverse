// Function: FUN_00e5ed60
// Address: 00e5ed60
// Size: 1115 bytes
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


void FUN_00e5ed60(uint64_t param_1,int64_t *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  int64_t arg1;
  uint64_t uVar9;
  uint uVar10;
  int64_t *this_ptr;
  char *pcVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar12;
  int64_t local_128;
  int iStack_120;
  int local_108;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e690();
  if (((char)iStack_120 == '\0') && (local_128 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  pcVar11 = *(char **)(*param_2 + 0x10);
  iStack_120 = *(int *)(*param_2 + 0x18);
  local_108 = *(int *)(local_128 + 0x18);
  if (((10 < iStack_120) && (*pcVar11 == '\x1f')) && (pcVar11[1] == -0x75)) {
    bVar2 = pcVar11[3];
    uVar9 = 10;
    if ((bVar2 & 4) != 0) {
      uVar9 = (uint64_t)((byte)pcVar11[10] + 0xc);
    }
    bVar4 = bVar2 & 8;
    while (bVar4 != 0) {
      pbVar1 = (byte *)(pcVar11 + uVar9);
      uVar9 = uVar9 + 1;
      bVar4 = *pbVar1;
    }
    uVar8 = (uint)uVar9;
    if ((bVar2 & 0x10) != 0) {
      pcVar11 = pcVar11 + (int)uVar8;
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
    }
    uVar10 = uVar8 + 2;
    if ((bVar2 & 2) == 0) {
      uVar10 = uVar8;
    }
    iStack_120 = iStack_120 - uVar10;
  }
  iVar7 = FUN_00f47c10(0x70,"1.2.13");
  lVar6 = g_02787248;
  if (iVar7 == -4) {
    uVar12 = extraout_XMM0_Da;
    if (g_02787248 != 0) {
      uVar12 = FUN_00d50b00();
    }
    lVar5 = g_02787230;
    if (g_02787230 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_a0 = lVar5;
    local_98 = '\x01';
    FUN_00df3740(uVar12,&local_a0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = extraout_XMM0_Da;
    if (iVar7 == 0) {
      do {
        if (local_108 == 0) {
          local_108 = iStack_120 * 2;
          if (iStack_120 * 2 < *(int *)(arg1 + 0x14)) {
            local_108 = *(int *)(arg1 + 0x14);
          }
          FUN_00c8e340(uVar12,0);
        }
        uVar8 = FUN_00f47d00();
        uVar12 = extraout_XMM0_Da_00;
      } while ((uVar8 & 0xfffffffd) == 0);
      FUN_00c8e340(extraout_XMM0_Da_00,0);
      uVar12 = FUN_00f4a580();
      lVar6 = g_02787248;
      if (uVar8 == 1) {
        *this_ptr = local_128;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
      if (uVar8 == 0xfffffffc) {
        if (g_02787248 != 0) {
          uVar12 = FUN_00d50b00();
        }
        lVar5 = g_02787230;
        local_70 = lVar6;
        local_68 = '\x01';
        if (g_02787230 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_60 = lVar5;
        local_58 = '\x01';
        FUN_00df3740(uVar12,&local_60);
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_02787248 != 0) {
          uVar12 = FUN_00d50b00();
        }
        lVar5 = g_02787258;
        local_50 = lVar6;
        local_48 = '\x01';
        if (g_02787258 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_40 = lVar5;
        local_38 = '\x01';
        FUN_00df3740(uVar12,&local_40);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (g_02787248 != 0) {
        uVar12 = FUN_00d50b00();
      }
      lVar5 = g_02787250;
      local_90 = lVar6;
      local_88 = '\x01';
      if (g_02787250 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_80 = lVar5;
      local_78 = '\x01';
      FUN_00df3740(uVar12,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  if (local_128 != 0) {
    FUN_00d50b20();
  }
  return;
}


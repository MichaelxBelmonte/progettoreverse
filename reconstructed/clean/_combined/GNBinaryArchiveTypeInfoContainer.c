// ===================================================================
// GNBinaryArchiveTypeInfoContainer — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (16):
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


// ============================================================
// 00e5e410
// ============================================================
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



// ============================================================
// 00e5ed60
// ============================================================
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



// ============================================================
// 00e5cf00
// ============================================================
// Function: FUN_00e5cf00
// Address: 00e5cf00
// Size: 527 bytes
// Class: GNBinaryArchiveTypeInfoContainer
// String references:
//   "GNBinaryArchiveTypeInfoContainer"
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


void FUN_00e5cf00(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_48;
  int64_t local_40;
  void*local_28;
  
  if ((g_0277ead8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0277ea28 = FUN_00d4fe50();
    g_0277ea10 = "GNBinaryArchiveTypeInfoContainer";
    g_0277ea18 = 0x20;
    g_0277ea20 = FUN_00e4c0a0;
    g_0277ea30 = 0;
    ram_000000000277ea38 = 0;
    g_0277ea40 = 0;
    g_0277eab8 = 0;
    ram_000000000277eac0 = 0;
    g_0277eac8 = 0;
    g_0277eaca = 1;
    g_0277ea48 = 0;
    ram_000000000277ea50 = 0;
    g_0277ea58 = 0;
    ram_000000000277ea60 = 0;
    g_0277ea68 = 0;
    ram_000000000277ea70 = 0;
    g_0277ea78 = 0;
    ram_000000000277ea80 = 0;
    g_0277ea88 = 0;
    ram_000000000277ea90 = 0;
    g_0277ea98 = 0;
    ram_000000000277eaa0 = 0;
    g_0277eaa8 = 0;
    ram_000000000277eab0 = 0;
    g_0277ead3 = 0;
    g_0277eacb = 0;
    ___cxa_guard_release();
  }
  if (g_0277eacb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_00e5dd70();
    FUN_00e5e0a0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}


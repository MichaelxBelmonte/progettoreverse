// ===================================================================
// GNSimpleXMLElement — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (3):
//                   _subElements
//                   _startContentPosition
//                   _endContentPosition


// ============================================================
// 00beae30
// ============================================================
// Function: FUN_00beae30
// Address: 00beae30
// Size: 1737 bytes
// Class: GNSimpleXMLElement
// String references:
//   "mcpl!"
// === GNSimpleXMLElement properties ===
//                   _subElements
//                   _startContentPosition
//                   _endContentPosition


void FUN_00beae30(void)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char *pcVar7;
  uint uVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  int64_t local_148;
  uint64_t local_140;
  uint64_t uStack_138;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  uint32_t local_9c;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint8_t local_78 [12];
  uint local_6c;
  int64_t *local_68;
  int64_t *local_60;
  char local_58 [12];
  int local_4c;
  char local_48;
  undefined7 uStack_47;
  char cStack_40;
  undefined7 uStack_3f;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_80 = 0;
  lVar1 = this_ptr[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  FUN_00cde020();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = FUN_00e7dde0();
  lVar5 = _CFURLCreateFromFileSystemRepresentation(0,(int64_t)iVar4);
  lVar1 = g_02765700;
  if (lVar5 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar1;
    local_118 = '\x01';
    FUN_00cc78b0();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar4 = _ExtAudioFileOpenURL();
  lVar1 = g_02765700;
  if (iVar4 != 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar1;
    local_108 = '\x01';
    FUN_00cc78b0();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
  }
  _CFRelease();
  if ((char)this_ptr[7] == '\0') {
    local_4c = 0x28;
    iVar4 = _ExtAudioFileGetProperty(&local_148,&local_4c);
    lVar1 = g_02765700;
    if (iVar4 != 0) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar1;
      local_f8 = '\x01';
      FUN_00cc78b0();
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    this_ptr[6] = local_148;
    *(void*)(this_ptr + 5) = local_12c;
    local_4c = 8;
    iVar4 = _ExtAudioFileGetProperty(this_ptr + 4,&local_4c);
    lVar1 = g_02765700;
    if (iVar4 != 0) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar1;
      local_e8 = '\x01';
      FUN_00cc78b0();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    local_148 = this_ptr[6];
    local_140 = _s_mcpl__023d94a0;
    uStack_138 = _UNK_023d94a8;
    local_130 = 4;
    local_12c = (uint32_t)this_ptr[5];
    local_128 = 0x20;
    local_4c = 0x28;
    iVar4 = _ExtAudioFileSetProperty(&local_148,0x28);
    lVar1 = g_02765700;
    if (iVar4 != 0) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      FUN_00cc78b0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar4 = _ExtAudioFileGetProperty(local_78,&local_4c);
    if (iVar4 == 0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      uVar9 = (**(code **)(*plVar6 + 0x18))();
      iVar4 = _AudioFileCountUserData(uVar9,&local_6c);
      if (iVar4 == 0) {
        local_68 = plVar6;
        if (local_6c != 0) {
          uVar8 = 0;
          do {
            iVar4 = _AudioFileGetUserDataSize(&local_4c,uVar8);
            if (iVar4 == 0) {
              local_9c = 0x10;
              iVar4 = _AudioFileGetUserData(&local_9c,uVar8,&local_48);
              if ((iVar4 == 0) &&
                 (auVar2._1_7_ = uStack_47, auVar2[0] = local_48, auVar2[8] = cStack_40,
                 auVar2._9_7_ = uStack_3f, g_02765560 == auVar2)) {
                uVar9 = FUN_00e83010();
                iVar4 = _AudioFileGetUserData(&local_4c,uVar8,uVar9);
                if (iVar4 == 0) {
                  FUN_00c8e480(extraout_XMM0_Qa,local_4c + -0x10);
                  plVar6 = local_60;
                  if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b00();
                    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  uVar9 = FUN_00c92170();
                  local_d0 = plVar6;
                  local_c8 = '\0';
                  FUN_00bc0e10(uVar9,&local_d0);
                  plVar3 = local_60;
                  if (local_58[0] == '\0') {
                    if (local_60 != (int64_t *)0x0) {
                      FUN_00d50b00();
                      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                  else {
                    local_58[0] = '\0';
                  }
                  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar3 != (int64_t *)0x0) {
                    local_c0 = plVar3;
                    local_b8 = '\0';
                    uVar9 = (**(code **)(*plVar3 + 0x368))();
                    plVar3 = local_98;
                    if (local_90 == '\0') {
                      if (local_98 != (int64_t *)0x0) {
                        uVar9 = FUN_00d50b00();
                      }
                    }
                    else {
                      local_90 = '\0';
                    }
                    local_60 = plVar3;
                    local_58[0] = '\0';
                    FUN_00ca0840(uVar9,&local_60);
                    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (plVar3 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                  if (plVar6 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00e83070();
                break;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_6c);
        }
        plVar6 = local_68;
        FUN_00c9fe20();
        plVar3 = local_60;
        pcVar7 = &local_48;
        if (local_58[0] != '\0') {
          pcVar7 = local_58;
        }
        local_48 = local_58[0];
        *pcVar7 = '\0';
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar4 = *(int *)((int64_t)plVar3 + 0xc);
        if (local_48 != '\0') {
          FUN_00d50b20();
        }
        if (iVar4 != 0) {
          uVar9 = (**(code **)(*this_ptr + 0x3a8))();
          plVar3 = g_02765240;
          local_b0 = plVar6;
          local_a8 = '\0';
          if (g_02765240 != (int64_t *)0x0) {
            uVar9 = FUN_00d50b00();
          }
          local_60 = plVar3;
          local_58[0] = '\0';
          FUN_00ca0840(uVar9,&local_60);
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((cStack_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        if (plVar6 == (int64_t *)0x0) goto LAB_00beb4d9;
      }
      FUN_00d50b20();
    }
  }
LAB_00beb4d9:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}



// ============================================================
// 00be9af0
// ============================================================
// Function: FUN_00be9af0
// Address: 00be9af0
// Size: 514 bytes
// Class: GNSimpleXMLElement
// String references:
//   "GNSimpleXMLElement"
// === GNSimpleXMLElement properties ===
//                   _subElements
//                   _startContentPosition
//                   _endContentPosition


void FUN_00be9af0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0254d6b0;
  FUN_00be9d50();
  FUN_00bea040();
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027672bb == '\0') {
    FUN_00bea2c0();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027672bb == '\0') {
    FUN_00bea430();
    FUN_00e87980();
  }
  return;
}


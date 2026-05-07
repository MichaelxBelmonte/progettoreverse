// Function: FUN_01ccd250
// Address: 01ccd250
// Size: 2997 bytes
// Class: GNList
// String references:
//   "GNList"
//   ".%@"
//   "%@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01ccd250(uint32_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  int64_t *arg1;
  int iVar11;
  int64_t *plVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  int64_t *local_130;
  uint8_t local_128;
  int64_t *local_120;
  char local_118;
  void*local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t local_98;
  int64_t *local_90;
  uint local_88;
  int64_t *local_80;
  char local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint local_40;
  
  plVar9 = g_027edfd0;
  if (g_027edfd0 != (int64_t *)0x0) {
    param_1 = FUN_00d50b00();
  }
  local_90 = plVar9;
  local_88 = local_88 & 0xffffff00;
  uVar13 = FUN_01cc98b0(param_1,&local_90);
  plVar12 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccd2be;
    }
LAB_01ccd2de:
    lVar7 = 0;
  }
  else {
    if (local_60 == (int64_t *)0x0) goto LAB_01ccd2de;
LAB_01ccd2be:
    lVar7 = plVar12[5];
    uVar13 = FUN_00d50b20();
    if (lVar7 == 0) goto LAB_01ccd2de;
    uVar13 = FUN_00d50b00();
  }
  if (plVar9 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  plVar9 = g_027edfd0;
  if (g_027edfd0 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  local_130 = plVar9;
  local_128 = 1;
  FUN_01ccab60(uVar13,&local_130);
  plVar12 = local_60;
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar7 == 0) || (plVar12 == (int64_t *)0x0)) goto LAB_01ccde0f;
  FUN_01d25f70();
  plVar9 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) goto LAB_01ccde0f;
    FUN_00d50b00();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (int64_t *)0x0) goto LAB_01ccde0f;
  local_a0 = plVar12;
  local_d0 = plVar9;
  local_98 = lVar7;
  if (*arg1 != 0) {
    *arg1 = 0;
    if ((char)arg1[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(arg1 + 1) = 0;
  }
  if (*param_2 != 0) {
    *param_2 = 0;
    if ((char)param_2[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(param_2 + 1) = 0;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  uVar13 = (*g_02572370)();
  local_120 = plVar12;
  local_118 = '\0';
  local_b8 = puVar6;
  local_a8 = param_2;
  uVar13 = FUN_00c871e0(uVar13,&local_120);
  plVar9 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01ccd688:
    local_68 = (int64_t *)0x0;
    plVar9 = (int64_t *)FUN_00e8fc40();
    local_68 = (int64_t *)0x0;
    FUN_00d4ff40();
    *plVar9 = (int64_t)&g_025795a8;
    local_68 = (int64_t *)0x0;
    (*g_025795c0)();
    local_100 = g_02774da0;
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\x01';
    uVar8 = FUN_00d91000(1);
    plVar12 = local_60;
    uVar13 = extraout_XMM0_Da_01;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) &&
          (uVar8 = FUN_00d50b00(), uVar13 = extraout_XMM0_Da_05, local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
        uVar13 = extraout_XMM0_Da_06;
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar8 = FUN_00d50b20();
      uVar13 = extraout_XMM0_Da_02;
    }
    local_70 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
    local_68 = plVar9;
    if (plVar12 != (int64_t *)0x0) {
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_68 = plVar12;
      local_50 = plVar12;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar11 = -local_48._4_4_;
          }
          else {
            iVar11 = (uint)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar11);
            uVar13 = FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar11 = 0;
          }
          local_48 = CONCAT44(iVar11,(uint)local_48);
        }
        uVar2 = (uint)local_48;
        lVar7 = (int64_t)(int)(uint)local_48;
        iVar11 = (uint)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar11);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar11) goto LAB_01ccdb52;
        plVar12 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
        local_60 = plVar12;
        if (local_40 == ~uVar2) {
          local_88 = 1;
          local_90 = &g_024c5048;
          local_78 = 0;
          if (plVar12 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = plVar12;
          uVar13 = FUN_00d94d80(uVar13,&local_90);
          local_90 = &g_024c5048;
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          local_88 = 1;
          local_90 = &g_024c5048;
          local_78 = 0;
          if (plVar12 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = plVar12;
          uVar13 = FUN_00d94d80(uVar13,&local_90);
          local_90 = &g_024c5048;
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        local_e8 = '\0';
        local_f0 = plVar9;
        uVar13 = FUN_01d26620(uVar13,&local_f0);
        plVar12 = local_90;
        if ((char)local_88 == '\0') {
          if (local_90 == (int64_t *)0x0) {
            local_b0 = (int64_t *)0x0;
            plVar12 = (int64_t *)0x0;
          }
          else {
            uVar13 = FUN_00d50b00();
            local_b0 = plVar12;
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
          }
        }
        else {
          local_b0 = local_90;
          local_88 = local_88 & 0xffffff00;
        }
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((g_027048b0 == '\0') &&
           (iVar11 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_04, iVar11 != 0)) {
          g_026cd478 = FUN_00d4fe50();
          g_026cd460 = "GNList";
          g_026cd468 = 0x20;
          g_026cd470 = FUN_00018210;
          g_026cd480 = 0;
          ram_00000000026cd488 = 0;
          g_026cd490 = 0;
          g_026cd508 = 0;
          ram_00000000026cd510 = 0;
          g_026cd518 = 0;
          g_026cd51a = 6;
          g_026cd498 = 0;
          ram_00000000026cd4a0 = 0;
          g_026cd4a8 = 0;
          ram_00000000026cd4b0 = 0;
          g_026cd4b8 = 0;
          ram_00000000026cd4c0 = 0;
          g_026cd4c8 = 0;
          ram_00000000026cd4d0 = 0;
          g_026cd4d8 = 0;
          ram_00000000026cd4e0 = 0;
          g_026cd4e8 = 0;
          ram_00000000026cd4f0 = 0;
          g_026cd4f8 = 0;
          ram_00000000026cd500 = 0;
          g_026cd523 = 0;
          g_026cd51b = 0;
          uVar13 = ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar10 = &local_b0;
          uVar13 = extraout_XMM0_Da_03;
          if (cVar3 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar10 != (int64_t *)0x0) break;
        if (local_b0 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b20();
        }
      }
      plVar12 = (int64_t *)*arg1;
      lVar7 = arg1[1];
      if (plVar12 == plVar9) {
        if (((char)lVar7 == '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b00();
          goto LAB_01ccdb35;
        }
      }
      else {
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar9;
        if (((char)lVar7 != '\0') && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01ccdb35:
        *(void*)(arg1 + 1) = 1;
      }
      FUN_00d8c7d0();
      if (local_b0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
LAB_01ccdb52:
      FUN_00018280();
      FUN_00d50b20();
      local_68 = plVar9;
    }
  }
  else {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar9;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar11 = 0;
    while( true ) {
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar11 = -iVar11;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(uint)local_48 - iVar11);
          FUN_00d23690(uVar13,iVar11);
          local_40 = local_40 + local_48._4_4_;
          iVar11 = 0;
        }
        local_48 = CONCAT44(iVar11,(uint)local_48);
      }
      lVar7 = (int64_t)(int)(uint)local_48;
      iVar11 = (uint)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar11);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar11) {
        plVar9 = (int64_t *)0x0;
        local_70 = 0;
        goto LAB_01ccd5d2;
      }
      local_90 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
      local_88 = local_88 & 0xffffff00;
      local_60 = local_90;
      FUN_00d21140();
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar3 = (**(code **)(*local_60 + 0x370))();
      uVar13 = extraout_XMM0_Da;
      if ((cVar3 != '\0') && (cVar3 = FUN_00d77de0(), uVar13 = extraout_XMM0_Da_00, cVar3 != '\0'))
      break;
      iVar11 = local_48._4_4_;
    }
    local_110 = local_b8;
    local_108 = '\0';
    uVar8 = FUN_00c87c30(extraout_XMM0_Da_00,&local_110);
    plVar9 = local_90;
    if (local_90 == (int64_t *)0x0) {
      local_70 = 0;
      plVar9 = (int64_t *)0x0;
    }
    else if ((char)local_88 == '\0') {
      uVar8 = FUN_00d50b00();
      local_70 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = local_88 & 0xffffff00;
      local_70 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
    }
    if ((local_108 != '\0') && (local_110 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01ccd5d2:
    FUN_00d74c70();
    FUN_00d50b20();
    if (plVar9 == (int64_t *)0x0) goto LAB_01ccd688;
    plVar12 = (int64_t *)*arg1;
    local_68 = plVar9;
    if (plVar12 == plVar9) {
      if (((char)local_70 != '\0') && ((char)arg1[1] == '\0')) {
        FUN_00d50b00();
        *(void*)(arg1 + 1) = 1;
      }
    }
    else {
      lVar7 = arg1[1];
      if ((char)local_70 != '\0') {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_68;
      if (((char)lVar7 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(char *)(arg1 + 1) = (char)local_70;
    }
    FUN_00d8c7d0();
  }
  cVar3 = (char)local_70;
  if ((int64_t *)*arg1 != (int64_t *)0x0) {
    local_e0 = local_a0;
    local_d8 = '\0';
    cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      if (*arg1 != 0) {
        local_c0 = '\0';
        local_c8 = *arg1;
        cVar4 = FUN_00d90870();
        if (cVar4 == '\0') {
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          iVar11 = FUN_00d8c7a0();
          iVar5 = FUN_00d8c7a0();
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if (iVar5 < iVar11) {
            iVar11 = FUN_00d8c7a0();
            FUN_00d8f140(extraout_XMM0_Da_07,iVar11 + 1);
            plVar1 = local_60;
            plVar12 = local_a8;
            plVar9 = (int64_t *)*local_a8;
            if (plVar9 == local_60) {
              if (((char)local_a8[1] != '\0') || (local_60 == (int64_t *)0x0)) goto LAB_01ccddab;
              if (local_58 == '\0') {
                FUN_00d50b00();
                goto LAB_01ccdda7;
              }
LAB_01ccdd6e:
              *(void*)(plVar12 + 1) = 1;
            }
            else {
              lVar7 = local_a8[1];
              if (local_58 != '\0') {
                *local_a8 = (int64_t)local_60;
                if (((char)lVar7 != '\0') && (plVar9 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01ccdd6e;
              }
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *local_a8 = (int64_t)plVar1;
              if (((char)lVar7 != '\0') && (plVar9 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01ccdda7:
              *(void*)(plVar12 + 1) = 1;
LAB_01ccddab:
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d8c7d0();
          }
        }
      }
    }
    else if (*local_a8 != 0) {
      *local_a8 = 0;
      if ((char)local_a8[1] != '\0') {
        FUN_00d50b20();
      }
      *(void*)(local_a8 + 1) = 0;
    }
  }
  if ((cVar3 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar7 = local_98;
  if (local_b8 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar12 = local_a0;
LAB_01ccde0f:
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}


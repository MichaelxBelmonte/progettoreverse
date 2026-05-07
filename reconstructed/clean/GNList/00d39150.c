// Function: FUN_00d39150
// Address: 00d39150
// Size: 3454 bytes
// Class: GNList
// String references:
//   "%I"
//   "%@"
//   "%f"
//   "%c"
//   "%@->%s("
//   ", %@"
//   ");"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d39150(void)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*puVar6;
  void*puVar7;
  void*puVar8;
  void*puVar9;
  byte bVar10;
  void*puVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  uint uVar16;
  void*puVar17;
  void*puVar18;
  int64_t arg1;
  void*this_ptr;
  void*puVar19;
  int64_t lVar20;
  int64_t lVar21;
  bool bVar22;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  uint64_t extraout_XMM0_Qa_07;
  uint64_t extraout_XMM0_Qa_08;
  uint64_t extraout_XMM0_Qa_09;
  void*local_90;
  char local_88;
  void*local_78;
  uint local_70;
  float local_6c;
  void*local_68;
  uint32_t local_60;
  void*local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  byte local_31;
  
  if ((((*(int64_t *)(arg1 + 0x10) == 0) || (*(int64_t *)(arg1 + 0x18) == 0)) ||
      (*(int64_t *)(arg1 + 0x20) == 0)) || (*(int64_t *)(arg1 + 0x28) == 0)) {
    FUN_00d4ffd0();
  }
  else {
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025795a8;
    (*g_025795c0)();
    uVar23 = (**(code **)(**(int64_t **)(arg1 + 0x20) + 0x198))();
    local_58 = local_78;
    local_60 = 2;
    local_68 = &g_024c5048;
    local_50 = 0;
    if (local_78 != (void*)0x0) {
      uVar23 = FUN_00d50b00();
    }
    local_50 = '\x01';
    local_68 = (void*)&g_024c59c8;
    local_48 = *(void*)(arg1 + 0x10);
    uVar23 = FUN_00d94d80(uVar23,&local_68);
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
      uVar23 = FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      uVar23 = FUN_00d50b20();
    }
    lVar12 = *(int64_t *)(arg1 + 0x28);
    if (*(int *)(lVar12 + 0x18) < 0x30) {
      local_40 = 0;
      puVar17 = (void*)0x0;
    }
    else {
      lVar21 = 1;
      lVar20 = 0x18;
      local_40 = 0;
      puVar19 = (void*)0x0;
      do {
        puVar9 = g_027e3c48;
        puVar18 = g_02787960;
        puVar8 = g_0277d7e8;
        puVar7 = g_0277d7e0;
        puVar6 = g_0277d7d8;
        puVar5 = g_02772530;
        puVar4 = g_02772528;
        puVar3 = g_02772518;
        puVar2 = g_02772510;
        puVar1 = g_02772508;
        lVar12 = *(int64_t *)(lVar12 + 0x10);
        iVar15 = (int)*(char *)(lVar12 + 0x10 + lVar20);
        uVar16 = iVar15 - 0x40;
        puVar17 = puVar19;
        if (0x33 < uVar16) {
switchD_00d392e1_caseD_41:
          if (g_0277d7e8 != (void*)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa;
          }
          if (puVar19 == puVar8) {
            uVar14 = local_40 & 0xff;
            if (puVar8 != (void*)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar8 != (void*)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar8;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          goto LAB_00d39d0b;
        }
        switch(iVar15) {
        case 0x40:
          if (*(int64_t **)(lVar12 + lVar20) == (int64_t *)0x0) {
            if (g_0277d7d8 != (void*)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_90 = puVar6;
            local_88 = '\x01';
          }
          else {
            uVar23 = (**(code **)(**(int64_t **)(lVar12 + lVar20) + 0x198))();
          }
          local_60 = 1;
          local_68 = &g_024c5048;
          local_50 = 0;
          if (local_90 != (void*)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = local_90;
          uVar13 = FUN_00d8cb40(uVar23,&local_68);
          puVar17 = local_78;
          uVar23 = extraout_XMM0_Qa_07;
          if (local_78 == puVar19) {
            puVar17 = puVar19;
            bVar10 = (byte)local_40;
            if (((byte)local_40 == 0) && (bVar10 = (byte)local_40, local_78 != (void*)0x0)) {
              if ((char)local_70 != '\0') goto LAB_00d39a74;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
              bVar10 = local_31;
            }
LAB_00d39df7:
            local_31 = bVar10;
            if (((char)local_70 == '\0') || (local_78 == (void*)0x0)) {
              local_40 = (uint64_t)local_31;
            }
            else {
              uVar23 = FUN_00d50b20();
              local_40 = (uint64_t)local_31;
            }
          }
          else {
            if ((char)local_70 == '\0') {
              if (local_78 != (void*)0x0) {
                uVar23 = FUN_00d50b00();
              }
              local_31 = 1;
              bVar10 = local_31;
              if (((byte)local_40 != '\0') && (puVar19 != (void*)0x0)) {
                uVar23 = FUN_00d50b20();
                bVar10 = local_31;
              }
              goto LAB_00d39df7;
            }
            if (((byte)local_40 != 0) && (puVar19 != (void*)0x0)) {
              uVar13 = FUN_00d50b20();
              uVar23 = extraout_XMM0_Qa_08;
            }
LAB_00d39a74:
            local_70 = local_70 & 0xffffff00;
            local_40 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
          }
          local_68 = &g_024c5048;
          if ((local_50 != '\0') && (local_68 = &g_024c5048, local_58 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          uVar14 = local_40;
          if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
            uVar14 = local_40;
          }
          break;
        default:
          goto switchD_00d392e1_caseD_41;
        case 0x43:
          if (g_02772508 != (void*)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_00;
          }
          if (puVar19 == puVar1) {
            uVar14 = local_40 & 0xff;
            if (puVar1 != (void*)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar1 != (void*)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar1;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x45:
          if (g_02772530 != (void*)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_01;
          }
          if (puVar19 == puVar5) {
            uVar14 = local_40 & 0xff;
            if (puVar5 != (void*)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar5 != (void*)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar5;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x49:
          local_6c = *(float *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &g_024cc6f0;
          uVar23 = FUN_00d8cb40(&g_024cc6f0,&local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (void*)0x0)) {
              if ((char)local_60 != '\0') {
LAB_00d39a48:
                local_31 = 1;
                puVar17 = puVar19;
                goto LAB_00d39d00;
              }
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (void*)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (void*)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 0x50:
          if (g_02772518 != (void*)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_02;
          }
          if (puVar19 == puVar3) {
            uVar14 = local_40 & 0xff;
            if (puVar3 != (void*)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar3 != (void*)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar3;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x52:
          if (g_02772528 != (void*)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_03;
          }
          if (puVar19 == puVar4) {
            uVar14 = local_40 & 0xff;
            if (puVar4 != (void*)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar4 != (void*)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar4;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x5e:
          if (g_0277d7e0 != (void*)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_05;
          }
          if (puVar19 == puVar7) {
            uVar14 = local_40 & 0xff;
            if (puVar7 != (void*)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar7 != (void*)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar7;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x62:
          if (*(char *)(lVar12 + lVar20) == '\0') {
            if (g_02787960 != (void*)0x0) {
              lVar12 = FUN_00d50b00();
              uVar23 = extraout_XMM0_Qa_09;
              goto LAB_00d397e5;
            }
            puVar18 = (void*)0x0;
            if (puVar19 != (void*)0x0) goto LAB_00d397ee;
LAB_00d39aa6:
            if (((byte)local_40 == '\0') && (puVar18 != (void*)0x0)) {
              uVar14 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            }
            else {
              uVar14 = local_40;
              if (puVar18 != (void*)0x0) {
                uVar23 = FUN_00d50b20();
                uVar14 = local_40;
              }
            }
          }
          else {
            if (g_027e3c48 == (void*)0x0) {
              puVar18 = (void*)0x0;
              if (puVar19 == (void*)0x0) goto LAB_00d39aa6;
            }
            else {
              lVar12 = FUN_00d50b00();
              puVar18 = puVar9;
              uVar23 = extraout_XMM0_Qa_06;
LAB_00d397e5:
              if (puVar19 == puVar18) goto LAB_00d39aa6;
            }
LAB_00d397ee:
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar18;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 99:
          local_70 = 1;
          local_78 = (void*)&g_025732e0;
          local_6c = (float)CONCAT31(local_6c._1_3_,*(void*)(lVar12 + lVar20));
          uVar23 = FUN_00d8cb40(&g_025732e0,&local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (void*)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (void*)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (void*)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 100:
          local_6c = (float)*(double *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &g_024d0b28;
          uVar23 = FUN_00d8cb40((int64_t)&switchD_00d392e1::switchdataD_00d3a3d4 +
                                (int64_t)(int)(&switchD_00d392e1::switchdataD_00d3a3d4)[uVar16],
                                &local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (void*)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (void*)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (void*)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 0x66:
          local_6c = *(float *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &g_024d0b28;
          uVar23 = FUN_00d8cb40((int64_t)&switchD_00d392e1::switchdataD_00d3a3d4 +
                                (int64_t)(int)(&switchD_00d392e1::switchdataD_00d3a3d4)[uVar16],
                                &local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (void*)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (void*)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (void*)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
          goto LAB_00d39d00;
        case 0x71:
          if (g_02772510 != (void*)0x0) {
            lVar12 = FUN_00d50b00();
            uVar23 = extraout_XMM0_Qa_04;
          }
          if (puVar19 == puVar2) {
            uVar14 = local_40 & 0xff;
            if (puVar2 != (void*)0x0) {
              uVar14 = 1;
            }
            if (((byte)local_40 != '\0') && (uVar14 = local_40 & 0xff, puVar2 != (void*)0x0))
            {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          else {
            bVar22 = (byte)local_40 != '\0';
            local_40 = CONCAT71((int7)((uint64_t)lVar12 >> 8),1);
            puVar17 = puVar2;
            uVar14 = local_40;
            if ((bVar22) && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
              uVar14 = local_40;
            }
          }
          break;
        case 0x73:
          local_6c = (float)(int)*(short *)(lVar12 + lVar20);
          local_70 = 1;
          local_78 = &g_024cc6f0;
          uVar23 = FUN_00d8cb40(&g_024cc6f0,&local_78);
          puVar17 = local_68;
          if (local_68 == puVar19) {
            puVar17 = puVar19;
            local_31 = (byte)local_40;
            if (((byte)local_40 == 0) && (puVar19 != (void*)0x0)) {
              if ((char)local_60 != '\0') goto LAB_00d39a48;
              local_31 = 1;
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            if ((char)local_60 != '\0') {
              local_31 = 1;
              if (((byte)local_40 != 0) && (puVar19 != (void*)0x0)) {
                uVar23 = FUN_00d50b20();
              }
              goto LAB_00d39d00;
            }
            if (local_68 != (void*)0x0) {
              uVar23 = FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (puVar19 != (void*)0x0)) {
              uVar23 = FUN_00d50b20();
            }
          }
          if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
LAB_00d39d00:
          uVar14 = (uint64_t)local_31;
        }
LAB_00d39d0b:
        local_40 = uVar14;
        if (lVar21 == 1) {
          local_60 = 1;
          local_68 = &g_024c5048;
          local_50 = 0;
          if (puVar17 != (void*)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = puVar17;
          uVar23 = FUN_00d94d80(uVar23,&local_68);
          local_68 = &g_024c5048;
          if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
        }
        else {
          local_60 = 1;
          local_68 = &g_024c5048;
          local_50 = 0;
          if (puVar17 != (void*)0x0) {
            uVar23 = FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = puVar17;
          uVar23 = FUN_00d94d80(uVar23,&local_68);
          local_68 = &g_024c5048;
          if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
            uVar23 = FUN_00d50b20();
          }
        }
        lVar21 = lVar21 + 1;
        lVar12 = *(int64_t *)(arg1 + 0x28);
        lVar20 = lVar20 + 0x18;
        puVar19 = puVar17;
      } while (lVar21 < *(int *)(lVar12 + 0x18) / 0x18);
    }
    FUN_00d94d80(uVar23,g_025908a0);
    *this_ptr = puVar11;
    *(void*)(this_ptr + 1) = 1;
    if (((byte)local_40 != '\0') && (puVar17 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}


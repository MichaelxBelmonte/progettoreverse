// ===================================================================
// GNMidiFileTrack — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 00b5b410
// ============================================================
// Function: FUN_00b5b410
// Address: 00b5b410
// Size: 1807 bytes
// Class: GNMidiFileTrack

void FUN_00b5b410(void)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void*puVar7;
  void*puVar8;
  byte *pbVar9;
  byte *pbVar10;
  void*puVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int64_t lVar15;
  int64_t this_ptr;
  byte bVar16;
  int64_t lVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint32_t uVar20;
  
  pbVar2 = *(byte **)(*(int64_t *)(this_ptr + 0x18) + 0x10);
  iVar6 = *(int *)(*(int64_t *)(this_ptr + 0x18) + 0x18);
  lVar17 = (int64_t)iVar6;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  pcVar4 = g_02539aa0;
  if (*pbVar2 == 0xf0) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &g_02539e18;
    uVar20 = (*g_02539e30)();
    FUN_00b51bd0(uVar20,iVar6);
    FUN_00d21140();
    bVar3 = true;
  }
  else if (iVar6 < 1) {
    bVar3 = false;
    puVar8 = (void*)0x0;
  }
  else {
    pbVar9 = pbVar2 + lVar17 + -1;
    bVar13 = *(byte *)(this_ptr + 0x28);
    bVar16 = bVar13 & 0xf0;
    if (0xef < bVar13) {
      bVar16 = bVar13;
    }
    pbVar1 = pbVar2 + lVar17 + -1;
    bVar3 = false;
    pbVar19 = pbVar2;
    puVar11 = (void*)0x0;
    do {
      if (bVar16 == 0) {
        while( true ) {
          if (puVar11 != (void*)0x0) {
            if (bVar3) {
              FUN_00d50b20();
            }
            bVar3 = false;
          }
          bVar16 = *pbVar19;
          if ((char)bVar16 < '\0') break;
          pbVar19 = pbVar19 + 1;
          puVar11 = (void*)0x0;
          puVar8 = (void*)0x0;
          if (pbVar9 < pbVar19) goto LAB_00b5bb18;
        }
LAB_00b5b589:
        pbVar19 = pbVar19 + 1;
        bVar12 = bVar16;
      }
      else {
        if (puVar11 != (void*)0x0) {
          if (bVar3) {
            FUN_00d50b20();
          }
          bVar3 = false;
        }
        bVar16 = *pbVar19;
        bVar12 = bVar13;
        if ((char)bVar16 < '\0') goto LAB_00b5b589;
      }
      iVar6 = FUN_00b61f70();
      if (iVar6 == 2) {
        if (pbVar9 <= pbVar19) goto LAB_00b5b860;
        lVar15 = (int64_t)pbVar1 - (int64_t)pbVar19;
        puVar11 = (void*)0x0;
        do {
          bVar16 = *pbVar19;
          pbVar10 = pbVar19;
          puVar8 = puVar11;
          if (bVar16 < 0xf8) goto LAB_00b5b8d6;
          puVar8 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar8 = &g_02539a88;
          puVar8[2] = 0;
          (*pcVar4)();
          if (puVar8 == puVar11) {
            if (bVar3) {
              FUN_00d50b20();
              puVar8 = puVar11;
              bVar5 = bVar3;
            }
            else {
              puVar8 = puVar11;
              bVar5 = true;
            }
          }
          else {
            bVar5 = true;
            if ((bVar3) && (puVar11 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar3 = bVar5;
          FUN_00b51b40();
          FUN_00d21140();
          pbVar19 = pbVar19 + 1;
          lVar15 = lVar15 + -1;
          puVar11 = puVar8;
        } while (lVar15 != 0);
        bVar16 = *pbVar1;
        pbVar10 = pbVar1;
LAB_00b5b8d6:
        pbVar19 = pbVar10 + 1;
        if (pbVar19 <= pbVar9) {
          pbVar18 = pbVar19;
          if (pbVar19 < pbVar9) {
            pbVar10 = pbVar2 + ((lVar17 + -2) - (int64_t)pbVar10);
            puVar11 = puVar8;
            do {
              bVar14 = *pbVar19;
              pbVar18 = pbVar19;
              if (bVar14 < 0xf8) goto LAB_00b5ba5e;
              puVar8 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar8 = &g_02539a88;
              puVar8[2] = 0;
              (*pcVar4)();
              if (puVar8 == puVar11) {
                puVar8 = puVar11;
                if (bVar3) {
                  FUN_00d50b20();
                  bVar5 = bVar3;
                }
                else {
                  bVar5 = true;
                }
              }
              else {
                bVar5 = true;
                if ((bVar3) && (puVar11 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              bVar3 = bVar5;
              FUN_00b51b40();
              FUN_00d21140();
              pbVar19 = pbVar19 + 1;
              pbVar10 = pbVar10 + -1;
              pbVar18 = pbVar1;
              puVar11 = puVar8;
            } while (pbVar10 != (byte *)0x0);
          }
          bVar14 = *pbVar18;
          puVar11 = puVar8;
LAB_00b5ba5e:
          pbVar19 = pbVar18 + 1;
          puVar8 = puVar11;
          if ((-1 < (char)bVar16) && (-1 < (char)bVar14)) {
            puVar8 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &g_02539a88;
            puVar8[2] = 0;
            (*pcVar4)();
            if (puVar8 == puVar11) {
              if (bVar3) {
                FUN_00d50b20();
                puVar8 = puVar11;
                bVar5 = bVar3;
              }
              else {
                puVar8 = puVar11;
                bVar5 = true;
              }
            }
            else {
              bVar5 = true;
              if ((bVar3) && (puVar11 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar5;
            FUN_00b51ba0(bVar14,bVar16);
          }
        }
      }
      else if (iVar6 == 1) {
        if (pbVar9 < pbVar19) goto LAB_00b5b860;
        if (pbVar19 < pbVar9) {
          lVar15 = (int64_t)pbVar1 - (int64_t)pbVar19;
          puVar11 = (void*)0x0;
          do {
            bVar16 = *pbVar19;
            pbVar10 = pbVar19;
            puVar8 = puVar11;
            if (bVar16 < 0xf8) goto LAB_00b5b9da;
            puVar8 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &g_02539a88;
            puVar8[2] = 0;
            (*pcVar4)();
            if (puVar8 == puVar11) {
              if (bVar3) {
                FUN_00d50b20();
                puVar8 = puVar11;
                bVar5 = bVar3;
              }
              else {
                puVar8 = puVar11;
                bVar5 = true;
              }
            }
            else {
              bVar5 = true;
              if ((bVar3) && (puVar11 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar5;
            FUN_00b51b40();
            FUN_00d21140();
            pbVar19 = pbVar19 + 1;
            lVar15 = lVar15 + -1;
            pbVar10 = pbVar1;
            puVar11 = puVar8;
          } while (lVar15 != 0);
        }
        else {
          puVar8 = (void*)0x0;
          pbVar10 = pbVar19;
        }
        bVar16 = *pbVar10;
LAB_00b5b9da:
        pbVar19 = pbVar10 + 1;
        if (-1 < (char)bVar16) {
          puVar11 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &g_02539a88;
          puVar11[2] = 0;
          uVar20 = (*pcVar4)();
          if (puVar11 == puVar8) {
            puVar11 = puVar8;
            if (bVar3) {
              uVar20 = FUN_00d50b20();
              bVar5 = bVar3;
            }
            else {
              bVar5 = true;
            }
          }
          else {
            bVar5 = true;
            if ((bVar3) && (puVar8 != (void*)0x0)) {
              uVar20 = FUN_00d50b20();
            }
          }
          bVar3 = bVar5;
          FUN_00b51b70(uVar20,bVar16);
          puVar8 = puVar11;
        }
      }
      else if (iVar6 == 0) {
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_02539a88;
        puVar8[2] = 0;
        (*pcVar4)();
        FUN_00b51b40();
        bVar3 = true;
      }
      else {
LAB_00b5b860:
        puVar8 = (void*)0x0;
      }
      bVar16 = bVar12;
      if (0xef < bVar12) {
        bVar16 = bVar13;
      }
      if (-1 < (char)bVar12) {
        bVar16 = bVar13;
      }
      bVar13 = bVar16;
      if ((bVar12 & 0xf8) == 0xf0) {
        bVar13 = 0;
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d21140();
      }
      bVar16 = bVar13 & 0xf0;
      if (0xef < bVar13) {
        bVar16 = bVar13;
      }
      puVar11 = puVar8;
    } while (pbVar19 <= pbVar9);
  }
LAB_00b5bb18:
  FUN_00d243f0();
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (puVar8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b5dfe0
// ============================================================
// Function: FUN_00b5dfe0
// Address: 00b5dfe0
// Size: 892 bytes
// Class: GNMidiFileTrack

void FUN_00b5dfe0(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  bool bVar6;
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
  int64_t local_30;
  char local_28;
  
  plVar5 = g_028a52e8;
  if ((g_028a52e8 == (int64_t *)0x0) || (g_028a52f1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a52e8 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028a52e8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = g_028a52e8 != (int64_t *)0x0;
        g_028a52e8 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028a52f0 == '\0') {
        g_028a52f0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0275e490;
      if (g_0275e490 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_02763080;
      if (g_02763080 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar4;
      local_98 = '\x01';
      FUN_00df16f0(param_1,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02763088;
      if (g_02763088 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar3;
      local_88 = '\x01';
      FUN_00df1690();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02763090;
      if (g_02763090 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar3;
      local_78 = '\x01';
      FUN_00df1570();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02763098;
      if (g_02763098 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1570();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027630a0;
      if (g_027630a0 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027630a8;
      if (g_027630a8 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027630b0;
      if (g_027630b0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1600();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_026e1828;
      if (g_026e1828 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1600();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028a52f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a52f1 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = g_028a52e8;
    *(void*)(this_ptr + 1) = 0;
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_00b5e33f;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b5e33f:
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00b5c850
// ============================================================
// Function: FUN_00b5c850
// Address: 00b5c850
// Size: 1313 bytes
// Class: GNMidiFileTrack
// String references:
//   "(GNMidiFileTrack:\n"
//   "  name:%@,\n"
//   "  texts:%@,\n"
//   "  instrument:%@,\n"
//   "  program:%@,\n"
//   "  device:%@,\n"
//   "  lyrics:%@,\n"
//   "  cuePoints:%@,\n"
//   "  no events"
//   "\n)"

void FUN_00b5c850(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t arg1;
  void*this_ptr;
  int64_t local_60;
  char local_58;
  void*local_50;
  char local_48;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d8db40();
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x20);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x40);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x48);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(arg1 + 0x10) == (int64_t *)0x0) {
    FUN_00d8db40();
  }
  else {
    (**(code **)(**(int64_t **)(arg1 + 0x10) + 400))();
    if ((local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8db40();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00b5d1a0
// ============================================================
// Function: FUN_00b5d1a0
// Address: 00b5d1a0
// Size: 622 bytes
// Class: GNMidiFileTrack

void FUN_00b5d1a0(double param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  double dVar6;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar1 == 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    puVar3 = *(void**)(this_ptr + 0x10);
    if (puVar3 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x10) = puVar4;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00b5a6a0(param_1);
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      while( true ) {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        dVar6 = (double)FUN_00b5beb0();
        if ((dVar6 == param_1) && (!NAN(dVar6) && !NAN(param_1))) break;
        if ((param_1 <= dVar6) || (lVar5 = lVar5 + 1, *(int *)(lVar1 + 0xc) <= lVar5))
        goto LAB_00b5d365;
      }
      if (lVar2 != 0) {
        FUN_00d50b00();
        FUN_00b5be00();
        FUN_00d50b20();
        return;
      }
    }
LAB_00b5d365:
    FUN_00b5a6a0(param_1);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00b5d580();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00b5af60
// ============================================================
// Function: FUN_00b5af60
// Address: 00b5af60
// Size: 536 bytes
// Class: GNMidiFileTrack

void FUN_00b5af60(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t *local_58;
  int local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(lVar1 + 0xc) == 0) {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      *(void*)(this_ptr + 0x18) = 0;
      FUN_00d50b20();
      return;
    }
  }
  else {
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      (**(code **)(*local_58 + 0x370))();
    }
    FUN_00b671d0();
    FUN_00c8e690();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    lVar1 = *(int64_t *)(this_ptr + 0x10);
    if (lVar1 != 0) {
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        pvVar5 = *(void **)(lVar1 + 0x10);
        plVar2 = *(int64_t **)((int64_t)pvVar5 + lVar4 * 8 + 8);
        iVar3 = (**(code **)(*plVar2 + 0x370))();
        (**(code **)(*plVar2 + 0x378))();
        _memcpy(pvVar5,(void *)(int64_t)iVar3,param_3);
      }
      FUN_00b671d0();
    }
    plVar2 = *(int64_t **)(this_ptr + 0x18);
    if (plVar2 != local_58) {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x18) = local_58;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


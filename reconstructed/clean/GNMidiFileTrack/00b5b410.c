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


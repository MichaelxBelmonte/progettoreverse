// Function: FUN_01c163e0
// Address: 01c163e0
// Size: 1420 bytes
// Class: MUDetectionPitchCenterAssignmentInspector

uint64_t FUN_01c163e0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  undefined7 uVar3;
  int64_t lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  undefined7 uVar11;
  int64_t lVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar14;
  uint64_t uVar15;
  float extraout_XMM0_Db;
  float fStack_b4;
  int64_t local_78;
  char local_70;
  float local_64;
  int64_t *local_60;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_60 = param_1;
  FUN_01a58dc0();
  if (local_40 == (int64_t *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5 == 0) {
    uVar13 = FUN_01a58dc0();
    if (local_40 != (int64_t *)0x0) {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 1) {
        iVar7 = FUN_01d3b630();
        uVar13 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (iVar7 == 1) {
          FUN_01a58dc0();
          FUN_01d3abf0();
          uVar15 = FUN_01e466c0();
          fStack_b4 = (float)((uint64_t)uVar15 >> 0x20);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar11 = (undefined7)((uint64_t)local_40 >> 8);
          if ((*param_2 != 0) && (iVar7 = FUN_01d3b620(), iVar7 == 2)) {
            FUN_01a58dc0();
            local_60 = (int64_t *)(**(code **)(*local_40 + 0x930))((int)uVar15);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01c16c70((int)local_60);
            uVar9 = CONCAT71(uVar11,1);
            goto LAB_01c165e2;
          }
          FUN_01a58dc0();
          (**(code **)(*local_50 + 0xe20))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            if ((*(int *)((int64_t)local_40 + 0xc) != 0) &&
               (cVar6 = (**(code **)(*this_ptr + 0x488))(), cVar6 != '\0')) {
LAB_01c166a0:
              lVar10 = *local_60;
              cVar6 = (char)local_60[1];
              lVar1 = *arg1;
              if (lVar1 == lVar10) {
                if (cVar6 != '\0') {
                  if (((char)arg1[1] == '\0') && (lVar10 != 0)) {
                    cVar6 = '\x01';
                    FUN_00d50b00();
                    goto LAB_01c16710;
                  }
                  goto LAB_01c16714;
                }
              }
              else {
                lVar4 = arg1[1];
                if ((cVar6 != '\0') && (lVar10 != 0)) {
                  FUN_00d50b00();
                }
                *arg1 = lVar10;
                if (((char)lVar4 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                }
LAB_01c16710:
                *(char *)(arg1 + 1) = cVar6;
LAB_01c16714:
                lVar10 = *arg1;
              }
              if (lVar10 == 0) {
                FUN_01a58dc0();
                (**(code **)(*local_50 + 0x658))();
                plVar2 = (int64_t *)*arg1;
                if (plVar2 == local_40) {
                  if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                      goto LAB_01c167d1;
                    }
                    goto LAB_01c16781;
                  }
LAB_01c1678a:
                  if (*arg1 != 0) goto LAB_01c16792;
LAB_01c167de:
                  bVar12 = false;
                  uVar3 = 0;
                }
                else {
                  lVar1 = arg1[1];
                  if (local_38 != '\0') {
                    *arg1 = (int64_t)local_40;
                    if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01c16781:
                    *(void*)(arg1 + 1) = 1;
                    local_38 = '\0';
                    goto LAB_01c1678a;
                  }
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  *arg1 = (int64_t)local_40;
                  if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01c167d1:
                  *(void*)(arg1 + 1) = 1;
                  if (*arg1 == 0) goto LAB_01c167de;
LAB_01c16792:
                  iVar7 = FUN_01d3a5a0();
                  bVar12 = iVar7 != 6;
                  uVar3 = uVar11;
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar2 = local_60;
                if (!bVar12) goto LAB_01c16943;
              }
              iVar7 = FUN_01d3a5a0();
              if (iVar7 == 5) {
                FUN_01a58dc0();
                FUN_01d3abf0();
                FUN_01e466c0();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01a58dc0();
                local_64 = (float)(**(code **)(*local_40 + 3000))();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar9 = FUN_01d3b590();
                fVar14 = (fStack_b4 - extraout_XMM0_Db) / local_64;
                if ((uVar9 & 8) != 0) {
                  fVar14 = fVar14 * g_02391090;
                }
                fStack_b4 = extraout_XMM0_Db;
                if (g_02394274 < (float)((uint)fVar14 & g_02390140)) {
                  FUN_01c17760();
                }
              }
              goto LAB_01c166a0;
            }
            uVar9 = 0;
            goto LAB_01c16969;
          }
          goto LAB_01c16470;
        }
      }
      else {
        uVar13 = extraout_XMM0_Da;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
    }
    local_78 = *param_2;
    local_70 = '\0';
    uVar8 = FUN_01a58d30(uVar13,&local_78);
    uVar9 = (uint64_t)uVar8;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01c16470:
    uVar9 = 0;
  }
LAB_01c165e2:
  return uVar9 & 0xffffffff;
LAB_01c16943:
  uVar9 = CONCAT71(uVar3,1);
  if (*local_60 != 0) {
    *local_60 = 0;
    if ((char)local_60[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(plVar2 + 1) = 0;
  }
LAB_01c16969:
  FUN_00d50b20();
  goto LAB_01c165e2;
}


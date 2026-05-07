// Function: FUN_018dd490
// Address: 018dd490
// Size: 4067 bytes
// Class: Unknown
// String references:
//   "%@%@"
//   "/%@"
//   "%@bass"
//   "add%@"
//   "omit%@"


/* WARNING: Removing unreachable block (ram,0x018de11d) */
/* WARNING: Removing unreachable block (ram,0x018dde89) */
/* WARNING: Removing unreachable block (ram,0x018dde96) */
/* WARNING: Removing unreachable block (ram,0x018dd4e2) */
/* WARNING: Removing unreachable block (ram,0x018dd4eb) */
/* WARNING: Removing unreachable block (ram,0x018dde19) */
/* WARNING: Removing unreachable block (ram,0x018dde26) */
/* WARNING: Removing unreachable block (ram,0x018de3bf) */
/* WARNING: Removing unreachable block (ram,0x018de3c8) */
/* WARNING: Removing unreachable block (ram,0x018ddde3) */
/* WARNING: Removing unreachable block (ram,0x018dddf0) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_018dd490(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar18;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_38;
  
  puVar10 = local_78;
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_00c8e690();
  if ((local_70 == '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  uVar12 = FUN_01716a70();
  uVar1 = *(ulonglong *)(*unaff_RSI + 0x18);
  uVar16 = (uint)uVar1;
  bVar18 = (~uVar16 & 0xf) != 0;
  if (bVar18) {
    *(undefined1 *)local_78[2] = 1;
  }
  iVar13 = (int)bVar18;
  if ((~uVar16 & 0xf0) != 0) {
    *(undefined1 *)(local_78[2] + 1) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar16 & 0xf00) != 0) {
    *(undefined1 *)(local_78[2] + 2) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar16 & 0xf000) != 0) {
    *(undefined1 *)(local_78[2] + 3) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar16 & 0xf0000) != 0) {
    *(undefined1 *)(local_78[2] + 4) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar16 & 0xf00000) != 0) {
    *(undefined1 *)(local_78[2] + 5) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar16 & 0xf000000) != 0) {
    *(undefined1 *)(local_78[2] + 6) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar16 & 0xf0000000) != 0) {
    *(undefined1 *)(local_78[2] + 7) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar1 & 0xf00000000) != 0) {
    *(undefined1 *)(local_78[2] + 8) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar1 & 0xf000000000) != 0) {
    *(undefined1 *)(local_78[2] + 9) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar1 & 0xf0000000000) != 0) {
    *(undefined1 *)(local_78[2] + 10) = 1;
    iVar13 = iVar13 + 1;
  }
  if ((~uVar1 & 0xf00000000000) != 0) {
    *(undefined1 *)(local_78[2] + 0xb) = 1;
    iVar13 = iVar13 + 1;
  }
  if (iVar13 == 0) {
    FUN_0171b9c0();
    local_110 = *unaff_RSI;
    local_108 = '\0';
    local_100 = 0;
    local_f8 = '\0';
    FUN_01721000(&local_100,&local_110);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    goto joined_r0x018de433;
  }
  if (iVar13 == 1) {
    local_38 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_38 = &DAT_025795a8;
    (*DAT_025795c0)();
    FUN_0177f010();
    FUN_01715620();
    FUN_01780260();
    if ((local_70 == '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    FUN_018d88f0(iVar13,1);
    if (local_70 == '\0') {
      if (local_78 != (undefined8 *)0x0) {
        FUN_00d50b00();
        goto LAB_018dd92a;
      }
LAB_018ddbfd:
      FUN_018daf60(1,uVar12,1,1,local_78,0);
      if (local_70 == '\0') {
        if (local_78 != (undefined8 *)0x0) {
          FUN_00d50b00();
          if (*(int *)((longlong)local_78 + 0xc) == 0) goto LAB_018dde58;
LAB_018ddc99:
          lVar2 = *(longlong *)local_78[2];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x20);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          FUN_0177f010();
          FUN_01715620();
          FUN_01780260();
          if (local_70 == '\0') {
            if (local_78 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          iVar13 = FUN_01715480();
          iVar14 = FUN_01716a70();
          iVar15 = FUN_01715620();
          iVar14 = iVar14 + iVar13;
          iVar14 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc
          ;
          if ((iVar15 < 0) ||
             (((iVar13 = FUN_00d8c7a0(), iVar13 != 0 && (cVar11 = FUN_00d8ca70(), cVar11 == '-')) &&
              (iVar15 < 5)))) {
            iVar14 = iVar14 + 0x18;
          }
          FUN_018e0500();
          lVar4 = *(longlong *)(local_78[2] + (longlong)iVar14 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          if (local_70 != '\0') {
            FUN_00d50b20();
          }
          lVar5 = *(longlong *)(lVar2 + 0x30);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          lVar6 = *(longlong *)(lVar2 + 0x28);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          local_38 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_38 = &DAT_025795a8;
          (*DAT_025795c0)();
          local_88 = local_78;
          local_d0 = lVar3;
          FUN_00083ea0(2,&local_d0);
          FUN_00d94d80();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            uVar16 = *(int *)(lVar6 + 0x18) + 3;
            if ((6 < uVar16) && (3 < *(int *)(lVar6 + 0x18))) {
              lVar17 = 0;
              do {
                puVar9 = DAT_027df8d0;
                puVar8 = DAT_02781720;
                local_78 = &DAT_024c5048;
                iVar13 = *(int *)(*(longlong *)(lVar6 + 0x10) + lVar17 * 4);
                if (iVar13 == 1) {
                  local_78 = puVar9;
                  if (DAT_027df8d0 != (undefined8 *)0x0) {
                    FUN_00d50b00();
                  }
LAB_018de06b:
                  bVar18 = local_78 != (undefined8 *)0x0;
                }
                else {
                  if (iVar13 == 2) {
                    local_78 = puVar8;
                    if (DAT_02781720 != (undefined8 *)0x0) {
                      FUN_00d50b00();
                    }
                    goto LAB_018de06b;
                  }
                  FUN_018df010(uVar16,0);
                  bVar18 = true;
                  if (local_70 == '\0') {
                    FUN_00d50b00();
                  }
                }
                local_70 = '\x01';
                if (local_78 != (undefined8 *)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d94d80();
                if (local_78 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
                if ((bVar18) && (local_78 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                lVar17 = lVar17 + 1;
                iVar13 = *(int *)(lVar6 + 0x18);
                iVar14 = iVar13 + 3;
                if (-1 < iVar13) {
                  iVar14 = iVar13;
                }
                uVar16 = iVar14 >> 2;
              } while (lVar17 < (int)uVar16);
            }
          }
          if (lVar5 != 0) {
            uVar16 = *(int *)(lVar5 + 0x18) + 3;
            if ((6 < uVar16) && (3 < *(int *)(lVar5 + 0x18))) {
              lVar17 = 0;
              do {
                FUN_018df010(uVar16,0);
                local_70 = '\x01';
                if (puVar10 != (undefined8 *)0x0) {
                  FUN_00d50b00();
                }
                FUN_00d94d80();
                if (puVar10 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (puVar10 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                lVar17 = lVar17 + 1;
                iVar13 = *(int *)(lVar5 + 0x18);
                iVar14 = iVar13 + 3;
                if (-1 < iVar13) {
                  iVar14 = iVar13;
                }
                uVar16 = iVar14 >> 2;
              } while (lVar17 < (int)uVar16);
            }
          }
          if (param_2 != '\0') {
            iVar13 = FUN_01715630();
            iVar14 = FUN_01715620();
            if (iVar13 != iVar14) {
              local_70 = '\x01';
              if (lVar4 != 0) {
                FUN_00d50b00();
              }
              FUN_00d94d80();
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
            }
          }
          local_78 = &DAT_024c5048;
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          bVar7 = true;
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
LAB_018de322:
          bVar18 = true;
          FUN_00d50b20();
          goto LAB_018de330;
        }
      }
      else if (local_78 != (undefined8 *)0x0) {
        if (*(int *)((longlong)local_78 + 0xc) != 0) goto LAB_018ddc99;
LAB_018dde58:
        bVar7 = false;
        local_38 = (undefined8 *)0x0;
        goto LAB_018de322;
      }
      bVar7 = false;
LAB_018de34b:
      FUN_0171b9c0();
      local_f0 = *unaff_RSI;
      local_e8 = '\0';
      local_e0 = 0;
      local_d8 = '\0';
      FUN_01721000(&local_e0,&local_f0);
      if (local_78 == (undefined8 *)0x0) {
        local_78 = (undefined8 *)0x0;
      }
      else if (local_70 == '\0') {
        FUN_00d50b00();
        bVar7 = true;
      }
      else {
        bVar7 = true;
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      local_38 = local_78;
      if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == (undefined8 *)0x0) goto LAB_018ddbfd;
LAB_018dd92a:
      lVar2 = local_78[4];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_0177f010();
      FUN_01715620();
      FUN_01780260();
      if (local_70 == '\0') {
        if (local_78 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      iVar13 = FUN_01715480();
      iVar14 = FUN_01716a70();
      iVar15 = FUN_01715620();
      iVar14 = iVar14 + iVar13;
      iVar14 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
      if ((iVar15 < 0) ||
         (((iVar13 = FUN_00d8c7a0(), iVar13 != 0 && (cVar11 = FUN_00d8ca70(), cVar11 == '-')) &&
          (iVar15 < 5)))) {
        iVar14 = iVar14 + 0x18;
      }
      FUN_018e0500();
      lVar3 = *(longlong *)(local_78[2] + (longlong)iVar14 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      if (local_70 != '\0') {
        FUN_00d50b20();
      }
      local_38 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_38 = &DAT_025795a8;
      (*DAT_025795c0)();
      local_88 = local_78;
      local_d0 = lVar2;
      FUN_00083ea0(2,&local_d0);
      FUN_00d94d80();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (param_2 != '\0') {
        iVar13 = FUN_01715630();
        iVar14 = FUN_01715620();
        if (iVar13 != iVar14) {
          local_70 = '\x01';
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          FUN_00d94d80();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      local_78 = &DAT_024c5048;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (puVar10 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      bVar18 = false;
      bVar7 = true;
LAB_018de330:
      if (!bVar18) {
        FUN_00d50b20();
      }
      if (local_38 == (undefined8 *)0x0) goto LAB_018de34b;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar7) {
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_38;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto joined_r0x018de433;
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x018de433:
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



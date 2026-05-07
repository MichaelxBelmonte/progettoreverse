// Function: FUN_018d88f0
// Address: 018d88f0
// Size: 2669 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018d8b02) */
/* WARNING: Removing unreachable block (ram,0x018d8b0e) */
/* WARNING: Removing unreachable block (ram,0x018d8cd0) */
/* WARNING: Removing unreachable block (ram,0x018d8cdc) */
/* WARNING: Removing unreachable block (ram,0x018d8bf0) */
/* WARNING: Removing unreachable block (ram,0x018d8bfc) */
/* WARNING: Removing unreachable block (ram,0x018d8db4) */
/* WARNING: Removing unreachable block (ram,0x018d8dc0) */
/* WARNING: Removing unreachable block (ram,0x018d8ffc) */
/* WARNING: Removing unreachable block (ram,0x018d9008) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018d88f0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  longlong local_108;
  char local_100;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    lVar8 = *(longlong *)PTR____stack_chk_guard_024a9898;
    goto joined_r0x018d8a0e;
  }
  FUN_018d8790();
  if (local_100 == '\0') {
    if (local_108 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_100 = '\0';
  }
  if (0 < *(int *)(local_108 + 0xc)) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(local_108 + 0x10) + lVar8 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      plVar3 = (longlong *)**(longlong **)(*(longlong *)(lVar2 + 0x18) + 0x10);
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar9 = DAT_027df500;
      if (DAT_027df500 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar3 + 0x50))();
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      uVar11 = FUN_00d50b20();
      if (cVar5 == '\0') {
        plVar3 = (longlong *)**(longlong **)(*(longlong *)(lVar2 + 0x18) + 0x10);
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar9 = DAT_027df300;
        if (DAT_027df300 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x50))();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        uVar11 = FUN_00d50b20();
        if (cVar5 != '\0') {
          FUN_00c8e2b0(uVar11,0x30);
          if ((local_100 == '\0') && (local_108 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          goto LAB_018d8de0;
        }
        plVar3 = (longlong *)**(longlong **)(*(longlong *)(lVar2 + 0x18) + 0x10);
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar9 = DAT_027df338;
        if (DAT_027df338 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x50))();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        uVar11 = FUN_00d50b20();
        if (cVar5 != '\0') {
          FUN_00c8e2b0(uVar11,0x30);
          if ((local_100 == '\0') && (local_108 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          goto LAB_018d8de0;
        }
        plVar3 = (longlong *)**(longlong **)(*(longlong *)(lVar2 + 0x18) + 0x10);
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar9 = DAT_027df2b0;
        if (DAT_027df2b0 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x50))();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        uVar11 = FUN_00d50b20();
        if (cVar5 != '\0') {
          FUN_00c8e2b0(uVar11,0x30);
          if ((local_100 == '\0') && (local_108 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          goto LAB_018d8de0;
        }
        lVar9 = *(longlong *)(lVar2 + 0x10);
        if (lVar9 == 0) {
          bVar10 = false;
          lVar9 = 0;
        }
        else {
          FUN_00d50b00();
          bVar10 = true;
        }
      }
      else {
        FUN_00c8e2b0(uVar11,0x30);
        if ((local_100 == '\0') && (local_108 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
LAB_018d8de0:
        bVar10 = local_108 != 0;
        lVar9 = local_108;
      }
      piVar4 = *(int **)(lVar9 + 0x10);
      uVar6 = (uint)*(ulonglong *)(*unaff_RSI + 0x18);
      if ((((((((~uVar6 & 0xf) != 0) == 3 < *piVar4) && (((~uVar6 & 0xf0) != 0) == 3 < piVar4[1]))
            && (((~uVar6 & 0xf00) != 0) == 3 < piVar4[2])) &&
           (((((~uVar6 & 0xf000) != 0) == 3 < piVar4[3] &&
             (((~uVar6 & 0xf0000) != 0) == 3 < piVar4[4])) &&
            ((((~uVar6 & 0xf00000) != 0) == 3 < piVar4[5] &&
             ((((~uVar6 & 0xf000000) != 0) == 3 < piVar4[6] &&
              (((uVar6 & 0xf0000000) != 0xf0000000) == 3 < piVar4[7])))))))) &&
          (uVar7 = ~*(ulonglong *)(*unaff_RSI + 0x18), ((uVar7 & 0xf00000000) != 0) == 3 < piVar4[8]
          )) && (((((uVar7 & 0xf000000000) != 0) == 3 < piVar4[9] &&
                  (((uVar7 & 0xf0000000000) != 0) == 3 < piVar4[10])) &&
                 (((uVar7 & 0xf00000000000) != 0) == 3 < piVar4[0xb])))) {
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (bVar10) {
          FUN_00d50b20();
        }
        goto LAB_018d9319;
      }
      if (bVar10) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(local_108 + 0xc));
  }
  if (param_2 == '\0') {
    FUN_00c8e690();
    if ((local_100 == '\0') && (local_108 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    ___bzero();
    uVar11 = FUN_01716a70();
    uVar7 = *(ulonglong *)(*unaff_RSI + 0x18);
    uVar6 = (uint)uVar7;
    if ((~uVar6 & 0xf) != 0) {
      **(undefined1 **)(local_108 + 0x10) = 1;
    }
    if ((~uVar6 & 0xf0) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 1) = 1;
    }
    if ((~uVar6 & 0xf00) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 2) = 1;
    }
    if ((~uVar6 & 0xf000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 3) = 1;
    }
    if ((~uVar6 & 0xf0000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 4) = 1;
    }
    if ((~uVar6 & 0xf00000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 5) = 1;
    }
    if ((~uVar6 & 0xf000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 6) = 1;
    }
    if ((uVar6 & 0xf0000000) != 0xf0000000) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 7) = 1;
    }
    if ((~uVar7 & 0xf00000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 8) = 1;
    }
    if ((~uVar7 & 0xf000000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 9) = 1;
    }
    if ((~uVar7 & 0xf0000000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 10) = 1;
    }
    if ((~uVar7 & 0xf00000000000) != 0) {
      *(undefined1 *)(*(longlong *)(local_108 + 0x10) + 0xb) = 1;
    }
    FUN_018daf60(1,uVar11,1,1,0);
    if (local_100 == '\0') {
      if (local_108 == 0) goto LAB_018d92eb;
      FUN_00d50b00();
LAB_018d92b6:
      if (*(int *)(local_108 + 0xc) == 0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      else {
        lVar8 = **(longlong **)(local_108 + 0x10);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar8;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      FUN_00d50b20();
    }
    else {
      if (local_108 != 0) goto LAB_018d92b6;
LAB_018d92eb:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    FUN_00d50b20();
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
LAB_018d9319:
  FUN_00d50b20();
  lVar8 = *(longlong *)PTR____stack_chk_guard_024a9898;
joined_r0x018d8a0e:
  if (lVar8 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



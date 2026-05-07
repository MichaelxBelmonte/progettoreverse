// Function: FUN_01d03810
// Address: 01d03810
// Size: 1601 bytes
// Class: GNMenu


/* WARNING: Removing unreachable block (ram,0x01d03bea) */
/* WARNING: Removing unreachable block (ram,0x01d03bf6) */
/* WARNING: Removing unreachable block (ram,0x01d03d46) */
/* WARNING: Removing unreachable block (ram,0x01d03d53) */

void FUN_01d03810(undefined8 param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined7 uVar9;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar13;
  float local_d8;
  longlong local_68;
  char local_60;
  longlong *local_50;
  char local_48 [8];
  undefined8 local_40;
  char local_38 [8];
  
  plVar11 = unaff_RDI + 0x39;
  lVar5 = *unaff_RSI;
  lVar1 = unaff_RDI[0x39];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *plVar11 = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x620))();
  if ((longlong *)unaff_RDI[0x3a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x3a] + 0x918))();
  }
  plVar7 = (longlong *)*plVar11;
  if ((plVar7 == (longlong *)0x0) || ((char)plVar7[4] != '\0')) {
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar3 = *(int *)((longlong)local_50 + 0xc);
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar3 == 0) break;
      (**(code **)(*unaff_RDI + 0x4a0))();
      FUN_00d23340();
      local_38[0] = local_48[0];
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_001b9d20();
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') {
      plVar11 = &DAT_02802688;
    }
    if (*plVar11 != 0) {
      FUN_00d50b00();
      local_d8 = (float)FUN_01e3f820();
      iVar3 = FUN_01f7c6f0();
      local_40 = 0;
      plVar11 = (longlong *)0x0;
      for (uVar10 = 0; iVar4 = FUN_01f7c6f0(), (longlong)uVar10 < (longlong)iVar4;
          uVar10 = uVar10 + 1) {
        if ((longlong)uVar10 < (longlong)*(int *)(unaff_RDI[7] + 0xc)) {
          lVar5 = *(longlong *)(unaff_RDI[7] + 0x10);
          plVar7 = *(longlong **)(lVar5 + uVar10 * 8);
          uVar13 = extraout_XMM0_Da;
          if (plVar11 == plVar7) {
            if (((char)local_40 == '\0') && (plVar11 != (longlong *)0x0)) {
              local_40 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            if (plVar7 != (longlong *)0x0) {
              lVar5 = FUN_00d50b00();
              uVar13 = extraout_XMM0_Da_00;
            }
            if (((char)local_40 == '\0') || (plVar11 == (longlong *)0x0)) {
              local_40 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              plVar11 = plVar7;
            }
            else {
              uVar6 = FUN_00d50b20();
              local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              plVar11 = plVar7;
              uVar13 = extraout_XMM0_Da_01;
            }
          }
        }
        else {
          plVar7 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *(undefined4 *)(plVar7 + 0x27) = 0;
          plVar7[0x2e] = 0;
          *(undefined4 *)(plVar7 + 0x2f) = 0;
          plVar7[0x30] = 0;
          *(undefined1 *)(plVar7 + 0x31) = 0;
          plVar7[0x28] = 0;
          plVar7[0x29] = 0;
          *(undefined4 *)(plVar7 + 0x2a) = 0;
          plVar7[0x2b] = 0;
          plVar7[0x2c] = 0;
          *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
          plVar7[0x35] = 0;
          plVar7[0x36] = 0;
          plVar7[0x37] = 0;
          plVar7[0x38] = 0;
          *plVar7 = (longlong)&DAT_02679c28;
          plVar7[2] = (longlong)&DAT_0267a6f0;
          plVar7[0x39] = 0;
          plVar7[0x3a] = 0;
          uVar6 = FUN_00d500e0();
          uVar9 = (undefined7)((ulonglong)uVar6 >> 8);
          if (plVar7 == plVar11) {
            plVar7 = plVar11;
            if ((char)local_40 == '\0') {
              local_40 = CONCAT71(uVar9,1);
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            bVar12 = (char)local_40 != '\0';
            local_40 = CONCAT71(uVar9,1);
            if ((bVar12) && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar11 = plVar7;
          uVar13 = (**(code **)(*unaff_RDI + 0x450))();
        }
        FUN_01f7c770(uVar13,uVar10 & 0xffffffff);
        if (local_48[0] == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_01d03810();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x4d0))(local_d8,param_2 / (float)iVar3);
        FUN_00d50b00();
        (**(code **)(*plVar11 + 0xa20))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = DAT_027ef470;
        if (DAT_027ef470 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar11 + 0xa10))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar11 + 0x6e8))();
        local_d8 = local_d8 + param_2 / (float)iVar3;
      }
      while( true ) {
        (**(code **)(*unaff_RDI + 0x4a0))();
        iVar3 = *(int *)((longlong)local_50 + 0xc);
        iVar4 = FUN_01f7c6f0();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar3 <= iVar4) break;
        (**(code **)(*unaff_RDI + 0x4a0))();
        FUN_00d23340();
        local_38[0] = local_48[0];
        pcVar8 = local_48;
        if (local_48[0] == '\0') {
          pcVar8 = local_38;
        }
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_50 + 0x478))();
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}



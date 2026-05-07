// Function: FUN_01d39530
// Address: 01d39530
// Size: 504 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01d395da) */
/* WARNING: Removing unreachable block (ram,0x01d395e3) */

void FUN_01d39530(void)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x41) = 0;
  uVar11 = FUN_00d500e0();
  if (0 < *(int *)(unaff_RSI + 8)) {
    iVar9 = 0;
    do {
      FUN_00e8d170(uVar11,iVar9);
      lVar6 = CONCAT44(uStack_54,local_58);
      if (((char)uStack_50 == '\0') && (lVar6 != 0)) {
        FUN_00d50b00();
      }
      local_60 = 0;
      local_78 = 0;
      while( true ) {
        uVar11 = FUN_01d38ea0();
        iVar2 = *(int *)(CONCAT44(uStack_54,local_58) + 0x18);
        if (((char)uStack_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
          uVar11 = FUN_00d50b20();
        }
        if (iVar2 / 0x1c <= local_78) break;
        FUN_01d38ea0();
        lVar3 = *(longlong *)(local_70 + 0x10);
        uVar11 = *(undefined4 *)(lVar3 + local_60);
        puVar1 = (undefined4 *)(lVar3 + 4 + local_60);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uVar5 = puVar1[3];
        uVar4 = *(undefined8 *)(lVar3 + 0x14 + local_60);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        uVar10 = uVar11;
        if (iVar9 != 0) {
          uVar10 = 1;
        }
        if (local_60 != 0) {
          uVar10 = uVar11;
        }
        uVar11 = FUN_01d38ea0();
        lVar8 = (longlong)*(int *)(local_70 + 0x18);
        FUN_00c8e340(uVar11,1);
        lVar3 = *(longlong *)(local_70 + 0x10);
        *(undefined4 *)(lVar3 + lVar8) = uVar10;
        *(undefined8 *)(lVar3 + 0x14 + lVar8) = uVar4;
        puVar1 = (undefined4 *)(lVar3 + 4 + lVar8);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uVar5;
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        local_78 = local_78 + 1;
        local_60 = local_60 + 0x1c;
      }
      if (lVar6 != 0) {
        uVar11 = FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_RSI + 8));
  }
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


